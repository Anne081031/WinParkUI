using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.ServiceModel;
using System.ServiceModel.Channels;
using System.Text;

namespace _18_2
{
    // 注意: 如果更改此处的类名“IService1”，也必须更新 App.config 中对“IService1”的引用。
    public class Service1 : IService1
    {
        public string GetData(int value)
        {
            return string.Format("You entered: {0}", value);
        }

        public CompositeType GetDataUsingDataContract(CompositeType composite)
        {
            if (composite.BoolValue)
            {
                composite.StringValue += "Suffix";
            }
            return composite;
        }

        public int GetSum(DateTime time)
        {
            int BreadNum = 10;
            int Milk = 5;
            int HotDryNuddle = 20;
            int today = BreadNum + Milk + HotDryNuddle;
            return today;
        }

        public Message MyProcessMessage(Message m)
        {
            CompositeType t = m.GetBody<CompositeType>();
            Console.WriteLine(t.StringValue);
            return Message.CreateMessage(MessageVersion.Soap11, "Add", new CompositeType("Hello World!"));
        }

        public string GetShopInformation(string address)
        {
            if (address == "武汉")
            {
                return "武汉麦当劳连锁店";
            }
            else if (address == "北京")
            {
                return "北京麦当劳连锁店";
            }
            else if (address == "上海")
            {
                return "上海麦当劳连锁店";
            }
            else
            {
                return "没有该连锁店";
            }
        }

        public void OutputString()
        {
            Console.WriteLine("IsOneWay=true");
        }
    }
}
