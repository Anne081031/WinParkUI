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

namespace _14_1
{
    public partial class MyXmlTextReader : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            XmlTextReader rd = new XmlTextReader(Server.MapPath("XMLFile1.xml"));
            while (rd.Read())
            {
                Response.Write("Node Type is : <b>" + rd.NodeType +"</b>&nbsp<br/>");
                Response.Write("Name is : " + rd.Name + "&nbsp<br/>");
                Response.Write("Value is :" + rd.Value + "&nbsp<br/>");
                
                Response.Write("<hr/>");
            }
            rd.Close();
        }
    }
}
