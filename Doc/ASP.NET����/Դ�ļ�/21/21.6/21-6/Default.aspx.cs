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

namespace _21_6
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            MyLinqDataContext dc = new MyLinqDataContext();
            var StudentList = from d in dc.Student orderby d.S_ID descending select d;
            foreach (var stu in StudentList)
            {
                Response.Write("学生姓名为" + stu.S_NAME.ToString()+"<br/>");
            }
        }
    }
}
