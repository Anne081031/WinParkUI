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
    public partial class _new : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (Session["username"] == null || Session["userid"] == null)
            {
                Response.Redirect("login.aspx");
            }
            Label1.Text = Session["username"].ToString();
            Label2.Text = DateTime.Now.ToString();
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            try
            {
                string strsql = "insert into diary (title,author,time,content,marks,classid,userid,hits) values ('" + TextBox1.Text + "','" + Session["username"].ToString() + "','" + DateTime.Now + "','" + FCKeditor1.Value + "',0," + DropDownList1.Text + ",'" + Session["userid"].ToString() + "',0)";
                SQLHelper.SQLHelper.ExecNonQuery(strsql);
                Response.Redirect("friends.aspx");
            }
            catch
            {
                Label3.Text = "出现错误,请检查日志";
            }
        }
    }
}
