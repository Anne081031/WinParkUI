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

namespace _13_1.file1
{
    public partial class myfile : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string FilePath = Server.MapPath("../Default.aspx");
            string FileRootPath = Server.MapPath("/Default.aspx");
            Response.Write(Server.MapPath("../Default.aspx"));
        }
    }
}
