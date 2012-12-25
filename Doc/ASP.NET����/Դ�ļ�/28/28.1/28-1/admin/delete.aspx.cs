using System;
using System.Collections;
using System.Configuration;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Web;
using System.Web.Security;
using System.Web.UI;
using System.Web.UI.HtmlControls;
using System.Web.UI.WebControls;
using System.Web.UI.WebControls.WebParts;
using System.Xml.Linq;
using SQLHelper;

namespace _28_1.admin
{
    public partial class delete : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (Session["admin"] == null)
            {
                Response.Redirect("../Gbook.aspx?cid=" + Request.QueryString["cid"] + "");
            }
            else if (String.IsNullOrEmpty(Request.QueryString["cid"]) || String.IsNullOrEmpty(Request.QueryString["id"]))
            {
                Response.Redirect("../default.aspx");
            }
            else
            {
                try
                {
                    string strsql = "delete from gbook where id='" + Request.QueryString["id"] + "'";
                    SQLHelper.SQLHelper.ExecNonQuery(strsql);
                    Response.Redirect("../Gbook.aspx?cid=" + Request.QueryString["cid"] + "");
                }
                catch
                {
                    Response.Redirect("../Gbook.aspx?cid=" + Request.QueryString["cid"] + "");
                }
            }
        }

    }
}
