using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Data.SqlClient;
using System.Data;

namespace _21_1
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] str = { "学习", "学习LINQ", "好好学习", "生活很美好" };
            string[] arr = { "123", "1234", "12345", "123456", "1234567", "12345678" };
            int[] inter = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
            //var st = from s in inter where (s * s) % 2 == 0 select s;
            var st = from s in inter where (s * s) % 2 == 0 orderby s descending select s;
            Console.WriteLine("-----------------------------------------------------");
            Console.WriteLine("遍历数组");
            foreach (var t in st)
            {
                Console.WriteLine(t.ToString());
            }
            Console.WriteLine("-----------------------------------------------------");
            Console.WriteLine("遍历SQL");
            linqtosqlDataContext lq = new linqtosqlDataContext();
            var mylq = from l in lq.Student from cl in lq.Class where l.C_ID==cl.C_ID select l;

            foreach (var result in mylq)
            {
                Console.WriteLine(result.S_NAME.ToString());
            }
            Console.WriteLine("-----------------------------------------------------");
            Console.WriteLine("遍历数据集");
            try
            {
                SqlConnection
                con = new SqlConnection("server='(local)';database='student';uid='sa';pwd='Bbg0123456#'");
                con.Open();
                string strsql = "select * from student,class where student.c_id=class.c_id";
                SqlDataAdapter da = new SqlDataAdapter(strsql, con);
                DataSet ds = new DataSet();
                da.Fill(ds, "mytable");
                DataTable tables = ds.Tables["mytable"];
                var dslq = from d in tables.AsEnumerable() select d;
                foreach (var res in dslq)
                {
                   Console.WriteLine(res.Field<string>("S_NAME").ToString());
                }
            }
            catch
            {
                Console.WriteLine("数据库连接错误");
            }

            Console.WriteLine("-----------------------------------------------------");

            Console.ReadKey();
        }
    }
}
