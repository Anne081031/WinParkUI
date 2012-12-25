using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Xml.Serialization;

namespace Ser
{
    [Serializable()]
    [XmlRoot("SerXML")]
    class MySer
    {   
        [XmlElement("Shop")]
        private string Shop { get; set; }

        [XmlElement("Name")]
        private string Name { get; set; }

        [XmlElement("Phone")]
        private string Phone { get; set; }

        [XmlElement("Seller")]
        private string Seller { get; set; }

        [XmlElement("Age")]
        //[NonSerialized()]
        private string Age { get; set; }

        public void str()
        { }
    }
}
