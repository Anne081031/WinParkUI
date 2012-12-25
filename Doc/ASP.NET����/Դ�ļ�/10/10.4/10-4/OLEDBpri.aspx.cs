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

namespace _10_4
{
    public partial class OLEDBpri : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string str = @"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Server.MapPath("data.xls") + ";Extended Properties= Excel 8.0;";
            OleDbConnection con = new OleDbConnection(str);
            try
            {
                con.Open();
                Response.Write("连接成功");
            }
            catch (Exception ee)
            {
                Response.Write(ee.ToString());
            }
        }
    }
}
