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

namespace _29_1
{
    public partial class login : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            string strsql = "select * from register where username='" + TextBox1.Text + "' and password='" + TextBox2.Text + "'";
            SqlDataReader sdr = SQLHelper.SQLHelper.ExecReader(strsql);
            if (sdr.Read())
            {
                Session["username"] = TextBox1.Text;
                Session["userid"] = sdr["id"].ToString();
                Session["admin"] = sdr["userroot"].ToString();
                Response.Redirect("friends.aspx");
            }
            else
            {
                Label1.Text = "无法登陆,用户名或密码错误";
            }
        }
    }
}
