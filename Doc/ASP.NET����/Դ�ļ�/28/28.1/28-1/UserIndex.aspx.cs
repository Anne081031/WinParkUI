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

namespace _28_1
{
    public partial class UserIndex : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            PagedDataSource objPds = new PagedDataSource();
            objPds.DataSource = this.SqlDataSource1.Select(new DataSourceSelectArguments());
            objPds.AllowPaging = true;
            objPds.PageSize = 20;
            int CurPage;
            Label2.Visible = false;
            Label4.Visible = false;

            if (Request.QueryString["Page"] != null)
            {
                CurPage = Convert.ToInt32(Request.QueryString["Page"]);
            }
            else
            {
                CurPage = 1;
            }

            objPds.CurrentPageIndex = CurPage - 1;
            Label2.Visible = true;
            Label4.Visible = true;
            Label3.Text = "<a href=\"UserIndex.aspx?uid=" + Request.QueryString["uid"] + "\">首页</a>";
            Label2.Text = "<a href=\"UserInde.aspx?page=" + Convert.ToString(CurPage + 1) + "&uid=" + Request.QueryString["uid"] + "\">下一页</a>";
            Label4.Text = "<a href=\"UserInde.aspx?page=" + Convert.ToString(CurPage - 1) + "&uid=" + Request.QueryString["uid"] + "\">上一页</a>";

            if (CurPage == 1)
            {
                Label4.Visible = false;
            }

            if (objPds.IsLastPage)
            {
                Label2.Visible = false;
            }

            DataList1.DataSourceID = "";
            DataList1.DataSource = objPds;
            DataList1.DataBind();
        }
    }
}
