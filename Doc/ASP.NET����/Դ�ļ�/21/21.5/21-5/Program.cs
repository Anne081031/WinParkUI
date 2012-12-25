using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _21_5
{
    class Program
    {
        static void Main(string[] args)
        {
            //调用不同的方法实现不同的查询
            AggregateQuery();
        }

        public static void selectManyQuery()
        {
            int[] inter = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
            int[] inter2 = { 21, 22, 23, 24, 25, 26 };
            List<int[]> list = new List<int[]>();
            list.Add(inter);
            list.Add(inter2);
            var lint = list.SelectMany(i => i);
            foreach (var m in lint)
            {
                Console.WriteLine(m.ToString());
            }
            Console.ReadKey();
        }

        public static void WhereQuery()
        {
            int[] inter = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

            var lint = inter.Where(i => i > 5);
            //var lint = from i in inter where i > 5 select i;
            foreach (var m in lint)
            {
                Console.WriteLine(m.ToString());
            }
            Console.ReadKey();
        }

        public static void OrderByQuery()
        {
            int[] inter = {20,1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

            //var lint = inter.Reverse();
            var lint = inter.OrderByDescending(i => i);
            foreach (var m in lint)
            {
                Console.WriteLine(m.ToString());
            }
            Console.ReadKey();
        }

        public static void CountQuery()
        {
            int[] inter = { 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

            var Maxlint = inter.Max(i => i);
            var Minlint = inter.Min(i => i);
            Console.WriteLine("最大值是" + Maxlint.ToString());
            Console.WriteLine("最小值是" + Minlint.ToString());
            Console.ReadKey();
        }

        public static void CountQuery2()
        {
            int[] inter = { 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

            var Countlint = inter.Count(i => i > 5);
            var Arrlint = inter.Average(i => i);
            Console.WriteLine("复合条件的集合有" + Countlint.ToString()+"项");
            Console.WriteLine("平均值为" + Arrlint.ToString());
            Console.ReadKey();
        }

        public static void AggregateQuery()
        {
            int[] inter = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

            var aq = inter.Aggregate((x,y)=>x+y);

            Console.WriteLine(aq.ToString());
            Console.ReadKey();
        }
    }
}
