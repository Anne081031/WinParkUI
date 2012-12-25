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
using System.Xml;
using System.Data.SqlClient;

namespace _9_1
{
    public partial class ExecuteXmlReader : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='Bbg0123456#'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            string strsql = "select * from mynews order by id desc FOR XML AUTO, XMLDATA";
            SqlCommand cmd = new SqlCommand(strsql, con);
            XmlReader xdr = cmd.ExecuteXmlReader();
            Response.Write(xdr.AttributeCount);
        }
    }
}
