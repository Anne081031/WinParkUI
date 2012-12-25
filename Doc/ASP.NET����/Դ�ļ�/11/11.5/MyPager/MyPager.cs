using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data;
using System.Data.SqlClient;
using System.Xml;

namespace MyPager
{
    [DefaultProperty("Text")]
    [ToolboxData("<{0}:MyPager runat=server></{0}:MyPager>")]
    public class MyPager : WebControl
    {
        [Bindable(true)]
        [Category("Appearance")]
        [DefaultValue("")]
        [Localizable(true)]
        public string Text
        {
            get
            {
                String s = (String)ViewState["Text"];
                return ((s == null) ? "[" + this.ID + "]" : s);
            }

            set
            {
                ViewState["Text"] = value;
            }
        }

        [Bindable(false)]
        [Category("Data")]
        [DefaultValue("10")]
        [Localizable(true)]
        public int PageSize
        {
            get
            {
                try
                {
                    Int32 s = (Int32)ViewState["PageSize"];
                    return ((s.ToString() == null) ? 10 : s);
                }
                catch
                {
                    return 10;
                }
            }

            set
            {
                ViewState["PageSize"] = value;
            }
        }

        [Bindable(false)]
        [Category("Data")]
        [DefaultValue("")]
        [Localizable(true)]
        public string Server
        {
            get
            {
                String s = (String)ViewState["Server"];
                return ((s == null) ? ("(local)") : s);
            }

            set
            {
                ViewState["Server"] = value;
            }
        }

        [Bindable(false)]
        [Category("Data")]
        [DefaultValue("")]
        [Localizable(true)]
        public string DataBase
        {
            get
            {
                String s = (String)ViewState["DataBase"];
                return ((s == null) ? ("none") : s);
            }

            set
            {
                ViewState["DataBase"] = value;
            }
        }

        [Bindable(false)]
        [Category("Data")]
        [DefaultValue("")]
        [Localizable(true)]
        public string Uid
        {
            get
            {
                String s = (String)ViewState["Uid"];
                return ((s == null) ? ("uid") : s);
            }

            set
            {
                ViewState["Uid"] = value;
            }
        }

        [Bindable(false)]
        [Category("Data")]
        [DefaultValue("")]
        [Localizable(true)]
        public string Pwd
        {
            get
            {
                String s = (String)ViewState["Pwd"];
                return ((s == null) ? ("none") : s);
            }

            set
            {
                ViewState["Pwd"] = value;
            }
        }

        [Bindable(false)]
        [Category("Data")]
        [DefaultValue("")]
        [Localizable(true)]
        public string Table
        {
            get
            {
                String s = (String)ViewState["Table"];
                return ((s == null) ? ("none") : s);
            }

            set
            {
                ViewState["Table"] = value;
            }
        }

        [Bindable(false)]
        [Category("Data")]
        [DefaultValue("")]
        [Localizable(true)]
        public string SqlCommand
        {
            get
            {
                String s = (String)ViewState["SqlCommand"];
                return ((s == null) ? ("none") : s);
            }

            set
            {
                ViewState["SqlCommand"] = value;
            }
        }

        [Bindable(false)]
        [Category("Data")]
        [DefaultValue("")]
        [Localizable(true)]
        public string IndexPage
        {
            get
            {
                String s = (String)ViewState["IndexPage"];
                return ((s == null) ? ("none") : s);
            }

            set
            {
                ViewState["IndexPage"] = value;
            }
        }

        [Bindable(false)]
        [Category("Data")]
        [DefaultValue("")]
        [Localizable(true)]
        public string PageName
        {
            get
            {
                String s = (String)ViewState["PageName"];
                return ((s == null) ? ("none") : s);
            }

            set
            {
                ViewState["PageName"] = value;
            }
        }

        protected override void RenderContents(HtmlTextWriter output)
        {
            string html = "";
            string str = "server='" + Server + "';database='" + DataBase + "';uid='" + Uid + "';pwd='" + Pwd + "'";
            string strsql = "";
            SqlConnection con = new SqlConnection(str);
            try
            {
                con.Open();
                if (SqlCommand == "none" || SqlCommand == "")
                {
                    strsql = "select count(*) as mycount from " + Table + "";
                }
                else
                {
                    strsql = SqlCommand;
                }
                SqlDataAdapter da = new SqlDataAdapter(strsql, con);
                DataSet ds = new DataSet();
                int count = da.Fill(ds, "count");
                int page = 0;
                int pageCount = 0;

                if (count > 0)
                {
                    page = Convert.ToInt32(ds.Tables["count"].Rows[0]["mycount"].ToString());
                }

                if (page % PageSize > 0)
                {
                    pageCount = (page / PageSize) + 1;
                }
                else
                {
                    pageCount = page / PageSize;
                }

                html += "<table><tr>";
                for (int i = 0; i < pageCount; i++)
                {
                    if (IndexPage != i.ToString())
                    {
                        html += "<td style=\"padding:5px 5px 5px 5px;background:#f0f0f0;border:1px dashed #ccc;\">";
                    }
                    else
                    {
                        html += "<td style=\"padding:5px 5px 5px 5px;background:Gray;border:1px dashed #ccc;\">";
                    }
                    html += "<a href=\"" + PageName + "?page=" + i + "\">" + i + "</a>";
                    html += "</td>";
                }
                html += "</tr></table>";
            }
            catch(Exception ee)
            {
                html = ee.ToString();
            }
            finally
            {
                output.Write(html);
                con.Close();
            }
        }
    }
}
