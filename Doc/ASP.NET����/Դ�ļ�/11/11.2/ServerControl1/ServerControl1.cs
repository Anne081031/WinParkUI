using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace ServerControl1
{
    [DefaultProperty("Text")]
    [ToolboxData("<{0}:ServerControl1 runat=server></{0}:ServerControl1>")]
    public class ServerControl1 : WebControl
    {
        //创建服务器控件
        public TextBox NameTextBox = new TextBox();
        public TextBox PasswordTextBox = new TextBox();
        public Button LoginButton = new Button();

        public event EventHandler LoginClick;

        [Bindable(true)]
        [Category("Appearance")]
        [DefaultValue("")]
        [Localizable(true)]
        public string Text
        {
            get
            {
                String s = (String)ViewState["Text"];
                return ((s == null) ? "[" + this.ID + "]" : s);
            }

            set
            {
                ViewState["Text"] = value;
            }
        }

        [Bindable(true)]
        [Category("Appearance")]
        [DefaultValue("")]
        [Localizable(true)]
        public string LoignBackGroundColor
        {
            get { return (String)ViewState["LoignBackGroundColor"]; }
            set { ViewState["LoignBackGroundColor"] = value; }
        }

        [Bindable(true)]
        [Category("Appearance")]
        [DefaultValue("")]
        [Localizable(true)]
        public string LoginBorderWidth
        {
            get { return (String)ViewState["LoginBorderWidth"]; }
            set { ViewState["LoginBorderWidth"] = value; }
        }

        [Bindable(true)]
        [Category("Appearance")]
        [DefaultValue("")]
        [Localizable(true)]
        public string LoginPadding
        {
            get { return (String)ViewState["LoginPadding"]; }
            set { ViewState["LoginPadding"] = value; }
        }

        [Bindable(true)]
        [Category("Appearance")]
        [DefaultValue("")]
        [Localizable(true)]
        public string LoginInformation
        {
            get { return (String)ViewState["LoginInformation"]; }
            set { ViewState["LoginInformation"] = value; }
        }

        [Bindable(true)]
        [Category("Appearance")]
        [DefaultValue("")]
        [Localizable(true)]
        public string ResignURL
        {
            get { return (String)ViewState["ResignURL"]; }
            set { ViewState["ResignURL"] = value; }
        }

        public void Submit_Click(object sender, EventArgs e)
        {
            EventArgs arg = new EventArgs();
            if (LoginClick != null)
            {
                LoginClick(LoginButton, arg);
            }
        }

        protected override void RenderContents(HtmlTextWriter output)
        {
            output.RenderBeginTag(HtmlTextWriterTag.Div);
            output.RenderBeginTag(HtmlTextWriterTag.Tr);
            NameTextBox.RenderControl(output);
            output.RenderBeginTag(HtmlTextWriterTag.Td);
            output.RenderBeginTag(HtmlTextWriterTag.Br);
            output.RenderBeginTag(HtmlTextWriterTag.Tr);
            PasswordTextBox.RenderControl(output);
            output.RenderBeginTag(HtmlTextWriterTag.Td);
        }
    }
}
