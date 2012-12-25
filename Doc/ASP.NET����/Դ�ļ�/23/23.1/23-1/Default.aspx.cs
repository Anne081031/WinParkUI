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

namespace _23_1
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if (Convert.ToInt32(Label4.Text) < 4)
            {
                string str = "server='(local)';database='login';uid='sa';pwd='sa'";
                SqlConnection con = new SqlConnection(str);
                con.Open();

                string strsql = "select * from login where username='" + TextBox1.Text + "' and password='" + TextBox2.Text + "'";

                SqlDataAdapter da = new SqlDataAdapter(strsql, con);
                DataSet ds = new DataSet();
                int count = da.Fill(ds, "table");
                if (count > 0)
                {
                    Session["name"] = TextBox1.Text;
                    Session["password"] = TextBox2.Text;
                    Session["login"] = "yes";
                    Response.Redirect("logined.aspx");
                }
                else
                {
                    Label3.Text = "登陆失败";
                    int times = Convert.ToInt32(Label4.Text);
                    Label4.Text = (times + 1).ToString();
                }
            }
            else
            {
                Label3.Text = "您已经被禁止登陆,请稍后再登陆";
            }
        }
    }
}
