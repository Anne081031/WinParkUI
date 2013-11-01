using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Net;
using System.Net.Sockets;
using System.Configuration;
using System.Collections;
using System.Threading;

namespace WcfCommonLib
{
    public class TcpClient
    {
        private class ReadStateObject
        {
            public Socket workSocket = null;
            public const int BUFFER_SIZE = 1024;
            public byte[] buffer = new byte[BUFFER_SIZE];
            public StringBuilder sb = new StringBuilder();
        }

        public class SocketEVentArgs : EventArgs
        {
            private string strQueryString;

            public string QueryString
            {
                get { return this.strQueryString; }
                set { this.strQueryString = value; }
            }
        }

        public delegate void QueryEventHandler(object sender, SocketEVentArgs e);
        public event QueryEventHandler QueryEvent;

        protected void OnQueryEvent(SocketEVentArgs e)
        {
            if (null == QueryEvent)
            {
                return;
            }

            QueryEvent(this, e);
        }

        private Socket client = null;
        private string strIP = null;
        private Int32 nPort = 0;
        private string strParkID = null;
        private IPEndPoint endPoint = null;
        private AsyncCallback asyncRead = null;
        private ReadStateObject readState = new ReadStateObject();

        private void ReadCB(IAsyncResult ar)
        {
            ReadStateObject state = (ReadStateObject)ar.AsyncState;
            if (!state.workSocket.Connected)
            {
                return;
            }

            int nReadSize = 0;

            try
            {
                nReadSize = state.workSocket.EndReceive(ar);
            }
            catch (Exception ex)
            {
                System.Diagnostics.Debug.Print(ex.Message);
            }

            if (0 < nReadSize)
            {
                string strQuery = Encoding.UTF8.GetString(state.buffer, 0, nReadSize);

                SocketEVentArgs e = new SocketEVentArgs();
                e.QueryString = strQuery;
                OnQueryEvent(e);
            }

            if (state.workSocket.Connected)
            {
                state.workSocket.BeginReceive(state.buffer, 0, ReadStateObject.BUFFER_SIZE, SocketFlags.None, ReadCB, state);
            }
        }

        public TcpClient()
        {
            strIP = ConfigurationManager.AppSettings.Get("SocketServer");
            string strPort = ConfigurationManager.AppSettings.Get("SocketPort");
            nPort = Convert.ToInt32(strPort);
            IPAddress addr = IPAddress.Parse(strIP);
            endPoint = new IPEndPoint(addr, nPort);
            asyncRead = new AsyncCallback(ReadCB);
        }

        private void ConnectCB(IAsyncResult ar)
        {
            Socket socketClient = (Socket)ar.AsyncState;
            if (null == socketClient)
            {
                return;
            }
            socketClient.EndConnect(ar);

            if (socketClient.Connected)
            {
                strParkID = ConfigurationManager.AppSettings.Get("ParkID");
                byte[] dataBuffer = Encoding.UTF8.GetBytes(strParkID);
                socketClient.Send(dataBuffer);
            }
        }

        public void ReconnectServer()
        {
            bool blockingState = client.Blocking;

            try
            {
                byte[] tmp = new byte[1];

                client.Blocking = false;
                client.Send(tmp, 0, 0);
                System.Diagnostics.Debug.Print("Connected!");
            }
            catch (SocketException e)
            {
                // 10035 == WSAEWOULDBLOCK
                if (e.NativeErrorCode.Equals(10035))
                    System.Diagnostics.Debug.Print("Still Connected, but the Send would block");
                else
                {
                    System.Diagnostics.Debug.Print("Disconnected: error code {0}!", e.NativeErrorCode);
                    client.Blocking = blockingState;
                    ConnectServer();
                }
            }
            finally
            {
                //client.Blocking = blockingState;
            }

            System.Diagnostics.Debug.Print("Connected: {0}", client.Connected);
        }

        public void ConnectServer( )
        {
            if (null != client)
            {
                client.Close();
                client = null;
            }

            client = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
            //client.BeginConnect(endPoint, asyncConnect, client);
            client.Connect(endPoint);
            if (client.Connected)
            {
                readState.workSocket = client;
                strParkID = ConfigurationManager.AppSettings.Get("ParkID");
                byte[] dataBuffer = Encoding.UTF8.GetBytes(strParkID);
                client.Send(dataBuffer);
                client.BeginReceive(readState.buffer, 0, ReadStateObject.BUFFER_SIZE, SocketFlags.None, ReadCB, readState);
            }
        }

        public void DisconnectServer()
        {
            //client.Disconnect(true);
            client.Close();
        }
    }
}
