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

namespace _5_12
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if (FileUpload1.HasFile)
            {
                string fileExtension = System.IO.Path.GetExtension(FileUpload1.FileName);
                if (fileExtension != ".jpg")
                {
                    Label1.Text = "文件上传类型不正确，请上传jpg格式";
                }
                else
                {
                    FileUpload1.PostedFile.SaveAs(Server.MapPath("upload/beta.jpg"));
                    Label1.Text = "文件上传成功";
                }
            }
        }
    }
}
