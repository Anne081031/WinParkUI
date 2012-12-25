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
using System.Data.Odbc;
using System.Data.OleDb;

namespace _10_5
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            OdbcConnection con = new OdbcConnection(@"DSN=txtexample");
            OleDbConnection olecon = new OleDbConnection(@"Provider=Microsoft.Jet.OLEDB 4.0;Data Source=c:\sample\;Extended Properties=text;HDR=yes;FMT=Delimited");
            try
            {
                con.Open();
                OdbcDataAdapter da = new OdbcDataAdapter("select * from data.txt", con);
                DataSet ds = new DataSet();
                int count=da.Fill(ds, "txttable");
                for (int i = 0; i < count; i++)
                {
                    Response.Write(ds.Tables["txttable"].Rows[i]["title"].ToString()+"<hr/>");
                }
            }
            catch
            {
                Response.Write("连接失败");
            }
        }
    }
}
