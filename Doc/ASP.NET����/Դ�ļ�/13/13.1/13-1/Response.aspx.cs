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

namespace _13_1
{
    public partial class response : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Response.BufferOutput = false;
            Response.Write("<div style=\"font-size:18px;\">这是一串<span style=\"color:red\">HTML</span>流</div>");

            for (int i=0; i < 100; i++)
            {
                if (i < 10)
                {
                    Response.Write("当前输出了第" + i + "行<hr/>");
                }
                else
                {
                    Response.End();
                }
            }

            Response.Redirect("http://www.shangducms.com");

            Response.Clear();
        }
    }
}
