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
using System.Data.SqlClient;

namespace _25_1.admin
{
    public partial class login : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            try
            {
                SqlConnection con = new SqlConnection("Data Source=(local);Initial Catalog=news;Integrated Security=True");
                con.Open();
                string strsql = "select * from admin where admin='" + TextBox1.Text + "' and password='" + TextBox2.Text + "'";
                SqlDataAdapter da = new SqlDataAdapter(strsql, con);
                DataSet ds = new DataSet();
                int count = da.Fill(ds, "table");

                if (count > 0)
                {
                    Session["admin"] = TextBox1.Text;
                    Response.Redirect("default.aspx");
                }
                else
                {
                    Label1.Text = "无法登陆,请检查用户名和密码";
                }
            }
            catch
            {
                Label1.Text = "无法进行数据连接";
            }
        }
    }
}
