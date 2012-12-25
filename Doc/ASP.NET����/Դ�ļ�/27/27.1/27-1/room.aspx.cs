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
using System.Collections.Generic;
using System.IO;

namespace _27_1
{
    public partial class room : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (Session["roomid"] == null || Session["username"] == null)
            {
                Response.Redirect("login.aspx");
            }

            if (Request.QueryString["id"] != Session["roomid"].ToString())
            {
                Response.Redirect("login.aspx");
            }

            Label1.Text = "";

            for(int i=0;i<Session.Count/2;i++)
            {
                if (Session[i * 2] == Session["roomid"])
                {
                    Label1.Text += "<img src=\"images/p.png\"> &nbsp; "+(Session[i * 2 + 1] + "<br/>");
                }
            }

            if (Application["char"] != null)
            {
                TextBox3.Text = Application["char"].ToString();
            }

            if (Application[Session["username"].ToString()]!=null)
            {
                TextBox1.Text = Application[Session["username"].ToString()].ToString();
            }
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if (String.IsNullOrEmpty(TextBox4.Text))
            {
                TextBox3.Text += Session["username"] + "说:" + TextBox2.Text + "\n";
                TextBox2.Text = "";
                Application["char"] = TextBox3.Text;
            }
            else
            {
                //TextBox3.Text += "你对" + TextBox4.Text + "说:" + TextBox2.Text + "\n";
                TextBox1.Text += "你对" + TextBox4.Text + "说:" + TextBox2.Text + "\n";
                
                Application[Session["username"].ToString()] = TextBox1.Text;

                for (int i = 0; i < Application.Count; i++)
                {
                    if (Application[TextBox4.Text] != null)
                    {
                        Application[TextBox4.Text] += Session["username"].ToString() + "对你" + TextBox4.Text + "说:" + TextBox2.Text + "\n";
                    }
                }
                TextBox2.Text = "";
            }
        }

        protected void Timer1_Tick(object sender, EventArgs e)
        {
            TextBox3.Text = Application["char"].ToString();
        }

        protected void LinkButton1_Click(object sender, EventArgs e)
        {
            if (!Directory.Exists("C:\\chat\\group"))
            {
                Directory.CreateDirectory("C:\\chat\\group");
                StreamWriter sw = File.CreateText("C:\\chat\\group\\" + DateTime.Now.Year + DateTime.Now.Month + DateTime.Now.Day + DateTime.Now.Hour + DateTime.Now.Second + ".txt");
                sw.Write(TextBox3.Text);
                sw.Close();
            }
            else
            {
                StreamWriter sw = File.CreateText("C:\\chat\\group\\" + DateTime.Now.Year + DateTime.Now.Month + DateTime.Now.Day + DateTime.Now.Hour + DateTime.Now.Second + ".txt");
                sw.Write(TextBox3.Text);
                sw.Close();
            }
            LinkButton1.Text = "已经保存";
        }

        protected void LinkButton2_Click(object sender, EventArgs e)
        {
            if (!Directory.Exists("C:\\chat\\pri"))
            {
                Directory.CreateDirectory("C:\\chat\\pri");
                StreamWriter sw = File.CreateText("C:\\chat\\pri\\" + DateTime.Now.Year + DateTime.Now.Month + DateTime.Now.Day + DateTime.Now.Hour + DateTime.Now.Second + ".txt");
                sw.Write(TextBox2.Text);
                sw.Close();
            }
            else
            {
                StreamWriter sw = File.CreateText("C:\\chat\\pri\\" + DateTime.Now.Year + DateTime.Now.Month + DateTime.Now.Day + DateTime.Now.Hour + DateTime.Now.Second + ".txt");
                sw.Write(TextBox2.Text);
                sw.Close();
            }
            LinkButton1.Text = "已经保存";
        }
    }
}
