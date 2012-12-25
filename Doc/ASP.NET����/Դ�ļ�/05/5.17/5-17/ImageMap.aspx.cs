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

namespace _5_17
{
    public partial class ImageMap : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void ImageMap1_Click(object sender, ImageMapEventArgs e)
        {
            string str="";
            switch (e.PostBackValue)
            { 
                case "0":
                    str = "你点击了1号位置，图片大小将变为1号"; break;
                case "1":
                    str = "你点击了2号位置，图片大小将变为3号"; break;
                case "2":
                    str = "你点击了3号位置，图片大小将变为3号"; break;
            }
            Label1.Text = str;
            ImageMap1.Height =120*(Convert.ToInt32(e.PostBackValue)+1);
        }
    }
}
