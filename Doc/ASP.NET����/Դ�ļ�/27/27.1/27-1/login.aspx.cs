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

namespace _27_1
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            
        }

        protected void TextBox1_TextChanged(object sender, EventArgs e)
        {
            Button1.Visible = true;
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            RadioButtonList1.Visible = true;
            Button2.Visible = true;
            TextBox1.ReadOnly = true;
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            if (RadioButtonList1.SelectedIndex == -1)
            {
                Label1.Text = "请选择一个聊天室";
            }
            else
            {
                Session["roomid"] = RadioButtonList1.SelectedItem.Value;
                Session["username"] = TextBox1.Text;
                Response.Redirect("room.aspx?id=" + RadioButtonList1.SelectedItem.Value + "");
            }
        }
    }
}
