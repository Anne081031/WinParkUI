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

namespace _5_10
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Calendar1_SelectionChanged(object sender, EventArgs e)
        {
            Label1.Text = "现在的时间是:" + Calendar1.SelectedDate.Year.ToString() + "年" + Calendar1.SelectedDate.Month.ToString()+"月" + Calendar1.SelectedDate.Day.ToString()+"号" + Calendar1.SelectedDate.Hour.ToString()+"点";
        }
    }
}
