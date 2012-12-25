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
    public partial class fudiao : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Bitmap images = new Bitmap(Server.MapPath("change.jpg"));

            for (int i = 0; i < images.Width-1; i++)
            {
                for (int j = 0; j < images.Height-1; j++)
                {
                    Color pix1 = images.GetPixel(i, j);
                    Color pix2 = images.GetPixel(i+1, j+1);
                    int r = Math.Abs(pix1.R - pix2.R + 128);
                    int g = Math.Abs(pix1.G - pix2.G + 128);
                    int b = Math.Abs(pix1.B - pix2.B + 128);
                    r = check(r);
                    g = check(g);
                    b = check(b);
                    images.SetPixel(i, j, Color.FromArgb(r, g, b));
                }
            }

            images.Save(Response.OutputStream, System.Drawing.Imaging.ImageFormat.Jpeg);
            images.Dispose();
        }

        protected int check(int x)
        {
            if (x > 255)
            {
                return 255;
            }
            else if (x < 0)
            {
                return 0;
            }
            else
            {
                return x;
            }
        }
    }
}
