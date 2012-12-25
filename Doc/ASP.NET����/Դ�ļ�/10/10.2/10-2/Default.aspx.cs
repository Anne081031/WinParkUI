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
using System.Data.OleDb;

namespace _10_2
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            OleDbConnection con= new OleDbConnection();
            con.ConnectionString="Provider=SQLOLEDB;Data Source=(local);Initial Catalog=mytable;uid=sa;pwd=Bbg0123456#";//初始化连接字串
            try
            {
                con.Open();								//尝试打开连接
                Label1.Text = "连接成功";
                con.Close();
            }
            catch
            {
                Label1.Text = "连接失败";
            }

        }
    }
}
