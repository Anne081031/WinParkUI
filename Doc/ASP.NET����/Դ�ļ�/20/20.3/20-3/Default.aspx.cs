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
using System.Collections.Generic;
using System.Linq.Expressions;

namespace _20_3
{

    public class People
    {
        public int age { get; set; }
        public string name { get; set; }
        public People(int age,string name)
        {
            this.age = age;
            this.name = name;
        }
    }


    public partial class _Default : System.Web.UI.Page
    {
        delegate int Sum(int a,int b);

        public int retSum(int a,int b)
        {
            int c = a + b;
            return c;
        }

        protected void Page_Load(object sender, EventArgs e)
        {
            List<People> people = new List<People>();
            People p1 = new People(21,"guojing");
            People p2 = new People(21, "wujunmin");
            People p3 = new People(20, "muqing");
            People p4 = new People(23, "lupan");  
            people.Add(p1);
            people.Add(p2);
            people.Add(p3);
            people.Add(p4);

            Sum s = delegate(int a,int b)
            {
                return a + b;
            };

            Response.Write(s(5,6).ToString());

            IEnumerable<People> results = people.Where(People => People.age > 20);

            foreach (People pe in results)
            {
                Response.Write(pe.name.ToString() + "<br/>");
            }
            Response.Write("<hr/>");

            Func<int, int> func = (pra => pra * pra);
            Response.Write(func(8).ToString());
            Response.Write("<hr/>");

            Expression<Func<int, int>> expression = pra => pra * pra;
            Func<int, int> func1 = expression.Compile();
            Response.Write(func1(8).ToString());

            Response.Write( "<br/>"+ expression.ToString() + "<br/>");
            Response.Write(func.ToString() + "<br/>");

        }
    }
}
