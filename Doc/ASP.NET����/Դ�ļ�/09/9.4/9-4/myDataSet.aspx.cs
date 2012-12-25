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

namespace _9_4
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string str = "server='(local)';database='mytable';uid='sa';pwd='Bbg0123456#'";
            SqlConnection con = new SqlConnection(str);
            con.Open();
            string strsql = "select * from mynews";
            SqlDataAdapter da = new SqlDataAdapter(strsql, con);
            SqlCommandBuilder build = new SqlCommandBuilder(da);
            DataSet ds = new DataSet();
            da.Fill(ds, "datatable");
            DataTable tb = ds.Tables["datatable"];
            tb.PrimaryKey = new DataColumn[] { tb.Columns["id"] };
            DataRow row = tb.Rows.Find(3);
            row.Delete();
            da.Update(ds, "datatable");
        }
    }
}
