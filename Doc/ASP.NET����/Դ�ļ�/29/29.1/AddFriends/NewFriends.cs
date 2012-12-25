using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using SQLHelper;
using System.Data.SqlClient;

namespace AddFriends
{
    [ToolboxData("<{0}:NewFriends runat=server></{0}:NewFriends>")]
    public class NewFriends : WebControl
    {
        protected override void RenderContents(HtmlTextWriter output)
        {
            try
            {
                StringBuilder str = new StringBuilder();
                string strsql = "select top 10 * from register where userroot=0 order by id desc";
                SqlDataReader sdr = SQLHelper.SQLHelper.ExecReader(strsql);
                while (sdr.Read())
                {
                    str.Append("<span style=\"color:white\"><a href=\"userindex.aspx?uid=" + sdr["id"] + "\">" + sdr["username"] + "</span></a><br/>");
                }
                output.Write(str);
            }
            catch
            {
                output.Write("");
            }
        }
    }
}
