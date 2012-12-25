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
using System.Data.SqlClient;

namespace _7_3
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string strcon;
            strcon = "server='(local)';database='mytable';uid='sa';pwd='sa';";
            SqlConnection con = new SqlConnection(strcon);
            con.Open();
            SqlDataAdapter da=new SqlDataAdapter("select * from news",con);
            DataSet ds = new DataSet();
            da.Fill(ds, "tablename");
            DataList1.DataSource = ds;
            DataList1.DataMember = "tablename";
            DataList1.DataBind();
        }
    }
}
