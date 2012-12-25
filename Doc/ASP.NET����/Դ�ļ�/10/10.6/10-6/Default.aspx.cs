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
using System.Data.SQLite;


namespace _10_6
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            SQLiteConnection con = new SQLiteConnection("Data Source="+Server.MapPath("sqlite.db"));
            try
            {
                con.Open();
                Response.Write("连接成功");
            }
            catch(Exception ee)
            {
                Response.Write(ee.ToString());
            }
        }
    }
}
