using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.ServiceModel;
using System.Text;
using Newtonsoft.Json;

namespace WcfCenterService
{
    // > PM Install-Package Newtonsoft.Json
    //http://james.newtonking.com/json/help/index.html
    // NOTE: You can use the "Rename" command on the "Refactor" menu to change the class name "Service1" in both code and config file together.
    public delegate void Test(int value);

    [ServiceBehavior(InstanceContextMode = InstanceContextMode.PerSession)]
    public class CenterService : ICenterService
    {
        static public Test t;

        //
        // Get vehicle record image
        // Get peer socket by strLocationID 
        // Get an image from roadserver by strRecordID, bEnter
        //
        public bool GetInOutImage(string strLocationID, string strRecordID, bool bEnter)
        {
            return true;
        }

        public string GetData(int value)
        {
            if (null != t)
            {
                t(value);
            }

            return string.Format("You entered: {0}", value);
        }

        public CompositeType GetDataUsingDataContract(CompositeType composite)
        {
            if (composite == null)
            {
                throw new ArgumentNullException("composite");
            }
            if (composite.BoolValue)
            {
                composite.StringValue += "Suffix";
            }
            return composite;
        }
    }
}
