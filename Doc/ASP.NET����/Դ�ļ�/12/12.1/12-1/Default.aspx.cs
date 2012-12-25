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

namespace _12_1
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        public override String StyleSheetTheme
        {
            get
            {
                return "MyTheme1";
            }
        }

        protected void Page_PreInit(object sender, EventArgs e)
        {
            switch (Request.QueryString["theme"])
            {
                case "MyTheme1":
                    Page.Theme = "MyTheme1"; break;	
                case "MyTheme2":
                    Page.Theme = "MyTheme2"; break;
                    Calendar3.SkinID = "blue";
            }

        }
    }
}
