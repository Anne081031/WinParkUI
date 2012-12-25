using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using System.Web.Mvc.Ajax;

namespace _17_1.Controllers
{
    [HandleError]
    public class BetaController : Controller
    {
        public ActionResult Index()
        {
            List<string> str = new List<string>();
            str.Add("str字符串1<hr/>");
            str.Add("str字符串2<hr/>");
            str.Add("str字符串3<hr/>");
            str.Add("str字符串4<hr/>");
            ViewData["beta"] = str;
            TempData["Index"] = "这是跳转页面的字符串哦..";
            //Response.Redirect("/Beta/Get");
            return View();
        }

        public ActionResult Get()
        {
            return View();
        }

        public ActionResult Html()
        {
            if (Request.HttpMethod != "POST")
            {
                ViewData["p"] = "表单还没被传递";
            }
            else
            {
                ViewData["p"] = "表单已被传递";
            }
            return View();
        }
    }
}