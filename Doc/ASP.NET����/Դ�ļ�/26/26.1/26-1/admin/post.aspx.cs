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

namespace _26_1.admin
{
    public partial class post : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            SqlConnection con = new SqlConnection("Data Source=(local);Initial Catalog=post;Integrated Security=True");
            con.Open();
            string trim = TextBox3.Text.Replace("\n", "|");
            string[] count = trim.Split('|');
            string strsql = "insert into posttitle (title,content) values ('" + TextBox1.Text + "','" + TextBox2.Text + "') SELECT  @@IDENTITY  as  'id'";
            SqlCommand cmd = new SqlCommand(strsql, con);
            int id=Convert.ToInt32(cmd.ExecuteScalar());
            
            for (int i = 0; i < count.Length; i++)
            {
                string contentinsert = "insert into postchoose (hits,content,askid) values ('0','" + count[i].ToString() + "','" + id + "')";
                SqlCommand command = new SqlCommand(contentinsert, con);
                command.ExecuteNonQuery();
            }
            con.Close();
            Response.Redirect("manage.aspx");
        }
    }
}
