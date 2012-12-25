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

namespace _9_3
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            try
            {
                string str = "server='(local)';database='mytable';uid='sa';pwd='sa'";
                SqlConnection con = new SqlConnection(str);
                con.Open();
                SqlCommand cmd = new SqlCommand("UPDATE mytable SET title='修改后的数据' where id=3", con);
                cmd.ExecuteNonQuery();
                con.Close();
                Label1.Text = "更新成功";
            }
            catch
            {
                Label1.Text = "操作失败";
            }
        }
    }
}
