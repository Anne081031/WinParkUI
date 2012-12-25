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

namespace _7_12
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='sa'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            string strsql = "select * from mynews where id = @bh";
            SqlCommand cmd = new SqlCommand(strsql, con);
            cmd.Parameters.Add("@bh", SqlDbType.Int);
            cmd.Parameters[0].Value = 4;
            SqlDataReader dr = cmd.ExecuteReader();
            while (dr.Read())
            {
                Response.Write(dr["title"].ToString()+"<hr>");
            }
        }
    }
}
