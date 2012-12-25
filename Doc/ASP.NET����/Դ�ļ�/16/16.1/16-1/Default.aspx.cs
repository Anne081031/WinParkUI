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

namespace _16_1
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Label2.Text = DateTime.Now.ToString();
        }

        protected void Button1_Click1(object sender, EventArgs e)
        {
            TextBox1.Text = DateTime.Now.ToString();
        }

        protected void TextBox1_TextChanged(object sender, EventArgs e)
        {
            Label1.Text = TextBox1.Text.Length.ToString();
        }
    }
}
