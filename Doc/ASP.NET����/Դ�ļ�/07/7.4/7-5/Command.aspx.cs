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
    public partial class Command : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            try
            {
                string str = "server='(local)';database='mytable';uid='sa';pwd='sa'";
                SqlConnection con = new SqlConnection(str);
                con.Open();
                SqlCommand cmd = new SqlCommand("getdetail", con);
                cmd.CommandType = CommandType.StoredProcedure;
                SqlParameter spr;
                spr = cmd.Parameters.Add("@id", SqlDbType.Int);
                spr = cmd.Parameters.Add("@title", SqlDbType.NChar,50);
                spr.Direction = ParameterDirection.Output;
                spr = cmd.Parameters.Add("@count", SqlDbType.Int);
                spr.Direction = ParameterDirection.ReturnValue;
                cmd.Parameters["@id"].Value = 1;
                cmd.Parameters["@title"].Value = null;
                cmd.ExecuteNonQuery();
                Label1.Text = cmd.Parameters["@count"].Value.ToString();
            }
            catch (Exception ee)
            {
                Response.Write(ee.ToString());
            }
        }
    }
}
