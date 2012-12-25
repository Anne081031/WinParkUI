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
    public partial class Server : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            //Response.Write(Server.MachineName);

            string str = "<p>(*^__^*) 嘻嘻……</p>";
            Label1.Text = Server.HtmlEncode(str);
            Label2.Text = Server.HtmlDecode(Label1.Text);

            if (Request.QueryString["str"] != "")
            {
                Label3.Text = Server.UrlDecode(Request.QueryString["str"]);
            }
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            string str = Server.UrlEncode("错误信息 \n 操作异常");
            Response.Redirect("Server.aspx?str=" + str);
        }
    }
}
