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

namespace _13_3
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Cache["key"] = "value";
            string cache = Cache.Get("key").ToString();
            if (cache != null)
            {
                Response.Write(cache);
            }
            else
            {
                Cache["key"] = "value";
                Response.Write(Cache.Get("key").ToString());
            }

            IDictionaryEnumerator cacheEnum = Cache.GetEnumerator();
            while (cacheEnum.MoveNext())
            {
                cache = Server.HtmlEncode(cacheEnum.Current.ToString());
                Response.Write(cache);
            }

            //Cache.Insert("key", "value");

            //string[] dependencies = { "CacheItem1", "CacheItem2", "CacheItem3" };
            //Cache.Insert("key","xml file value",new System.Web.Caching.CacheDependency(null,dependencies));

            /*
            System.Web.Caching.CacheDependency mydep1 = new System.Web.Caching.CacheDependency(Server.MapPath("XmlData.xml"));
            string[] Mydependencies = { "CacheItem1", "CacheItem2", "CacheItem3" };
            System.Web.Caching.CacheDependency mydep2 = new System.Web.Caching.CacheDependency(null, Mydependencies);
            System.Web.Caching.AggregateCacheDependency aggDep = new System.Web.Caching.AggregateCacheDependency();
            aggDep.Add(mydep1);
            aggDep.Add(mydep2);
            Cache.Insert("Cache", "CacheItem", aggDep);
             */
        }
    }
}
