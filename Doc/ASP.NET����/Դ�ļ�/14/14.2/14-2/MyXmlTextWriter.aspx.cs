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
    public partial class MyXmlTextWriter : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            XmlTextWriter wr = new XmlTextWriter("newXml.xml", null);
            try
            {
                wr.Formatting = Formatting.Indented;
                wr.WriteStartDocument();
                wr.WriteStartElement("ShopInformation");
                wr.WriteStartElement("Shop");
                wr.WriteAttributeString("place", "北京");
                wr.WriteElementString("Name", "中关村");
                wr.WriteElementString("Phone", "123456");
                wr.WriteElementString("Seller", "Guojing");
                wr.WriteEndElement();
                wr.WriteEndElement();
                wr.Flush();
                wr.Close();
                Response.Write("操作成功");
            }
            catch
            {
                Response.Write("操作失败");
            }
        }
    }
}
