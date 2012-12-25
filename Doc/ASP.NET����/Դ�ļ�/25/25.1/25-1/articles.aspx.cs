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

namespace _25_1
{
    public partial class articles : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (Request.QueryString["id"] != "")
            {
                SqlConnection con = new SqlConnection("Data Source=(local);Initial Catalog=news;Integrated Security=True");
                con.Open();
                string strsql = "select * from news where id = '" + Request.QueryString["id"] + "'";
                SqlDataAdapter da = new SqlDataAdapter(strsql, con);
                DataSet ds = new DataSet();
                int count = da.Fill(ds, "table");
                if (count > 0)
                {
                    Label1.Text = ds.Tables["table"].Rows[0]["title"].ToString();
                    Label2.Text = ds.Tables["table"].Rows[0]["content"].ToString();
                    Label3.Text = ds.Tables["table"].Rows[0]["author"].ToString();
                    Label4.Text = ds.Tables["table"].Rows[0]["time"].ToString();
                }
                else
                {
                    Response.Redirect("default.aspx");
                }
            }
            else
            {
                Response.Redirect("default.aspx");
            }
        }
    }
}
