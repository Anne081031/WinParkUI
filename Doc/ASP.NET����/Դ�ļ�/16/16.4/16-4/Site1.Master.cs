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

namespace _16_2
{
    public partial class Site1 : System.Web.UI.MasterPage
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            ScriptManager1.RegisterAsyncPostBackControl(Button2);
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            TextBox1.Text = "母版页中的时间为" + DateTime.Now.ToString();
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            ((UpdatePanel)ContentPlaceHolder2.FindControl("UpdatePanel3")).Update();
            TextBox tex = ((TextBox)ContentPlaceHolder2.FindControl("TextBox2"));
            tex.Text = DateTime.Now.ToString();
        }
    }
}
