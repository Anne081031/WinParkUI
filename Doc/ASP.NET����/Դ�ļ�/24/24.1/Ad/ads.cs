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

namespace Ad
{
    [DefaultProperty("Text")]
    [ToolboxData("<{0}:ads runat=server></{0}:ads>")]
    public class ads : WebControl
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

        [Bindable(true)]
        [DefaultValue("")]
        [Localizable(true)]
        public string type
        { get; set; }

        [Bindable(true)]
        [DefaultValue("")]
        [Localizable(true)]
        public string adid
        { get; set; }

        [Bindable(true)]
        [DefaultValue("Data Source=(local);Initial Catalog=ad;Integrated Security=True")]
        [Localizable(true)]
        public string SQLConnectionString
        { get; set; }

        [Bindable(true)]
        [DefaultValue("")]
        [Localizable(true)]
        public bool text
        { get; set; }

        [Bindable(true)]
        [DefaultValue("")]
        [Localizable(true)]
        public string CssStyle
        { get; set; }

        [Bindable(true)]
        [DefaultValue("")]
        [Localizable(true)]
        public string TitleCssStyle
        { get; set; }

        [Bindable(true)]
        [DefaultValue("")]
        [Localizable(true)]
        public string ContentCssStyle
        { get; set; }

        [Bindable(true)]
        [DefaultValue(10)]
        [Localizable(true)]
        public int ShowNumber
        { get; set; }

        protected override void RenderContents(HtmlTextWriter output)
        {
            try
            {
                string constring = "Data Source=(local);Initial Catalog=ad;Integrated Security=True";
                if (SQLConnectionString != null)
                {
                    constring = SQLConnectionString;
                }
                SqlConnection con = new SqlConnection(constring);
                con.Open();
                string strsql = "select * from ads order by id desc";

                if (type != null&&adid!=null)
                {
                    strsql = "select * from ads where type=" + type + " and adid=" + adid + " order by id desc";
                }
                else if (type != null)
                {
                    strsql = "select * from ads where type=" + type + " order by id desc";
                }
                else if (adid != null)
                {
                    strsql = "select * from ads where adid=" + adid + " order by id desc";
                }

                SqlDataAdapter da = new SqlDataAdapter(strsql,con);
                DataSet ds = new DataSet();
                int count=da.Fill(ds, "table");

                if (count > 0)
                {
                    if (ShowNumber <= count)
                    {
                        count = ShowNumber;
                    }

                    StringBuilder build = new StringBuilder();
                    build.Append("<div style=\"padding:10px 10px 10px 10px;border:1px dashed #ccc;\">");
                    for (int i = 0; i < count; i++)
                    {
                        build.Append("<div style=\"font-size:14px;border-bottom:1px dashed #ccc;\"><a href=\"" + ds.Tables["table"].Rows[i]["url"].ToString() + "\">" + ds.Tables["table"].Rows[i]["title"].ToString() + "</a></div>");
                        build.Append("<div style=\"font-size:12px;\">" + ds.Tables["table"].Rows[i]["content"].ToString() + "</div>");
                    }
                    build.Append("</div>");
                    Text = build.ToString();
                }
                else
                {
                    Text = "暂时没有任何投放的广告";
                }

                output.Write(Text);
            }
            catch(Exception ee)
            {
                Text = ee.ToString();
                output.Write(Text);
            }
        }
    }
}
