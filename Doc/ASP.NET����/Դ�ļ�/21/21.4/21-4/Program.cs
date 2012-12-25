using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _21_4
{
    public class Person
    {
        public int age;
        public string name;
        public int cid;

        public Person(int age,string name,int cid)
        {
            this.age = age;
            this.name = name;
            this.cid = cid;
        }
    }

    public class CarInformaion
    {
        public int cid;
        public string type;

        public CarInformaion(int cid,string type)
        {
            this.cid = cid;
            this.type = type;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            List<Person> PersonList = new List<Person>();
            PersonList.Add(new Person(21, "limusha",1));						
            PersonList.Add(new Person(21, "guojing",2));
            PersonList.Add(new Person(22, "wujunmin",3));

            List<CarInformaion> CarList = new List<CarInformaion>();
            CarList.Add(new CarInformaion(1,"宝马"));
            CarList.Add(new CarInformaion(2, "奇瑞"));

            var gl = from p in PersonList let car = from c in CarList select c.cid select p;

            foreach (var element in gl)
            {
                Console.WriteLine(element.name.ToString());
            }

            Console.ReadKey();
        }

    }
}
