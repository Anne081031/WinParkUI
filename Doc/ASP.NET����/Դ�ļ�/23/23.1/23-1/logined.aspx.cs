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

namespace _23_1
{
    public partial class logined : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (String.IsNullOrEmpty(Session["name"].ToString()))
            {
                Response.Redirect("default.aspx");
            }
            else
            {
                Label1.Text = Session["name"].ToString();

                if (Session["name"].ToString() == "guojing")
                {
                    Image1.ImageUrl = "mail.png";
                }
            }
        }
    }
}
