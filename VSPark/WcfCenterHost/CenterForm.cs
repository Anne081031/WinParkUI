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

namespace WcfCenterHost
{
    public partial class CenterForm : Form
    {
        private ServiceHost svcHost = null;
        private RoadServiceClient client = null;

        public CenterForm()
        {
            InitializeComponent();
        }

        private void Test(int value)
        {
            Debug.Print(value.ToString());

            //RoadServiceClient client = new RoadServiceClient();
            client.CenterCall( );
            //client.Close();
        }

        private void CenterForm_Load(object sender, EventArgs e)
        {
            svcHost = new ServiceHost(typeof(CenterService));
            //svcHost = new ServiceHost( new CenterService( ) );
            svcHost.Open();

            //objCenter = svcHost.SingletonInstance as CenterService;
            CenterService.t += Test;

            client = new RoadServiceClient();
        }

        private void CenterForm_FormClosed(object sender, FormClosedEventArgs e)
        {
            if (null == svcHost)
            {
                return;
            }

            client.Close();
            svcHost.Close();
        }

        private void btnTest_Click(object sender, EventArgs e)
        {
            //RoadServiceClient client = new RoadServiceClient();
            MessageBox.Show(client.GetData(5678));
            //client.Close();
        }
    }
}
