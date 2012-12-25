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
using System.IO;

namespace _25_1.admin
{
    public partial class news_add : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (Session["admin"] == null)
            {
                Response.Redirect("login.aspx");
            }
            TextBox2.Text = DateTime.Now.ToString();
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            try
            {
                SqlConnection con = new SqlConnection("Data Source=(local);Initial Catalog=news;Integrated Security=True");
                con.Open();
                string strsql = "insert into news (title,time,author,content,weather,level,hits,classname) values ('" + TextBox1.Text + "','" + TextBox2.Text + "','" + TextBox3.Text + "','" + TextBox5.Text + "','" + TextBox4.Text + "','" + DropDownList1.Text + "',0,'" + DropDownList2.Text + "')";
                SqlCommand cmd = new SqlCommand(strsql, con);
                cmd.ExecuteNonQuery();

                StreamReader aw = File.OpenText(Server.MapPath("template.htm"));
                string template = aw.ReadToEnd();
                aw.Close();

                template = template.Replace("[新闻标题]", TextBox1.Text);
                template = template.Replace("[发布时间]", TextBox2.Text);
                template = template.Replace("[新闻作者]", TextBox3.Text);
                template = template.Replace("[新闻天气]", TextBox4.Text);
                template = template.Replace("[新闻内容]", TextBox5.Text);

                StreamWriter sw = File.CreateText(Server.MapPath("../html/" + DateTime.Now.Year.ToString() + DateTime.Now.Month.ToString() + DateTime.Now.Day.ToString() + DateTime.Now.Hour.ToString() + DateTime.Now.Second.ToString() + ".htm"));
                sw.Write(template);
                sw.Close();

                Response.Redirect("manage.aspx");
            }
            catch(Exception ee)
            {
                Response.Write(ee.ToString());
            }
        }
    }
}
