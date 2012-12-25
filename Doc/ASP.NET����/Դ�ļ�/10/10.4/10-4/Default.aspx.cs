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

namespace _10_4
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string str = @"DSN=myexcel";
            OdbcConnection con = new OdbcConnection(str);
            try
            {
                con.Open();
                Response.Write("连接成功<hr/>");
                OdbcDataAdapter da = new OdbcDataAdapter("select * from [Sheet1$]",con);
                DataSet ds = new DataSet();
                int count=da.Fill(ds, "exceltable");
                for (int i = 0; i < count; i++)
                {
                    Response.Write(ds.Tables["exceltable"].Rows[i]["姓名"].ToString()+"<hr/>");
                }
            }
            catch(Exception ee)
            {
                Response.Write(ee.ToString());
            }
        }
    }
}
