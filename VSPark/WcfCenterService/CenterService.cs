using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.ServiceModel;
using System.Text;
using Newtonsoft.Json;
using System.IO;
using System.Configuration;
using WcfCommonLib;
using System.Data;

namespace WcfCenterService
{
    // > PM Install-Package Newtonsoft.Json
    //http://james.newtonking.com/json/help/index.html
    // NOTE: You can use the "Rename" command on the "Refactor" menu to change the class name "Service1" in both code and config file together.
    public delegate void LogCallback( string strLog );

    [ServiceBehavior(InstanceContextMode = InstanceContextMode.PerSession)]
    public class CenterService : ICenterService
    {
        static public LogCallback logCB = null;
        private string strImagePath = null;
        private SQLServerAccessor dbSQLServer = new SQLServerAccessor(); 

        public CenterService()
        {
            strImagePath = ConfigurationManager.AppSettings.Get("ImagePath");
            if (null == strImagePath)
            {
                strImagePath = "c:\\";
            }

            if ( !Directory.Exists( strImagePath ) ) {
                Directory.CreateDirectory(strImagePath);
            }
        }

        //
        // Get vehicle record image
        // Get peer socket by strLocationID 
        // Get an image from roadserver by strRecordID, bEnter
        //

        private void DisplyaLog(string strLog)
        {
            if (null != logCB)
            {
                logCB(strLog);
            }
        }
        public void  UploadInOutImage( string strLocationID, string strRecordID, byte[ ] inImage, byte[ ] outImage )
        //public void UploadInOutImage(string strLocationID, string strRecordID, MemoryStream streamInImage, MemoryStream streamOutImage )
        //public void UploadInOutImage(byte[] inImag)
        {
            if ( ( null == strLocationID || string.Empty == strLocationID ) ||
                 ( null == strLocationID || string.Empty == strLocationID ) ||
                   null == inImage || null == outImage )
            {
                DisplyaLog("UploadInOutImage中参数为null 或空字符串。");
                return;
            }

            StringBuilder builder = new StringBuilder();

            try {
                GetFileName(builder, strLocationID, strRecordID, true);
                SaveFile(builder, inImage);

                GetFileName(builder, strLocationID, strRecordID, false);
                SaveFile(builder, outImage);
            } catch( Exception ex ) {
                DisplyaLog(ex.Message );
            }
        }

        private void SaveFile(StringBuilder strName, byte[] image)
        {
            string strFile = strImagePath + strName.ToString( );
            //if (File.Exists(strFile))
            {
               // return;
            }

            File.WriteAllBytes(strFile, image );
        }

        private void GetFileName(StringBuilder builder, string strLocationID, string strRecordID, bool bEnter )
        {
            builder.Clear();
            builder.Append(strLocationID);
            builder.Append("_");
            builder.Append(strRecordID);
            builder.Append("_");
            builder.Append(bEnter ? "1" : "0" );
            builder.Append(".JPG");
        }

        public StringBuilder GetFeeData(string strParkID)
        {
            StringBuilder builder = null;
            try
            {
                builder = dbSQLServer.GetFeeRateData(strParkID);
                DisplyaLog("【下载费率】" + builder.ToString( ));
            }
            catch (Exception ex)
            {
                DisplyaLog(ex.Message);
            }

            return builder;
        }

        public void UploadRecordData(DataTable table)
        {
            try
            {
                dbSQLServer.WriteRecordData(table);
                DisplyaLog("【上传数据】" + table.ToString( ));
            }
            catch (Exception ex)
            {
                DisplyaLog(ex.Message);
            }
        }

        public string GetData(int value)
        {
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
