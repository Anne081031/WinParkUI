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

namespace _15_5
{
    public partial class pic : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Bitmap images = new Bitmap(Server.MapPath("change.jpg"));

            for (int i = 0; i < images.Width; i++)
            {
                for (int j = 0; j < images.Height; j++)
                {
                    Color pix = images.GetPixel(i, j);
                    int r = 255 - pix.R;
                    int g = 255 - pix.G;
                    int b = 255 - pix.B;
                    images.SetPixel(i, j, Color.FromArgb(r, g, b));
                }
            }

            images.Save(Response.OutputStream, System.Drawing.Imaging.ImageFormat.Jpeg);
            images.Dispose();
        }
    }
}
