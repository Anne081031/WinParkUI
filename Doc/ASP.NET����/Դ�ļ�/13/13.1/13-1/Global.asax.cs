using System;
using System.Collections;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Web;
using System.Web.Security;
using System.Web.SessionState;
using System.Xml.Linq;

namespace _13_1
{
    public class Global : System.Web.HttpApplication
    {

        protected void Application_Start(object sender, EventArgs e)
        {

        }

        protected void Session_Start(object sender, EventArgs e)
        {
            Session["count"] = 1;
        }

        protected void Application_BeginRequest(object sender, EventArgs e)
        {

        }

        protected void Application_AuthenticateRequest(object sender, EventArgs e)
        {

        }

        protected void Application_Error(object sender, EventArgs e)
        {
            Application.Lock();
            Application["error"] = "一个错误已经发生";
            Application.UnLock();
        }

        protected void Session_End(object sender, EventArgs e)
        {
            Session["count"] = null;
            Session.Clear();
        }

        protected void Application_End(object sender, EventArgs e)
        {

        }
    }
}