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

namespace _5_4
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            Label1.Text = "普通按钮被触发";
        }

        protected void LinkButton1_Click(object sender, EventArgs e)
        {
            Label1.Text = "连接按钮被触发";
        }

        protected void ImageButton1_Click(object sender, ImageClickEventArgs e)
        {
            Label1.Text = "图片按钮被触发";
        }

        protected void Button1_Command(object sender, CommandEventArgs e)
        {
            if (e.CommandName == "Show")
            {
                Label1.Text = e.CommandArgument.ToString();
            }
        }
    }
}
