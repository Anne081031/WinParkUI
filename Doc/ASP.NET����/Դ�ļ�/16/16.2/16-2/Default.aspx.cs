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

namespace _16_2
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void TextBox1_TextChanged(object sender, EventArgs e)
        {
            try
            {
                Label1.Font.Size = FontUnit.Point(Convert.ToInt32(TextBox1.Text));
            }
            catch
            {
                Response.Write("错误");
            }
        }

        protected void ScriptManager1_AsyncPostBackError(object sender, AsyncPostBackErrorEventArgs e)
        {
            ScriptManager1.AsyncPostBackErrorMessage = "回传发生异常,具体信息如下:" + e.Exception.Message.ToString();
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            throw new ArgumentException();
        }
    }
}
