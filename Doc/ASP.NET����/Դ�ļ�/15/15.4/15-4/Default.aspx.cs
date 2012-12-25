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
using System.Drawing.Drawing2D;
using System.Drawing.Text;

namespace _15_4
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Shadow();
            Shadow1();
            trans();
        }

        protected void Shadow()
        {
            Bitmap images = new Bitmap(600, 150);
            Graphics gr = Graphics.FromImage(images);
            gr.Clear(Color.WhiteSmoke);
            gr.TextRenderingHint = TextRenderingHint.ClearTypeGridFit;
            gr.SmoothingMode = SmoothingMode.AntiAlias;
            Font newFont = new Font("微软雅黑", 32);
            Matrix matrix = new Matrix();
            matrix.Shear(-1.5f, 0.0f);
            matrix.Scale(1, 0.5f);
            matrix.Translate(130, 88);
            gr.Transform = matrix;
            SolidBrush grayBrush = new SolidBrush(Color.Gray);
            SolidBrush colorBrush = new SolidBrush(Color.Red);
            string text = "ASP.NET 3.5开发大全";
            gr.DrawString(text, newFont, grayBrush, new PointF(0, 30));
            gr.ResetTransform();
            gr.DrawString(text, newFont, colorBrush, new PointF(0, 40));
            images.Save(Response.OutputStream, System.Drawing.Imaging.ImageFormat.Jpeg);
        }
        
        private void Shadow1()
        {
            Brush shadowBrush = Brushes.LightBlue;
            Brush foreBrush = Brushes.Blue;
            Font font = new Font("微软雅黑", Convert.ToInt16(40), FontStyle.Italic);
            Bitmap images = new Bitmap(600, 150);
            Graphics gr = Graphics.FromImage(images);
            gr.Clear(Color.WhiteSmoke);
            string text = "ASP.NET 3.5开发大全";

            SizeF size = gr.MeasureString(text, font);
            int posX = (600 - Convert.ToInt16(size.Width)) / 2;
            int posY = (150 - Convert.ToInt16(size.Height)) / 2;
            gr.TranslateTransform(posX, posY);

            GraphicsState state = gr.Save();
            gr.ScaleTransform(1, -1.0F);
            gr.DrawString(text, font, shadowBrush, 0, -120);
            gr.Restore(state);
            gr.DrawString(text, font, foreBrush, 0, 0);

            images.Save(Response.OutputStream, System.Drawing.Imaging.ImageFormat.Jpeg);
        }

        private void trans()
        {
            Bitmap images = new Bitmap(400, 400);
            Graphics gr = Graphics.FromImage(images);
            gr.Clear(Color.WhiteSmoke);
            gr.SmoothingMode = SmoothingMode.AntiAlias;
            for (int i = 0; i <= 180; i += 20)
            {
                gr.TranslateTransform(200, 200);
                gr.RotateTransform(i);
                Brush brush = Brushes.Red;
                Font font = new Font("微软雅黑", 12);
                gr.DrawString("ASP.NET 3.5 开发大全 ", font, brush, 0, 0);
                gr.ResetTransform();
            }
            images.Save(Response.OutputStream, System.Drawing.Imaging.ImageFormat.Jpeg);
        } 
    }
}
