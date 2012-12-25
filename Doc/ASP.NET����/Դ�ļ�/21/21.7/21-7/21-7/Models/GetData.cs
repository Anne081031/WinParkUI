using System;
using System.Data;
using System.Configuration;
using System.Linq;
using System.Web;
using System.Web.Security;
using System.Web.UI;
using System.Web.UI.HtmlControls;
using System.Web.UI.WebControls;
using System.Web.UI.WebControls.WebParts;
using System.Xml.Linq;

namespace _27_1.Models
{
    public class GetData
    {
        public string build()
        {
            string build="";
            DataClasses1DataContext dcd = new DataClasses1DataContext();
            var d = from dc in dcd.mynews select dc;
            foreach (var myd in d)
            {
                build += myd.TITLE.ToString()+"<br/>";
            }
            return build;
        }
    }
}
