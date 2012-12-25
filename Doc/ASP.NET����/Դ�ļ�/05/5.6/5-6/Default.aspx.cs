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

namespace _5_6
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void CheckBox1_CheckedChanged(object sender, EventArgs e)
        {
            Label1.Text = "选框1被选中";
        }

        protected void CheckBox2_CheckedChanged(object sender, EventArgs e)
        {
            Label1.Text = "选框3被选中,并且字体变大";
            Label1.Font.Size = FontUnit.XXLarge;
        }

        protected void CheckBoxList1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (CheckBoxList1.Items[0].Selected)
            {
                Label1.Font.Size = FontUnit.XXLarge;
            }

            if (CheckBoxList1.Items[1].Selected)
            {
                Label1.Font.Size = FontUnit.XLarge;
            }

            if (CheckBoxList1.Items[2].Selected)
            {
                Label1.Font.Size = FontUnit.XSmall;
            }
        }
    }
}
