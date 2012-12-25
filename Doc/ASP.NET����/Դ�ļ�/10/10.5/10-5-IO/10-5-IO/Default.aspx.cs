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
using System.IO;

namespace _10_6
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (File.Exists(Server.MapPath("data.txt")))
            {
                Response.Write("文件存在<hr/>");
                StreamReader rd = File.OpenText(Server.MapPath("data.txt"));
                while (rd.Peek() != -1)
                {
                    Response.Write(rd.ReadLine() + "<hr/>");
                }
            }
        }
    }
}
