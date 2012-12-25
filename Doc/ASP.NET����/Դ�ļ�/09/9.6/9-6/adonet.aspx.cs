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
using MYSQL;

namespace _9_6
{
    public partial class adonet : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string strsql = "insert into mynews values ('SQLHelper插入标题')";
            SQLHelper.ExecNonQuery(strsql);
            string strsql2 = "delete form mynews where id=3";
            SQLHelper.ExecNonQuery(strsql2);
        }
    }
}
