using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace WindowsForm
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void dateTimePicker1_ValueChanged(object sender, EventArgs e)
        {
            ServiceReference1.Service1Client ser = new WindowsForm.ServiceReference1.Service1Client();
            textBox1.Text = ser.GetSum(Convert.ToDateTime(dateTimePicker1.Text)).ToString();
        }
    }
}
