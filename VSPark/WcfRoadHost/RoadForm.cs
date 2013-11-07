using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.ServiceModel;
using WcfRoadHost.WcfCenterSvcReference;
using System.Diagnostics;
using WcfCommonLib;
using System.Net.Sockets;
using System.Threading;
using System.Configuration;
using System.IO;

namespace WcfRoadHost
{
    public partial class RoadForm : Form
    {
        private CenterServiceClient wcfClient = null;
        private WcfCommonLib.TcpClient tcpClient = null;
        private SimpleWebSerer webServer = null;
        private SynchronizationContext mainSC = null;
        private SendOrPostCallback scCallback = null;
        private WaitCallback dataCallback = null;
        private StringBuilder strBuilder = new StringBuilder();
        private MySQLAccessor dbMySQL = new MySQLAccessor();

        private class MainScCallbackState
        {
            public enum CallbackType
            {
                TypeGetImage,
                TypeUploadData
            }

            public CallbackType type;
            public object data = "";
        }

        private void DisplayLog(string strText)
        {
            txtLog.AppendText(strText);
            txtLog.AppendText("\n");
        }

        private void GetUploadData(object state)
        {
            SynchronizationContext sc = (SynchronizationContext)state;
            // Get Data from Database
            MainScCallbackState mainState = new MainScCallbackState( );
            mainState.type = MainScCallbackState.CallbackType.TypeUploadData;

            // to Center
            StringBuilder builder = new StringBuilder();
            DataTable table = new DataTable("TestUpload");
            try
            {
                dbMySQL.GetRecordData(builder);
                mainState.data = builder.ToString();
                sc.Post(scCallback, mainState);

                if (0 != builder.Length)
                {
                    wcfClient.UploadRecordData(table);
                }
            }
            catch (Exception ex)
            {
                mainState.data = ex.Message;
                mainSC.Post(scCallback, mainState);
            }
        }

        private void tcpClient_QueryEvent(object sender, WcfCommonLib.TcpClient.SocketEVentArgs e)
        {
            MainScCallbackState mainState = new MainScCallbackState();
            mainState.type = MainScCallbackState.CallbackType.TypeGetImage;
            StringBuilder builder = new StringBuilder(e.QueryString );
            bool bTransfered = true;
            
            try
            {
                // ParkID|RecordID
                string[] strQuery = e.QueryString.Split(new char[] { '|' });
                byte[ ] inImage;
                byte[ ] outImage;
                dbMySQL.GetImage(strQuery[1], out inImage, out outImage);

                if (null == inImage)
                {
                    bTransfered = false;
                    builder.Append(" 进入图像为空");
                }

                if (null == outImage)
                {
                    bTransfered = false;
                    builder.Append(" 离开图像为空");
                }

                //byte[] tmpInImage = new byte[10000000];
                //inImage.CopyTo(tmpInImage, 0);

                //byte[] tmpOutInImage = new byte[59137];
                //outImage.CopyTo(tmpOutInImage, 0);
                // to Center
                //MemoryStream streamIn = new MemoryStream(inImage);
                //MemoryStream streamOut = new MemoryStream(outImage);
                //wcfClient.GetData(123);
                mainState.data = builder.ToString( );
                mainSC.Post(scCallback, mainState);

                if (bTransfered)
                {
                    wcfClient.UploadInOutImage(strQuery[0], strQuery[1], inImage, outImage);
                }
            }
            catch (Exception ex)
            {
                mainState.data = ex.Message;
                mainSC.Post(scCallback, mainState);
            }
        }

        public RoadForm()
        {
            InitializeComponent();
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

            dataCallback = new WaitCallback(GetUploadData);

            wcfClient = new CenterServiceClient();
            webServer = new SimpleWebSerer();
            webServer.StartServer();
            ConnectServer();

            SetTimer(timerReconnect, "ReconnectTimer");
            SetTimer(timerUploadData, "UploadTimer");
        }

        private void SetTimer(System.Windows.Forms.Timer objTimer, string strName)
        {
            string strInterval = ConfigurationManager.AppSettings.Get(strName);
            int nInterval = Convert.ToInt32(strInterval);
            objTimer.Interval = nInterval;
            objTimer.Enabled = true;
        }

        private void MainScCallback(object state)
        {
            if (null == state)
            {
                return;
            }

            MainScCallbackState scState = state as MainScCallbackState;
            strBuilder.Clear();

            switch (scState.type)
            {
                case MainScCallbackState.CallbackType.TypeGetImage :
                    strBuilder.Append("【获取进出图像】");
                    break;

                case MainScCallbackState.CallbackType.TypeUploadData :
                    strBuilder.Append("【上传记录数据】");
                    break;
            }

            strBuilder.Append(scState.data.ToString());
            DisplayLog(strBuilder.ToString( ));
        }

        private void RoadForm_FormClosed(object sender, FormClosedEventArgs e)
        {
            tcpClient.DisconnectServer();
            wcfClient.Close();
            webServer.StopServer();
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

        private void timerUploadData_Tick(object sender, EventArgs e)
        {
            ThreadPool.QueueUserWorkItem(dataCallback, mainSC);
        }

        private void btnClearLog_Click(object sender, EventArgs e)
        {
            txtLog.Clear();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            StringBuilder builder = wcfClient.GetFeeData("5101080001");
            if (null == builder)
            {
                return;
            }
            DisplayLog( builder.ToString( ));
        }
    }
}
