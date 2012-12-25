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
    public partial class ExecuteScalar : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='sa'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            string strsql = "select * from mynews order by id desc";
            SqlCommand cmd = new SqlCommand(strsql, con);
            Label1.Text = "查询出了id为" + cmd.ExecuteScalar();
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='sa'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            string strsql = "insert into mynews values ('刚刚插入的id是多少?') SELECT  @@IDENTITY  as  'bh'";
            SqlCommand cmd = new SqlCommand(strsql, con);
            Label1.Text = "刚刚插入的行的id是" + cmd.ExecuteScalar();
        }
    }
}
