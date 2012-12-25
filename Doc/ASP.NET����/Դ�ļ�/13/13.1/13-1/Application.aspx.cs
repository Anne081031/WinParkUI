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
    public partial class Application : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Application.Add("App", "MyValue");
            Application.Add("App1", "MyValue1");
            Application.Add("App2", "MyValue2");

            //Response.Write(Application["App1"].ToString());

            for (int i = 0; i < Application.Count; i++)
            {
                Response.Write(Application.Get(i).ToString());
            }

            Application.Lock();
            Application["App"] = "MyValue3";
            Application.UnLock();
        }
    }
}
