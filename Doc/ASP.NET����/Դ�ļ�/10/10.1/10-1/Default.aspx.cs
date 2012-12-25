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

namespace _10_1
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string str = @"DSN=guojing";
            OdbcConnection con = new OdbcConnection(str);

            try
            { con.Open(); }
            catch( Exception ee)
            {
                Response.Write(ee.ToString());
            }

        }
    }
}
