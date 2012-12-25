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

namespace _24_1.admin
{
    public partial class InsertAd : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            try
            {
                SqlConnection con = new SqlConnection("Data Source=(local);Initial Catalog=ad;Integrated Security=True");
                con.Open();
                string strsql = "insert into ads (time,endtime,name,content,infor,picture,url,title,html,type,adid) values ('" + Convert.ToDateTime(Calendar1.SelectedDate).ToString() + "','" + Convert.ToDateTime(Calendar2.SelectedDate).ToString() + "','" + TextBox1.Text + "','" + TextBox3.Text + "','" + TextBox4.Text + "','" + TextBox6.Text + "','" + TextBox7.Text + "','" + TextBox2.Text + "','" + TextBox5.Text + "','" + DropDownList1.Text + "','" + DropDownList2.Text + "')";
                SqlCommand cmd = new SqlCommand(strsql, con);
                cmd.ExecuteNonQuery();
                Response.Redirect("manage.aspx");
            }
            catch(Exception ee)
            {
                Response.Write("必须要选择开始时间和结束时间!");
            }
        }
    }
}
