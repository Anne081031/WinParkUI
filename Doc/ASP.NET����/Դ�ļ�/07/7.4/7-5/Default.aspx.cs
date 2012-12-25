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
using System.Data.OleDb;

namespace _7_5
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='sa'";
            SqlConnection con = new SqlConnection(str);
            try
            {
                con.Open();
                Label1.Text = "连接成功";
                con.Close();
            }
            catch
            {
                Label1.Text = "连接失败";
            }
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            string str = "Provider=SQLOLEDB;Data Source=(local);Initial Catalog=mytable;uid=sa;pwd=sa";
            string str2 = "Provider=SQLOLEDB;Data Source=(local);Initial Catalog=mytable;Trusted_Connection=Yes";
            OleDbConnection con = new OleDbConnection(str2);
            try
            {
                con.Open();
                Label1.Text = "连接成功";
                con.Close();
            }
            catch
            {
                Label1.Text = "连接失败";
            }
              
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            string str = "provider=Microsoft.Jet.OLEDB.4.0 ;Data Source=" + Server.MapPath("access.mdb") + "";
            OleDbConnection con = new OleDbConnection(str);
            try
            {
                con.Open();
                Label1.Text = "连接成功";
                con.Close();
            }
            catch(Exception ee)
            {
                Label1.Text = "连接失败";
            }
        }
    }
}
