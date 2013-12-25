using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using WcfCommonLib;

namespace TestApp
{
    public partial class Form1 : Form
    {
        private SimpleWebClient webClient = new SimpleWebClient( );
        private SimpleWebSerer webServer = new SimpleWebSerer( );

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string strWhere = textBox1.Text + "|" + textBox2.Text;
            webClient.PostString(strWhere);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            sqlConnection1.Open();
            //mySqlConnection1.Open();
            //bool bRet = mySqlConnection1.Ping();
            richTextBox1.Clear();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            try
            {
                string strWhere = textBox1.Text + "|" + textBox2.Text;
                webClient.PostString(strWhere);
            }
            catch (Exception ex)
            {
                richTextBox1.AppendText(ex.Message);
                richTextBox1.AppendText("\n");
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            timer1.Interval = ( int ) numericUpDown1.Value;
            timer1.Enabled = true;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            webServer.StartServer();
        }
    }
}
