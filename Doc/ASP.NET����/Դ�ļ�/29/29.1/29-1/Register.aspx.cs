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
using SQLHelper;

namespace _29_1
{
    public partial class Register : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            try
            {
                string strsql = "insert into register (username,password,sex,picture,IM,information,others,ifisuser,userroot) values ('" + TextBox1.Text + "','" + TextBox2.Text + "','" + DropDownList1.Text + "','" + TextBox3.Text + "','" + TextBox4.Text + "','" + TextBox5.Text + "','" + TextBox6.Text + "',1,0)";
                SQLHelper.SQLHelper.ExecNonQuery(strsql);
                Response.Redirect("login.aspx");
            }
            catch(Exception ee)
            {
                Response.Write(ee.ToString());
            }
        }
    }
}
