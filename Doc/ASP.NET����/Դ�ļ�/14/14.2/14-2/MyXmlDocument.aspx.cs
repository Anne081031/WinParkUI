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
    public partial class MyXmlDocument : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            XmlDocument doc = new XmlDocument();
            doc.Load(Server.MapPath("newXml.xml"));

            Response.Write("读取中..<hr/>");

            XmlNode node = doc.DocumentElement;
            output(node);

            Response.Write("读取完毕..<hr/>");
        }

        protected void output(XmlNode node)
        {
            if (node != null)
            {
                format(node);
            }

            if (node.HasChildNodes)
            {
                node = node.FirstChild;
                while (node != null)
                {
                    output(node);
                    node = node.NextSibling;
                }
            }
        }

        protected void format(XmlNode node)
        {
            if (!node.HasChildNodes)
            {
                Response.Write("node name is" + node.Name);
                Response.Write("node value is" + node.Value);
                Response.Write("<br/>");
            }
            else
            {
                Response.Write(node.Name);
                if (XmlNodeType.Element == node.NodeType)
                {
                    XmlNamedNodeMap map = node.Attributes;
                    foreach (XmlNode att in map)
                    {
                        Response.Write("attrnode name is" + att.Name);
                        Response.Write("attrnode value is" + att.Value);
                        Response.Write("<br/>");
                    }
                }
            }
        }

        public void addNode()
        {
            XmlDocument doc = new XmlDocument();
            doc.Load(Server.MapPath("newXml.xml"));

            XmlNode node = doc.DocumentElement;
            node.RemoveChild(node.FirstChild);

            XmlNode Shop = doc.CreateElement("Shop");
            XmlNode shop1 = doc.CreateElement("Name");
            XmlNode shop2 = doc.CreateElement("Phone");
            XmlNode shop3 = doc.CreateElement("Seller");

            XmlNode NameText = doc.CreateTextNode("NameText");
            XmlNode PhoneText = doc.CreateTextNode("PhoneText");
            XmlNode SellerText = doc.CreateTextNode("SellerText");

            shop1.AppendChild(NameText);
            shop2.AppendChild(PhoneText);
            shop3.AppendChild(SellerText);

            Shop.AppendChild(shop1);
            Shop.AppendChild(shop2);
            Shop.AppendChild(shop3);

            node.AppendChild(Shop);

            doc.Save("newXml.xml");
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            addNode();
        }
    }
}
