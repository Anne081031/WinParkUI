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
using Newtonsoft.Json;
using System.Xml;

namespace WcfRoadHost
{
    // ResourceManager
    // 缺省文化资源嵌入主【程序集】中，其他文化资源【卫星程序集】的方式存在
    //
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
        private string strParkID = null;

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

        private void DisplayLog(object strText)
        {
            txtLog.AppendText("【" + DateTime.Now.ToString()+"】"); 
            txtLog.AppendText(strText.ToString());
            txtLog.AppendText("\n");
        }

        private void FillTableData(DataTable table, StringBuilder builder)
        {
            string json = @"{'DocumentElement':{'Test':[{'RecordID':'39','LocationID':'5101070001001006','EnterTime':'2013-11-01 17:00:53','LeaveTime':'2013-11-01 17:00:56','EnterPlate':'1123','LeavePlate':'456','State':'1'},{'RecordID':'40','LocationID':'5101070001001007','EnterTime':'2013-11-01 17:03:55','LeaveTime':'2013-11-01 17:00:56','EnterPlate':'1324','LeavePlate':'4353','State':'1'}]}}";
            table.Columns.Add("RecordID", typeof(Int32));
            table.Columns.Add("LocationID", typeof(string));
            table.Columns.Add("EnterTime", typeof(string));
            table.Columns.Add("LeaveTime", typeof(string));
            table.Columns.Add("EnterPlate", typeof(string));
            table.Columns.Add("LeavePlate", typeof(string));
            table.Columns.Add("State", typeof(Int32));
            table.RemotingFormat = SerializationFormat.Binary;

            XmlDocument doc = (XmlDocument)JsonConvert.DeserializeXmlNode(json);

            System.Diagnostics.Debug.Print(doc.InnerXml);
            builder.Clear();
            builder.Append(doc.InnerXml);
            StringReader reader = new StringReader(doc.InnerXml);
            table.ReadXml(reader);

            StringWriter writer = new StringWriter();
            table.WriteXml(writer);
            string xml = writer.ToString();

            doc = new XmlDocument();
            doc.LoadXml(xml);
            json = JsonConvert.SerializeXmlNode(doc);

            System.Diagnostics.Debug.Print(json);
        }

        private void GetUploadData(object state)
        {
            SynchronizationContext sc = (SynchronizationContext)state;
            // Get Data from Database
            MainScCallbackState mainState = new MainScCallbackState( );
            mainState.type = MainScCallbackState.CallbackType.TypeUploadData;

            // to Center
            StringBuilder builder = new StringBuilder();
            try
            {
                dbMySQL.GetRecordData(builder);

                mainState.data = builder;
                sc.Post(scCallback, mainState);

                if (0 != builder.Length)
                {
                    wcfClient.UploadRecordData(builder);
                }
            }
            catch (Exception ex)
            {
                mainState.data = CommonFunction.GetExceptionMessage(ex);
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
                mainState.data = builder;
                mainSC.Post(scCallback, mainState);

                if (bTransfered)
                {
                    wcfClient.UploadInOutImage(strQuery[0], strQuery[1], inImage, outImage);
                }
            }
            catch (Exception ex)
            {
                mainState.data = CommonFunction.GetExceptionMessage(ex);
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

            strParkID = ConfigurationManager.AppSettings.Get("ParkID");

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
            if (null == state || string.Empty == state )
            {
                return;
            }

            MainScCallbackState scState = state as MainScCallbackState;
            strBuilder.Clear();

            string strData = scState.data.ToString();
            if (string.Empty == strData)
            {
                return;
            }

            switch (scState.type)
            {
                case MainScCallbackState.CallbackType.TypeGetImage :
                    strBuilder.Append("【获取进出图像】");
                    break;

                case MainScCallbackState.CallbackType.TypeUploadData :
                    strBuilder.Append("【上传记录数据】");
                    break;
            }

            strBuilder.Append(strData);
            DisplayLog(strBuilder);
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
                DisplayLog(CommonFunction.GetExceptionMessage(ex));
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
                DisplayLog(CommonFunction.GetExceptionMessage(ex));
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
            GetInitializeData();
        }

        private void GetInitializeData()
        {
            try
            {
                StringBuilder builder = wcfClient.GetFeeData(strParkID);
                if (null == builder)
                {
                    return;
                }

                DisplayLog(builder);
                dbMySQL.WriteData(builder);
            }
            catch (Exception ex)
            {
                DisplayLog(CommonFunction.GetExceptionMessage(ex));
            }
        }
    }
}
