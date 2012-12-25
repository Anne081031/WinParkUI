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

namespace _22_1
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if (Check(TextBox1.Text) || Check(TextBox2.Text) || Check(TextBox4.Text) || Check(TextBox5.Text) || Check(TextBox6.Text) || Check(TextBox7.Text))
            {
                Label8.Text = "用户信息中不能够包含特殊字符如<,>,',//,\\等,请审核";
            }
            else
            {
                try
                {
                    SqlConnection con = new SqlConnection("server='(local)';database='Register';uid='sa';pwd='Bbg0123456#'");
                    con.Open();
                    string strsql = "insert into register (username,password,sex,picture,im,information,others,ifisuser) values ('" + TextBox1.Text + "','" + TextBox2.Text + "','" + DropDownList1.Text + "','" + TextBox4.Text + "','" + TextBox5.Text + "','" + TextBox6.Text + "','" + TextBox7.Text + "',0)";
                    string check = "select * from register where username='" + TextBox1.Text + "'";
                    SqlDataAdapter da = new SqlDataAdapter(check,con);
                    DataSet ds = new DataSet();
                    da.Fill(ds, "table");
                    if (da.Fill(ds, "table") > 0)
                    {
                        Label8.Text = "出现错误信息,请返回给管理员";
                    }
                    else
                    {
                        SqlCommand cmd = new SqlCommand(strsql, con);
                        cmd.ExecuteNonQuery();
                        Label8.Text = "注册成功,请牢记您的信息";
                    }
                }
                catch(Exception ee)
                {
                    Label8.Text = ee.ToString();
                }
            }
        }

        protected bool Check(string text)
        {
            if (text.Contains("<") || text.Contains(">") || text.Contains("'") || text.Contains("//") || text.Contains("\\"))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
