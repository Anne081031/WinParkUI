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

namespace _16_4
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            try
            {
                int a, b;
                float c;
                a = Convert.ToInt32(TextBox1.Text);
                b = Convert.ToInt32(TextBox2.Text);
                c = a / b;
                TextBox3.Text = c.ToString();
            }
            catch(Exception ee)
            {
                ee.Data["error"] = "自定义错误";
                throw ee;
            }
        }

        protected void ScriptManager1_AsyncPostBackError(object sender, AsyncPostBackErrorEventArgs e)
        {
            if (e.Exception.Data["error"] != null)
            {
                ScriptManager1.AsyncPostBackErrorMessage = "发生了一个错误" + e.Exception.Data["error"].ToString();
            }
            else
            {
                ScriptManager1.AsyncPostBackErrorMessage = "发生了一个错误";
            }
        }
    }
}
