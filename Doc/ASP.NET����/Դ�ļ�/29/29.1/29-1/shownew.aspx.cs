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

namespace _29_1
{
    public partial class _shownew : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (Session["username"] == null || Session["userid"] == null)
            {
                Response.Redirect("login.aspx");
            }
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            string strsql = "insert into diarygbook (title,time,content,userid,diaryid) values ('"+TextBox1.Text+"','"+DateTime.Now+"','"+TextBox2.Text+"','"+Session["userid"].ToString()+"','"+Request.QueryString["id"]+"')";
            SQLHelper.SQLHelper.ExecNonQuery(strsql);
            Response.Redirect("shownew.aspx?id=" + Request.QueryString["id"]);
        }
    }
}
