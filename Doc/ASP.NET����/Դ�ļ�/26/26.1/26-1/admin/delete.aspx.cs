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

namespace _26_1.admin
{
    public partial class delete : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            SqlConnection con = new SqlConnection("Data Source=(local);Initial Catalog=post;Integrated Security=True");
            con.Open();
            string deletetitle = "delete posttitle where id='"+Request.QueryString["id"]+"'";
            string deletechoose = "delete postchoose where askid='"+Request.QueryString["id"]+"'";
            SqlCommand cmd = new SqlCommand(deletetitle, con);
            cmd.ExecuteNonQuery();
            SqlCommand cmd1 = new SqlCommand(deletechoose, con);
            cmd1.ExecuteNonQuery();
            Response.Redirect("manage.aspx");
        }
    }
}
