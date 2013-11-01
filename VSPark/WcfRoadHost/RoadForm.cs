using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.ServiceModel;
using WcfRoadService;
using WcfRoadHost.WcfCenterSvcReference;
using System.Diagnostics;
using WcfCommonLib;
using System.Net.Sockets;
using System.Threading;

namespace WcfRoadHost
{
    public partial class RoadForm : Form
    {
        //private ServiceHost svcHost = null;
        private CenterServiceClient client = null;
        private WcfCommonLib.TcpClient tcpClient = null;
        private SimpleWebSerer webServer = null;
        private SynchronizationContext mainSC = null;
        private SendOrPostCallback scCallback = null;

        private void DisplayLog(string strText)
        {
            txtLog.AppendText(strText);
            txtLog.AppendText("\n");
        }

        public RoadForm()
        {
            InitializeComponent();
        }

        private void Test(int value)
        {
            Debug.Print(value.ToString() );
        }

        private void RoadForm_Load(object sender, EventArgs e)
        {
            if (SingleApp.AppExist("2571EFFE-7388-4990-AAC3-B645329DDBCE"))
            {
                Application.Exit();
            }

            mainSC = SynchronizationContext.Current;
            scCallback = new SendOrPostCallback(MainScCallback);

            tcpClient = new WcfCommonLib.TcpClient();
            tcpClient.QueryEvent += new WcfCommonLib.TcpClient.QueryEventHandler(tcpClient_QueryEvent);

            //svcHost = new ServiceHost( typeof ( RoadService ) );
            //svcHost = new ServiceHost( new RoadService( ) );
            //svcHost.Open();

            //objRoad = svcHost.SingletonInstance as RoadService;
            //RoadService.t += Test;

            client = new CenterServiceClient();
            webServer = new SimpleWebSerer();
            webServer.StartServer();
            ConnectServer();
        }

        private void MainScCallback(object state)
        {
            if (null == state)
            {
                return;
            }

            DisplayLog(state.ToString());
        }

        private void tcpClient_QueryEvent(object sender, WcfCommonLib.TcpClient.SocketEVentArgs e)
        {
            mainSC.Post(scCallback, e.QueryString);
        }

        private void RoadForm_FormClosed(object sender, FormClosedEventArgs e)
        {
            tcpClient.DisconnectServer();
            client.Close();
            //svcHost.Close();
            webServer.StopServer();
        }

        private void btnTest_Click(object sender, EventArgs e)
        {
            //CenterServiceClient client = new CenterServiceClient();
            //MessageBox.Show( client.GetData(1234) );
            //client.Close();
            txtLog.Clear();
        }

        private void ConnectServer( )
        {
            try
            {
                tcpClient.ConnectServer();
            }
            catch (Exception ex)
            {
                DisplayLog(ex.Message);
            }
        }

        private void timerReconnect_Tick(object sender, EventArgs e)
        {
            timerReconnect.Enabled = false;

            try
            {
                tcpClient.ReconnectServer();
            }
            catch (Exception ex)
            {
                DisplayLog(ex.Message);
            }

            timerReconnect.Enabled = true;
        }
    }
}
