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

namespace _7_5
{
    public partial class DataTableExam : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            DataTable Table = new DataTable("mytable");
            Table.CaseSensitive = false;
            Table.MinimumCapacity = 100;
            Table.TableName = "newtable";
            DataColumn Colum = new DataColumn();
            Colum = Table.Columns.Add("id", typeof(int));
            Colum = Table.Columns.Add("title", typeof(string));

            DataRow Row = Table.NewRow();
            Row[0] = 1;
            Row[1] = "datarow";
            Table.Rows.Add(Row);

            DataView dv = new DataView();
            DataSet ds = new DataSet();
            ds.Tables.Add(Table);
            dv = ds.Tables["newtable"].DefaultView;
            dv.RowFilter = "id" = "1";
            dv.Sort = "id";
            
        }
    }
}
