using System;
using System.Collections;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Web;
using System.Web.Security;
using System.Web.UI;
using System.Web.UI.HtmlControls;
using System.Web.UI.WebControls;
using System.Web.UI.WebControls.WebParts;
using System.Xml.Linq;

namespace Web
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            ServiceReference1.Service1Client ser = new Web.ServiceReference1.Service1Client();
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if (!String.IsNullOrEmpty(TextBox1.Text))
            {
                ServiceReference1.Service1Client ser = new Web.ServiceReference1.Service1Client();
                TextBox2.Text = ser.GetShopInformation(TextBox1.Text);
            }
            else
            {
                TextBox2.Text = "无法检索,字符串为空";
            }
        }
    }
}
