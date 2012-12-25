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
    public partial class _modi : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (!IsPostBack)
            {
                if (Session["username"] == null || Session["userid"] == null)
                {
                    Response.Redirect("login.aspx");
                }
                else
                {
                    string strsql = "select * from diary where id='" + Request.QueryString["id"] + "'";
                    SqlDataReader sdr = SQLHelper.SQLHelper.ExecReader(strsql);
                    if (sdr.Read())
                    {
                        if (sdr["userid"].ToString() == Session["userid"].ToString() || Session["admin"].ToString() == "1")
                        {
                            TextBox1.Text = sdr["title"].ToString();
                            Label1.Text = sdr["author"].ToString();
                            Label2.Text = sdr["time"].ToString();
                            FCKeditor1.Value = sdr["content"].ToString();
                            DropDownList1.Text = sdr["classid"].ToString();
                        }
                        else
                        {
                            Response.Redirect("errors/cmodi.aspx?id=" + sdr["id"]);
                        }
                    }
                    else
                    {
                        Response.Redirect("login.aspx");
                    }
                }
            }
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            try
            {
                string strsql = "update diary set title='" + TextBox1.Text + "',content='" + FCKeditor1.Value + "' where id='" + Request.QueryString["id"] + "'";
                SQLHelper.SQLHelper.ExecNonQuery(strsql);
                Response.Redirect("shownews?id=" + Request.QueryString["id"]);
            }
            catch
            {
                Label3.Text = "出现错误,请检查日志";
            }
        }
    }
}
