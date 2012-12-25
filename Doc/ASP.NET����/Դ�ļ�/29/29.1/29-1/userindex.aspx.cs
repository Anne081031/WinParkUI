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

namespace _29_1
{
    public partial class userindex : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (Session["admin"]!=null)
            {
                if (Session["admin"].ToString() == "1")
                {
                    Label1.Text = "<a href=\"deleteuser.aspx?uid=" + Request.QueryString["uid"] + "\">删除用户</a>";
                }
            }

            if (Session["username"] == null || Session["userid"] == null)
            {
                Response.Redirect("login.aspx");
            }
        }
    }
}
