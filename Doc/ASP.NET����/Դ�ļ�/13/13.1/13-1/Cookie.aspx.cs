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
    public partial class Cookie : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            try
            {
                HttpCookie MyCookie = new HttpCookie("MyCookie ");
                MyCookie.Value = Server.HtmlEncode("我的Cookie应用程序");
                MyCookie.Expires = DateTime.Now.AddDays(5);
                Response.AppendCookie(MyCookie);
                Response.Write("Cookies 创建成功");
                Response.Write("<hr/>获取Cookie的值<hr/>");
                HttpCookie GetCookie = Request.Cookies["MyCookie"];
                Response.Write("Cookies的值:" + GetCookie.Value.ToString() + "<br/>");
                Response.Write("Cookies的过期时间:" + GetCookie.Expires.ToString() + "<br/>");
            }
            catch
            {
                Response.Write("Cookies 创建失败");
            }
        }
    }
}
