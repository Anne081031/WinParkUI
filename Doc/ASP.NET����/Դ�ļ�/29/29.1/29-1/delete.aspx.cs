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
using SQLHelper;

namespace _29_1
{
    public partial class delete : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (Session["admin"] == null)
            {
                Response.Redirect("friends.aspx");
            }
            else
            {
                if (Session["admin"].ToString() == "1")
                {
                    string strsql = "delete from diary where id='" + Request.QueryString["id"] + "'";
                    SQLHelper.SQLHelper.ExecNonQuery(strsql);
                    Response.Redirect("friends.aspx");
                }
                else
                {
                    Response.Redirect("errors/cdelete.aspx?id=" + Request.QueryString["id"]);
                }
            }
        }
    }
}
