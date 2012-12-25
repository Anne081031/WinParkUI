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

namespace _7_10
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='Bbg0123456#'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            SqlCommand cmd = new SqlCommand("select * from mynews", con);
            SqlDataReader dr;
            try
            {
                dr = cmd.ExecuteReader();
                while (dr.Read())
                {
                    Response.Write(dr[1].ToString() + "<hr/>");
                }
            }
            catch (Exception ee)
            {
                Response.Write(ee.ToString());
            }
            finally
            {
                dr.Close();
                con.Close();
            }
        }
    }
}
