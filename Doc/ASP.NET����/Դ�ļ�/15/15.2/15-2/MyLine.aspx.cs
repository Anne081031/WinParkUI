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

namespace _15_2
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Bitmap images = new Bitmap(400, 400);
            Graphics gr = Graphics.FromImage(images);
            Pen pen = new Pen(Color.Red, 5);
            gr.Clear(Color.White);

            //绘制直线
            gr.DrawLine(pen, 0, 0, 200, 200);

            //绘制矩形
            gr.DrawRectangle(pen, 200, 200, 50, 50);

            //绘制椭圆
            gr.DrawEllipse(pen, 0, 0, 300, 200);

            //绘制多边形
            Point pt1 = new Point(50, 50);
            Point pt2 = new Point(150, 150);
            Point pt3 = new Point(200, 200);
            Point pt4 = new Point(350, 170);
            Point pt5 = new Point(90, 30);
            Point pt6 = new Point(180, 90);

            Point[] pts = { pt1, pt2, pt3, pt4, pt5, pt6 };

            gr.DrawPolygon(pen, pts);

            //绘制文字
            Font font = new Font("宋体", 20);
            Brush brush=new SolidBrush(Color.Red);
            gr.DrawString("我的字符串", font, brush, 200,200);

            //填充矩形
            SolidBrush brush2 = new SolidBrush(Color.YellowGreen);
            gr.FillRectangle(brush2,new Rectangle(100,100,100,100));

            images.Save(Response.OutputStream, System.Drawing.Imaging.ImageFormat.Jpeg);
            gr.Dispose();
            images.Dispose();
        }
    }
}
