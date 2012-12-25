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
    public partial class HiddenField : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            HiddenField1.Value = "更改了值";
        }

        protected void HiddenField1_ValueChanged(object sender, EventArgs e)
        {
            Label1.Text = "值被更改了,并被更改成\"" + HiddenField1.Value + "\"";
        }
    }
}
