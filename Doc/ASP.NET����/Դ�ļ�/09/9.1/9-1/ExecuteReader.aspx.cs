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

namespace _9_1
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='Bbg0123456#'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            string strsql = "select * from mynews order by id desc";
            SqlCommand cmd = new SqlCommand(strsql, con);
            SqlDataReader rd = cmd.ExecuteReader();
            while (rd.Read())
            {
                Response.Write(rd["title"].ToString()+"<hr/>");
            }
            rd.Close();
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='sa'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            string strsql = "select * from mynews where id=1 order by id desc";
            SqlCommand cmd = new SqlCommand(strsql, con);
            SqlDataReader rd = cmd.ExecuteReader();
            int id = rd.GetOrdinal("title");
            while (rd.Read())
            {
                Label1.Text = "新闻id是" + rd["id"];
            }
            rd.Close();
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='Bbg0123456#'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            string strsql = "insert into mynews values ('执行更新后的标题')";
            SqlCommand cmd = new SqlCommand(strsql, con);
            SqlDataReader rd = cmd.ExecuteReader();
            while (rd.Read())
            {
                Response.Write(rd["title"].ToString() + "<hr/>");
            }
            rd.Close();
            Response.Redirect("ExecuteReader.aspx");
        }
    }
}
