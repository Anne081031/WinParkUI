using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using System.Web.Mvc.Ajax;
using _27_1.Models;

namespace _27_1.Controllers
{
    public class BlogController : Controller
    {
        public ActionResult Index()
        {
            ViewData["title"] = "MVC 和 LINQ";
            GetData da=new GetData();
            ViewData["contents"] =da.build();
            return View();
        }
    }
}
