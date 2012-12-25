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

namespace _7_5
{
    public partial class ExecuteScalar : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='Bbg0123456#'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            SqlCommand cmd = new SqlCommand("select count(*) from mynews SELECT  @@IDENTITY  as  'bh'", con);

            Label1.Text = cmd.ExecuteScalar().ToString();
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='Bbg0123456#'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            SqlCommand cmd = new SqlCommand("insert into mynews values ('this is a new title!') SELECT  @@IDENTITY  as  'bh'", con);

            Label2.Text = cmd.ExecuteScalar().ToString();
        }
    }
}
