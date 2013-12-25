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
        private AsyncCallback asyncSend= null;

        private class SendState
        {
            public Socket peerSocket = null;
            public string strParkID = null;
        }

        public class MessageEventArgs : EventArgs
        {
            public MessageEventArgs(string strMessage, bool bCrossThread)
            {
                this.strMessage = strMessage;
                this.bCrossThread = bCrossThread;
            }

            public string strMessage;
            public bool bCrossThread;
        }

        protected void OnMessageEvent(MessageEventArgs e)
        {
            if (null == MessageEvent)
            {
                return;
            }

            MessageEvent(this, e);
        }

        public delegate void MessageEventHandler(object sender, MessageEventArgs e);
        public event MessageEventHandler MessageEvent;

        private void SendMessage(Socket peerSocket, string strParkID, bool bCrossThread, string strExtra)
        {
            StringBuilder builder = new StringBuilder();

            IPEndPoint clientIP = peerSocket.RemoteEndPoint as IPEndPoint;
            IPEndPoint peerIP = peerSocket.LocalEndPoint as IPEndPoint;

            builder.AppendFormat("【ParkID:{0}】【Client {1}:{2}】【Peer {3}:{4}】{5}", strParkID,
                clientIP.Address.ToString(), clientIP.Port,
                peerIP.Address.ToString(), peerIP.Port,
                strExtra );

            OnMessageEvent(new MessageEventArgs(builder.ToString(), bCrossThread));
        }

        private void AsyncAcceptCB(IAsyncResult iResult)
        {
            Socket objListener = (Socket)iResult.AsyncState;

            byte[] parkIDBuffer;
            Int32 nTransferSize = 0;
            Socket peerSocket = objListener.EndAccept(out parkIDBuffer, out nTransferSize, iResult);
            string strExtra = "Connected";

            string strParkID = Encoding.UTF8.GetString(parkIDBuffer, 0, nTransferSize);
            StringBuilder builder = new StringBuilder();
            builder.AppendFormat("Accept to receive data【{0} Size = {1}】", strParkID, nTransferSize);
            OnMessageEvent(new MessageEventArgs(builder.ToString(), true));

            if (nParkIDSize <= nTransferSize)
            {
                strParkID = Encoding.UTF8.GetString(parkIDBuffer, 0, nParkIDSize);

                lock(this)

                if (peerSocks.ContainsKey(strParkID))
                {
                    Socket peer = GetPeerSocket(strParkID);
                    if (null != peer)
                    {
                        peer.Close();
                    }

                    peerSocks.Remove(strParkID);
                    strExtra += "【Remove existence】";
                }

                peerSocks.Add(strParkID, peerSocket);
          
                //StateObject state = new StateObject();
                //state.workSocket = handler;
                //handler.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0,
                //new AsyncCallback(ReadCallback), state);

                SendMessage(peerSocket, strParkID, true, strExtra);
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
            asyncSend = new AsyncCallback(SendCB);
        }

        private Socket GetPeerSocket(string strParkID)
        {
            Socket peer = peerSocks[strParkID] as Socket;
            return peer;
        }

        public void Send2Client(string strParkID, string strData)
        {
            Socket peer = null;
            lock(this)

            peer = GetPeerSocket(strParkID);
            if (null == peer || !peer.Connected )
            {
                if (null != peer)
                {
                    //peer.Close();
                    //peerSocks.Remove(strParkID);
                    OnMessageEvent(new MessageEventArgs("Send2Client Peer Disconnected", true));
                }

                OnMessageEvent(new MessageEventArgs(null == peer ? "Send2Client null == peer" : "Send2Client false == Connected", true));
                return;
            }

            byte[] byBuffer = Encoding.UTF8.GetBytes(strData);
            SendState state = new SendState();
            state.peerSocket = peer;
            state.strParkID = strParkID;
            peer.BeginSend(byBuffer, 0, byBuffer.Length, SocketFlags.None, asyncSend, state);
        }

        private void SendCB(IAsyncResult ar)
        {
            SendState state = (SendState)ar.AsyncState;
            Int32 nRet = state.peerSocket.EndSend(ar);
            string strExtra = "Server send to client size : " + nRet.ToString();

            SendMessage(state.peerSocket, state.strParkID, true, strExtra);
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
                asyncAccept = new AsyncCallback(AsyncAcceptCB);
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
