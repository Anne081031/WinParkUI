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
using System.Drawing;

namespace _15_1
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Bitmap MyImage = new Bitmap(400, 400);
            Graphics gr = Graphics.FromImage(MyImage);
            Pen pen = new Pen(Color.Green, 10);
            gr.Clear(Color.WhiteSmoke);
            gr.DrawLine(pen, 50, 200, 400,20);
            MyImage.Save(Response.OutputStream,System.Drawing.Imaging.ImageFormat.Jpeg);
            MyImage.Dispose();
            gr.Dispose();
        }
    }
}
