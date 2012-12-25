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
using System.Data.Odbc;

namespace _10_3
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string str = @"DSN=MYSQL";
            string strbase = @"Driver=MYSQL ODBC 5.1 Driver;Server=localhost;Database=test;UID=root";
            OdbcConnection con = new OdbcConnection(str);
            con.Open();

            OdbcDataAdapter da = new OdbcDataAdapter("select * from mytables", con);
            DataSet ds = new DataSet();
            da.Fill(ds, "mysqltable");

            OdbcCommand cmd = new OdbcCommand("insert into mytables values ('mysql title')", con);
            cmd.ExecuteNonQuery();
            con.Close();
        }
    }
}
