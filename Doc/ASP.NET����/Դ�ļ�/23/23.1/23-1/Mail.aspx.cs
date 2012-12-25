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

namespace _23_1
{
    public partial class SendMail : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            string str = "server='(local)';database='login';uid='sa';pwd='sa'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            string strsql = "select * from login where username='" + TextBox1.Text + "'";
            SqlDataAdapter da = new SqlDataAdapter(strsql, con);
            DataSet ds = new DataSet();
            int count = da.Fill(ds, "table");

            if (count > 0)
            {
                if (TextBox2.Text != ds.Tables["table"].Rows[0]["answer"].ToString())
                {
                    Label2.Text = "提示问题答案回答出错,请再次输入答案..";
                }
                else
                {
                    SendUserMail(ds.Tables["table"].Rows[0]["email"].ToString(), ds.Tables["table"].Rows[0]["password"].ToString());
                }
            }
            else
            {
                Label5.Text = "没有这个用户";
            }
        }

        private bool SendUserMail(string recevie,string password)
        {
            try
            {
                System.Net.Mail.SmtpClient client = new System.Net.Mail.SmtpClient();
                client.Host = "SMTP服务器";
                client.UseDefaultCredentials = false;
                client.EnableSsl = false;
                client.Credentials = new System.Net.NetworkCredential("邮件发送邮箱", "发送邮箱密码");
                client.DeliveryMethod = System.Net.Mail.SmtpDeliveryMethod.Network;
                System.Net.Mail.MailMessage message = new System.Net.Mail.MailMessage("邮件发送邮箱", recevie);
                message.Subject = "获取密码信息";
                message.Body = "您的密码为:"+password;
                message.BodyEncoding = System.Text.Encoding.UTF8;
                message.IsBodyHtml = true;
                try
                {
                    client.Send(message);
                    return true;
                }
                catch (Exception ex)
                {
                    return false;
                }
            }
            catch
            {
                return false;
            }
        }

        protected void TextBox1_TextChanged(object sender, EventArgs e)
        {
            string str = "server='(local)';database='login';uid='sa';pwd='sa'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            string strsql = "select * from login where username='" + TextBox1.Text + "'";
            SqlDataAdapter da = new SqlDataAdapter(strsql, con);
            DataSet ds = new DataSet();
            int count = da.Fill(ds, "table");

            if (count > 0)
            {
                Label5.Text = ds.Tables["table"].Rows[0]["ask"].ToString();
                Label2.Text = "";
            }
            else
            {
                Label2.Text = "没有这个用户";
            }
        }
    }
}
