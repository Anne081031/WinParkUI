using System;
using System.Collections.Generic;
using System.Text;
using System.Configuration;
using System.Data;
using System.Data.SqlClient;

//******************************************************************
//Copyright Guojing in Develop of Shangducms Teamsuit! 2008-2010
//Copyright Guojing of Shangducms Teamsuit! 2008-2010
//Copyright Shangducms Team (HUACHUANG) 2008-2010
//This is Opened of Developer or Programmer
//Version:1.0
//This FrameWork Is Based On .Net 2.0
//Author:Guojing
//******************************************************************

namespace SQLHelper
{
    public class SQLHelper
    {
        #region //数据库连接串
        private static readonly string database = ConfigurationManager.AppSettings["database"].ToString();
        private static readonly string uid = ConfigurationManager.AppSettings["uid"].ToString();
        private static readonly string pwd = ConfigurationManager.AppSettings["pwd"].ToString();
        private static readonly string server = ConfigurationManager.AppSettings["server"].ToString();
        private static readonly string condb = "server='"+ server +"';database='" + database + "';uid='" + uid + "';pwd='" + pwd + "';Max Pool Size=100000;Min Pool Size=0;Connection Lifetime=0;packet size=32767;Connection Reset=false; async=true";
        #endregion
        #region//DataAdapter方法 返回DataSet数据集

        /// <summary>
        /// DataAdapter方法 返回DataSet数据集
        /// </summary>
        /// <param name="sqlCmd">SQL语句</param>
        /// <param name="command">操作参数 枚举类型</param>
        /// <returns></returns>
        public static DataSet DataAdapter(string sqlCmd, SDACmd command, string tabName, params SqlParameter[] paraList)
        {
            SqlConnection con = new SqlConnection(condb);
            SqlCommand cmd = new SqlCommand();
            cmd.Connection = con;
            cmd.CommandText = sqlCmd;
            if (paraList != null)
            {
                cmd.CommandType = CommandType.Text;
                foreach (SqlParameter para in paraList)
                { cmd.Parameters.Add(para); }

            }
            SqlDataAdapter sda = new SqlDataAdapter();
            switch (command)
            {
                case SDACmd.select:
                    sda.SelectCommand = cmd;
                    break;
                case SDACmd.insert:
                    sda.InsertCommand = cmd;
                    break;
                case SDACmd.update:
                    sda.UpdateCommand = cmd;
                    break;
                case SDACmd.delete:
                    sda.DeleteCommand = cmd;
                    break;
            }
            DataSet ds = new DataSet();
            sda.Fill(ds, tabName);
            return ds;


        }
        public enum SDACmd { select, delete, update, insert }
        #endregion
        #region //DataReader方法 有返回
        /// <summary>
        /// DataReader方法 
        /// </summary>
        /// <param name="sqlcmd">SQL语句</param>
        /// <returns></returns>
        public static SqlDataReader ExecReader(string sqlcmd, params SqlParameter[] paraList)
        {
            SqlConnection con = new SqlConnection(condb);
            SqlCommand cmd = new SqlCommand();
            cmd.Connection = con;
            cmd.CommandText = sqlcmd;
            if (paraList != null)
            {
                cmd.CommandType = CommandType.Text;
                foreach (SqlParameter para in paraList)
                { cmd.Parameters.Add(para); }
            }
            con.Open();
            SqlDataReader sdr = cmd.ExecuteReader(CommandBehavior.CloseConnection);
            return sdr;
        }
        #endregion
        #region //无返回 执行数据库命令
        /// <summary>
        /// 无返回 执行数据库命令
        /// </summary>
        /// <param name="sqlcmd"></param>
        public static void ExecNonQuery(string sqlcmd, params SqlParameter[] paraList)
        {

            using (SqlConnection con = new SqlConnection(condb))
            {
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = con;
                cmd.CommandText = sqlcmd;
                if (paraList != null)
                {
                    cmd.CommandType = CommandType.Text;
                    foreach (SqlParameter para in paraList)
                    { cmd.Parameters.Add(para); }
                }
                con.Open();
                cmd.ExecuteNonQuery();
            }

        }

        public static int ExecNonQuery(string sqlcmd,bool ifis)
        {

            using (SqlConnection con = new SqlConnection(condb))
            {
                int maxid;
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = con;
                cmd.CommandText = sqlcmd;
                con.Open();
                maxid = Convert.ToInt32(cmd.ExecuteScalar().ToString());
                return maxid;
            }

        }
        #endregion
    }
}
