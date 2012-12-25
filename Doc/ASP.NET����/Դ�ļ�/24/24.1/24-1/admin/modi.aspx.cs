using System;
using System.Collections;
using System.Configuration;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Web;
using System.Web.Security;
using System.Web.UI;
using System.Web.UI.HtmlControls;
using System.Web.UI.WebControls;
using System.Web.UI.WebControls.WebParts;
using System.Xml.Linq;

namespace _24_1.admin
{
    public partial class modi : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            try
            {
                if (!IsPostBack)
                {
                    if (Request.QueryString["id"] == "")
                    {
                        Response.Redirect("manage.aspx");
                    }

                    SqlConnection con = new SqlConnection("Data Source=(local);Initial Catalog=ad;Integrated Security=True");
                    con.Open();
                    string strsql = "select * from ads where id='" + Request.QueryString["id"].ToString() + "'";
                    SqlDataAdapter da = new SqlDataAdapter(strsql, con);
                    DataSet ds = new DataSet();
                    int count = da.Fill(ds, "table");

                    if (count > 0)
                    {
                        TextBox1.Text = ds.Tables["table"].Rows[0]["name"].ToString();
                        TextBox2.Text = ds.Tables["table"].Rows[0]["title"].ToString();
                        TextBox3.Text = ds.Tables["table"].Rows[0]["content"].ToString();
                        TextBox4.Text = ds.Tables["table"].Rows[0]["infor"].ToString();
                        TextBox5.Text = ds.Tables["table"].Rows[0]["html"].ToString();
                        TextBox6.Text = ds.Tables["table"].Rows[0]["picture"].ToString();
                        TextBox7.Text = ds.Tables["table"].Rows[0]["url"].ToString();
                        Calendar1.SelectedDate = Convert.ToDateTime(ds.Tables["table"].Rows[0]["time"].ToString());
                        Calendar2.SelectedDate = Convert.ToDateTime(ds.Tables["table"].Rows[0]["endtime"].ToString());
                        DropDownList1.Text = ds.Tables["table"].Rows[0]["type"].ToString();
                        DropDownList2.Text = ds.Tables["table"].Rows[0]["adid"].ToString();
                        Label1.Text = ds.Tables["table"].Rows[0]["id"].ToString();
                    }
                    else
                    {
                        Response.Redirect("manage.aspx");
                    }
                }
            }
            catch(Exception ee)
            {
                Response.Write(ee.ToString());
            }
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            SqlConnection con = new SqlConnection("Data Source=(local);Initial Catalog=ad;Integrated Security=True");
            con.Open();
            string strsql = "update ads set time='" + Calendar1.SelectedDate + "',endtime='" + 
                Calendar2.SelectedDate + "',name='" + TextBox1.Text + "',title='" + TextBox2.Text + "',content='" + 
                TextBox3.Text + "',infor='" + TextBox4.Text + "',html='" + TextBox5.Text + "',picture='" + TextBox6.Text + "',url='" + 
                TextBox7.Text + "',type='" + DropDownList1.Text + "',adid='" + DropDownList2.Text + "' where id='" + Label1.Text + "'";
            SqlCommand cmd = new SqlCommand(strsql, con);
            cmd.ExecuteNonQuery();
            Response.Redirect("manage.aspx");
        }
    }
}
