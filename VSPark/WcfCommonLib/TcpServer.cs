using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Net;
using System.Net.Sockets;
using System.Configuration;
using System.Collections;

namespace WcfCommonLib
{
    public class TcpServer
    {
        private Int32 nParkIDSize = 10;
        private Socket listener = null;
        private Hashtable peerSocks = null;
        private Int32 nPort = 9012;
        private IPEndPoint endPoint = null;
        private AsyncCallback asyncAccept = null;
        private AsyncCallback asyncSendt = null;

        private class SendState
        {
            public Socket peer = null;
            public string strParkID = null;
            public string strData = null;
        }

        private void AsyncCallbaclAsync(IAsyncResult iResult)
        {
            Socket objListener = (Socket)iResult.AsyncState;

            byte[] parkIDBuffer;
            Int32 nTransferSize = 0;
            Socket peerSocket = objListener.EndAccept(out parkIDBuffer, out nTransferSize, iResult);

            if (nParkIDSize <= nTransferSize)
            {
                string strParkID = Encoding.UTF8.GetString(parkIDBuffer, 0, nParkIDSize);

                if (peerSocks.ContainsKey(strParkID))
                {
                    Socket peer = (Socket ) peerSocks[strParkID];
                    if (null != peer)
                    {
                        peer.Close();
                    }

                    peerSocks.Remove(strParkID);
                }

                peerSocks.Add(strParkID, peerSocket);
          
                //StateObject state = new StateObject();
                //state.workSocket = handler;
                //handler.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0,
                //new AsyncCallback(ReadCallback), state);

            }

            if (objListener.IsBound)
            {
                objListener.BeginAccept(nParkIDSize, asyncAccept, objListener);
            }
        }

        public TcpServer()
        {
            string strPort = ConfigurationManager.AppSettings.Get("ListenerPort");
            nPort = Convert.ToInt32(strPort);
            endPoint = new IPEndPoint(IPAddress.Any, nPort);
            peerSocks = new Hashtable();
            asyncSendt = new AsyncCallback(SendCB);
        }

        private Socket GetPeerSocket(string strParkID)
        {
            Socket peer = peerSocks[strParkID] as Socket;
            return peer;
        }

        public void Send2Client(string strParkID, string strData)
        {
            Socket peer = GetPeerSocket(strParkID);
            if (null == peer)
            {
                return;
            }

            byte[] byBuffer = Encoding.UTF8.GetBytes(strData);
            peer.BeginSend(byBuffer, 0, byBuffer.Length, SocketFlags.None, asyncSendt, peer);
        }

        private void SendCB(IAsyncResult ar)
        {
            Socket peer = (Socket)ar.AsyncState;
            Int32 nRet = peer.EndSend(ar);
            System.Diagnostics.Debug.Print("Server send to client ");
        }

        public void StartServer()
        {
            if (null == listener)
            {
                listener = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp );
            }

            if (listener.IsBound)
            {
                return;
            }

            if (null == asyncAccept)
            {
                asyncAccept = new AsyncCallback(AsyncCallbaclAsync);
            }

            listener.Bind(endPoint);
            listener.Listen(1000);

            listener.BeginAccept(nParkIDSize, asyncAccept, listener);
        }

        public void StopServer()
        {
            if (null == listener)
            {
                return;
            }

            //listener.Shutdown(SocketShutdown.Both);
            listener.Close();
        }
    }
}
