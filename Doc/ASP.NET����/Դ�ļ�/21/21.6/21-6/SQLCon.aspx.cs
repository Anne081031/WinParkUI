using System;
using System.Collections;
using System.Configuration;
using System.Data;
using System.Data.Linq;
using System.Linq;
using System.Web;
using System.Web.Security;
using System.Web.UI;
using System.Web.UI.HtmlControls;
using System.Web.UI.WebControls;
using System.Web.UI.WebControls.WebParts;
using System.Xml.Linq;

namespace _21_6
{
    public partial class SQLCon : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (!IsPostBack)
            {
                DataContext db = new DataContext("Data Source=(local);Initial Catalog=student;Persist Security Info=True;User ID=sa;Password=Bbg0123456#");
                try
                {
                    Table<Student> stu = db.GetTable<Student>();
                    var StudentList = from d in stu orderby d.S_ID descending select d;
                    foreach (var stud in StudentList)
                    {
                        Response.Write("学生姓名为" + stud.S_NAME.ToString() + "<br/>");
                    }
                }
                catch
                {
                    Response.Write("数据库连接失败");
                }
            }
        }

        public void InsertSQL()
        {
            Student stu = new Student { S_NAME="xixi",C_ID=1,S_CLASS="0502" };
            MyLinqDataContext dc = new MyLinqDataContext();
            dc.Student.InsertOnSubmit(stu);
            dc.SubmitChanges();
        }

        public void DeleteSQL()
        {
            MyLinqDataContext dc = new MyLinqDataContext();
            //var delf = from d in dc.Class where d.C_ID == 1 select d;
            var del = from d in dc.Student where d.S_ID==4 select d;
            
            foreach (var e in del)
            {
                dc.Student.DeleteOnSubmit(e);
                dc.SubmitChanges();
            }

            //foreach (var f in delf)
            //{
                //dc.Class.DeleteOnSubmit(f);
                //dc.SubmitChanges();
            
            //}
        }

        public void UpdateSQL()
        {
            MyLinqDataContext dc = new MyLinqDataContext();
            var element = from d in dc.Student where d.S_ID == 4 select d;

            foreach (var e in element)
            {
                e.S_NAME = "xixi2";
                e.S_CLASS = "0501";
            }

            dc.SubmitChanges();
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            InsertSQL();
            Response.Redirect("SQLCon.aspx");
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            try
            {
                UpdateSQL();
                Response.Redirect("SQLCon.aspx");
            }
            catch
            {
                Response.Write("发生错误");
            }
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            try
            {
                DeleteSQL();
                Response.Redirect("SQLCon.aspx");
            }
            catch
            {
                Response.Write("发生错误");
            }
        }
    }
}
