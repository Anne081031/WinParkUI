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

namespace _28_1
{
    public partial class Gbook : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (Session["username"] == null || Session["userid"] == null)
            {
                Panel1.Visible = false;
            }
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            try
            {
                string strsql = "insert into gbook (title,name,time,content,reptitle,admin,reptime,repcontent,classid,userid) values ('" + TextBox2.Text + "','" + Session["username"].ToString() + "','" + DateTime.Now + "','" + TextBox1.Text + "','','','" + DateTime.Now + "','','" + Request.QueryString["cid"] + "','" + Session["userid"].ToString() + "')";
                SQLHelper.SQLHelper.ExecNonQuery(strsql);
                Response.Redirect("Gbook.aspx?cid=" + Request.QueryString["cid"]);
            }
            catch
            { 
                //编写错误处理
            }
        }
    }
}
