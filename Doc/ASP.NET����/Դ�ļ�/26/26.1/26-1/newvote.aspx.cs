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

namespace _26_1
{
    public partial class newvote : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            try
            {
                if (Request.Cookies[Request.QueryString["id"]] == null)
                {
                    SqlConnection con = new SqlConnection("Data Source=(local);Initial Catalog=post;Integrated Security=True");
                    con.Open();

                    string askid = Request.QueryString["askid"];
                    string id = Request.QueryString["id"];

                    string str = "select * from postchoose where id='" + id + "'";
                    SqlDataAdapter da = new SqlDataAdapter(str, con);
                    DataSet ds = new DataSet();
                    da.Fill(ds, "table");
                    int hits = Convert.ToInt32(ds.Tables["table"].Rows[0]["hits"].ToString());
                    string strsql = "update postchoose set hits='" + (hits + 1) + "' where id='" + id + "'";
                    SqlCommand cmd = new SqlCommand(strsql, con);
                    cmd.ExecuteNonQuery();

                    HttpCookie cookies_votenum = new HttpCookie(id);
                    cookies_votenum.Value = id;
                    cookies_votenum.Expires = DateTime.Now.AddDays(1);
                    Response.AppendCookie(cookies_votenum);
                    Response.Redirect("vote.aspx?id=" + askid + "");
                }
                else
                {
                    Label1.Text = "您已经参与投票";
                }
            }
            catch(Exception ee)
            {
                Response.Write(ee.ToString());
            }
        }
    }
}
