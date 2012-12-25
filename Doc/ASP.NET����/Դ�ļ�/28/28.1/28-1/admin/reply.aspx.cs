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
    public partial class reply : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (Session["admin"] == null)
            {
                Response.Redirect("../Gbook.aspx?cid=" + Request.QueryString["cid"] + "");
            }
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            try
            {
                string strsql = "update gbook set repcontent='" + TextBox1.Text + "',reptime='" + DateTime.Now + "',admin='" + Session["admin"].ToString() + "' where id='" + Request.QueryString["id"] + "'";
                SQLHelper.SQLHelper.ExecNonQuery(strsql);
                Response.Redirect("../Gbook.aspx?cid=" + Request.QueryString["cid"] + "");
            }
            catch(Exception ee)
            {
                Response.Write(ee.ToString());
            }
        }
    }
}
