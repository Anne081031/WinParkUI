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

namespace WcfRoadHost
{
    public partial class RoadForm : Form
    {
        private ServiceHost svcHost = null;
        CenterServiceClient client = null;

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
            svcHost = new ServiceHost( typeof ( RoadService ) );
            //svcHost = new ServiceHost( new RoadService( ) );
            svcHost.Open();

            //objRoad = svcHost.SingletonInstance as RoadService;
            RoadService.t += Test;

            client = new CenterServiceClient();
        }

        private void RoadForm_FormClosed(object sender, FormClosedEventArgs e)
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
            //CenterServiceClient client = new CenterServiceClient();
            MessageBox.Show( client.GetData(1234) );
            //client.Close();
        }
    }
}
