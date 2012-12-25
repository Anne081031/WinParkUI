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

namespace _13_1
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (!String.IsNullOrEmpty(Request.QueryString["id"]))
            {
                Label1.Text = Request.QueryString["id"];
            }
            else
            {
                Label1.Text = "没有传递的值";
            }

            if (!String.IsNullOrEmpty(Request.QueryString["type"]))
            {
                Label2.Text = Request.QueryString["type"];
            }
            else
            {
                Label2.Text = "没有传递的值";
            }

            Label3.Text = Request.Path.ToString();
            Label4.Text = Request.UserHostAddress;
            Label5.Text = Request.Browser.Type.ToString();
        }
    }
}
