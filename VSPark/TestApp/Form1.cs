using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace TestApp
{
    public partial class Form1 : Form
    {
        private SimpleWebClient webClient = new SimpleWebClient( );

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            webClient.PostString();
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
                webClient.PostString();
            }
            catch (Exception ex)
            {
                richTextBox1.AppendText(ex.Message);
                richTextBox1.AppendText("\n");
            }
        }
    }
}
