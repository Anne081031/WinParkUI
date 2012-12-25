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
    public partial class vaote : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            SqlConnection con = new SqlConnection("Data Source=(local);Initial Catalog=post;Integrated Security=True");
            con.Open();
            string title;
            string id = Request.QueryString["id"];
            string width = "500px";
            string str = "select * from posttitle where id='" + id + "'";
            SqlDataAdapter da = new SqlDataAdapter(str, con);
            DataSet ds = new DataSet();
            da.Fill(ds, "table");
            string str2 = "select * from postchoose where askid='" + id + "'";
            SqlDataAdapter da2 = new SqlDataAdapter(str2, con);
            DataSet ds2 = new DataSet();
            da2.Fill(ds2, "table2");

            title = ds.Tables["table"].Rows[0]["title"].ToString();
            int sum = 0;

            for (int i = 0; i < ds2.Tables["table2"].Rows.Count; i++)
            {
                sum += Convert.ToInt32(ds2.Tables["table2"].Rows[i]["hits"].ToString());
            }

            Response.Write("<table style='width:"+width+"'><tr><td style='border: #4a95c9 1px solid;background-color: #b7d8ed;padding:5px 5px 5px 5px;'>");
            Response.Write("<strong>" + title + "</strong><br />");
            for (int i = 0; i < ds2.Tables["table2"].Rows.Count; i++)
            {
                Response.Write("<br/><span style='font-size:12px;'>" + (i + 1) + ".<a href='newvote.aspx?id=" + ds2.Tables["table2"].Rows[i]["id"].ToString() + "&askid=" + id.ToString() + "#vote' target='_blank'>" + ds2.Tables["table2"].Rows[i]["content"].ToString().Replace("\n", "").Replace("\r", "") + "</a>&nbsp;&nbsp;票数:" + ds2.Tables["table2"].Rows[i]["hits"].ToString() + "百分比:");
                if (sum != 0)
                {
                    Response.Write(Convert.ToSingle(ds2.Tables["table2"].Rows[i]["hits"].ToString()) / Convert.ToSingle(sum) * 100 + "%");
                }
                else 
                { 
                    Response.Write("0%"); 
                }

                Response.Write("</span><br/><br/> <div style='height:10px; background-color:White;border:1px solid #ccc;'><div style='height:10px; background-color:gray; width:");
                
                if (sum != 0)
                {
                    Response.Write(Convert.ToInt32(Convert.ToSingle(ds2.Tables["table2"].Rows[i]["hits"].ToString()) / Convert.ToSingle(sum) * 100) + "%");
                }
                else
                {
                    Response.Write("0");                   
                }
                Response.Write("'></div></div>");
            }
            Response.Write("<br /><strong>总票数</strong>: " + sum + "");
            Response.Write("</td></tr></table>");
        }
    }
}
