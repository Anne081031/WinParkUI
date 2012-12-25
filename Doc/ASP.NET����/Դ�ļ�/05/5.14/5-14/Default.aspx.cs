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

namespace _5_14
{
    public partial class _Default : System.Web.UI.Page
    {
        public TableRow row = new TableRow();
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            Table1.Rows.Add(row);
            for (int i = 0; i < 4; i++)
            {
                TableCell cell = new TableCell();
                cell.Text = "3."+i.ToString();
                row.Cells.Add(cell);
            }
        }

    }
}
