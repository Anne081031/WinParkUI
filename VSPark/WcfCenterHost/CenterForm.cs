using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.ServiceModel;
using WcfCenterService;
using WcfCenterHost.WcfRoadSvcReference;
using System.Diagnostics;
using WcfCommonLib;
using System.Net.Sockets;
using System.Threading;

namespace WcfCenterHost
{
    public partial class CenterForm : Form
    {
        private ServiceHost svcHost = null;
        //private RoadServiceClient client = null;
        private SimpleWebSerer webServer = null;
        private WcfCommonLib.TcpServer tcpServer = null;
        private SynchronizationContext mainSC = null;
        private SendOrPostCallback scCallback = null;
        
        public CenterForm()
        {
            InitializeComponent();
        }

        private void DisplayLog(string strLog)
        {
            txtLog.AppendText(strLog);
            txtLog.AppendText("\n");
        }

        private void Test(int value)
        {
            Debug.Print(value.ToString());

            //RoadServiceClient client = new RoadServiceClient();
            //client.CenterCall( );
            //client.Close();
        }

        private void CenterForm_Load(object sender, EventArgs e)
        {
            if (SingleApp.AppExist("C024F8AB-3F9A-495D-B6B4-044FF802BD5C"))
            {
                Application.Exit();
            }

            mainSC = SynchronizationContext.Current;
            scCallback = new SendOrPostCallback(MainScCallback);
            svcHost = new ServiceHost(typeof(CenterService));
            //svcHost = new ServiceHost( new CenterService( ) );
            svcHost.Open();

            //objCenter = svcHost.SingletonInstance as CenterService;
            //CenterService.t += Test;

            //client = new RoadServiceClient();

            webServer = new SimpleWebSerer();
            webServer.QueryEvent += new SimpleWebSerer.QueryEventHandler(webServer_QueryEvent);
            webServer.StartServer();

            tcpServer = new WcfCommonLib.TcpServer();
            tcpServer.StartServer();
        }

        private void MainScCallback( object state )
        {
            if (null == state)
            {
                return;
            }

            DisplayLog(state.ToString());
        }

        private void webServer_QueryEvent(object sender, SimpleWebSerer.WebEVentArgs e)
        {
            // LocationID | RecordID 
            // Data comes from IIS.

            //DisplayLog(e.QueryString);
            mainSC.Post(scCallback, e.QueryString);
            
            string[] strQuery = e.QueryString.Split( new char[ ] { '|' } );
            if (strQuery.Length < 2)
            {
                return;
            }

            if (16 != strQuery[0].Length)
            {
                return;
            }
            
            string strLocationID = strQuery[0].Substring(0, 10);
            tcpServer.Send2Client(strLocationID, strQuery[1]);
        }

        private void CenterForm_FormClosed(object sender, FormClosedEventArgs e)
        {
            if (null == svcHost)
            {
                return;
            }

            //client.Close();
            tcpServer.StopServer();
            svcHost.Close();
            webServer.StopServer();
        }

        private void btnClearLog_Click(object sender, EventArgs e)
        {
            txtLog.Clear();
        }
    }
}
