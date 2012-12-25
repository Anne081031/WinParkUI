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
    public partial class ExecuteNonQuery : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='Bbg0123456#'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            string strsql = "select top 5 * from mynews order by id desc";
            SqlCommand cmd = new SqlCommand(strsql, con);
            Label1.Text="该操作影响了"+cmd.ExecuteNonQuery()+"行";
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='Bbg0123456#'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            string strsql = "delete from mynews where id>4";
            SqlCommand cmd = new SqlCommand(strsql, con);
            Label1.Text = "该操作影响了" + cmd.ExecuteNonQuery() + "行";
        }
    }
}
