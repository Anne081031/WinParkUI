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

namespace _5_7
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void DropDownList1_SelectedIndexChanged1(object sender, EventArgs e)
        {
            Label1.Text = "你选择了第" + DropDownList1.Text + "项";
        }

        protected void ListBox1_SelectedIndexChanged1(object sender, EventArgs e)
        {
            Label1.Text += ",你选择了第" + ListBox1.Text + "项";
        }

        protected void BulletedList1_Click(object sender, BulletedListEventArgs e)
        {
            Label1.Text += ",你选择了第" + BulletedList1.Items[e.Index].ToString() + "项";
        }
    }
}
