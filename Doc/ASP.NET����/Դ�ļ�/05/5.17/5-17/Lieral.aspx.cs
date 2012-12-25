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

namespace _5_17
{
    public partial class Lieral : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string str = "<span style=\"color:red\">大家好</span>，您现在查看的是HTML样式。";
            Literal1.Text = str + "<div style=\"border-top:1px dashed #ccc;background:gray\">单击按钮查看HTML代码</div>";
            Label1.Text = str;
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            Literal1.Mode = LiteralMode.Encode;
        }
    }
}
