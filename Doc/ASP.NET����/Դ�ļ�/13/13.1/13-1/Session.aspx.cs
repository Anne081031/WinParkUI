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
    public partial class Session : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (Session["admin"] != null)
            {
                if (String.IsNullOrEmpty(Session["admin"].ToString()))
                {
                    Button1.Visible = true;
                    Button2.Visible = false;
                    //Response.Redirect("admin_login.aspx");
                }
                else
                {
                    Button1.Visible = false;
                    Button2.Visible = true;
                }
            }
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            Session["admin"] = "guojing";
            Response.Redirect("Session.aspx");
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            Session.Clear();
            Response.Redirect("Session.aspx");
        }
    }
}
