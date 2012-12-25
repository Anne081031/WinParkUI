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

namespace _26_1
{
    public partial class modi : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (!IsPostBack)
            {
                TextBox3.Text = "";
                Label1.Text = "";
                SqlConnection con = new SqlConnection("Data Source=(local);Initial Catalog=post;Integrated Security=True");
                con.Open();
                string strsql = "select * from posttitle where id='" + Request.QueryString["id"] + "'";
                SqlDataAdapter da = new SqlDataAdapter(strsql, con);
                DataSet ds = new DataSet();
                da.Fill(ds, "table");
                string strchoose = "select * from postchoose where askid='" + Request.QueryString["id"] + "'";
                SqlDataAdapter ch = new SqlDataAdapter(strchoose, con);
                int count = ch.Fill(ds, "choosetable");
                TextBox1.Text = ds.Tables["table"].Rows[0]["title"].ToString();
                TextBox2.Text = ds.Tables["table"].Rows[0]["content"].ToString();

                for (int i = 0; i < count; i++)
                {
                    if (i == count - 1)
                    {
                        TextBox3.Text += ds.Tables["choosetable"].Rows[i]["content"].ToString().Replace("\r", "");
                        Label1.Text += ds.Tables["choosetable"].Rows[i]["id"].ToString();
                    }
                    else
                    {
                        TextBox3.Text += ds.Tables["choosetable"].Rows[i]["content"].ToString() + "\n";
                        Label1.Text += ds.Tables["choosetable"].Rows[i]["id"].ToString() + "|";
                    }
                }

                con.Close();
            }
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            SqlConnection con = new SqlConnection("Data Source=(local);Initial Catalog=post;Integrated Security=True");
            con.Open();
            string trim = TextBox3.Text.Replace("\n", "|");
            string[] count = trim.Split('|');
            string[] count2 = Label1.Text.Split('|');

            if (count.Length != count2.Length)
            {
                Label2.Text = "修改不能修改投票项数,其中选项个数为" + count.Length.ToString()+",原选项个数为"+count2.Length.ToString()+"" ;
            }
            else
            {
                string strsql = "update posttitle set title='" + TextBox1.Text + "',content='" + TextBox2.Text + "' where id='" + Request.QueryString["id"] + "'";
                SqlCommand cmd = new SqlCommand(strsql, con);
                cmd.ExecuteNonQuery();

                for (int i = 0; i < count.Length; i++)
                {
                    strsql = "update postchoose set content='" + count[i].ToString() + "' where id='" + count2[i].ToString() + "'";
                    SqlCommand cmd1 = new SqlCommand(strsql, con);
                    cmd1.ExecuteNonQuery();
                }

                con.Close();
                Response.Redirect("manage.aspx");
            }
        }
    }
}
