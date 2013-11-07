using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Configuration;
using System.Data.SqlClient;
using System.Data;

namespace WcfCommonLib
{
    public class SQLServerAccessor
    {
#if false
        CREATE TABLE #MyTempTable current session(删除表定义)
        Oracle临时表分为会话级临时表和事务级临时表(不删除表定义)

        CREATE TABLE ##MyTempTable Global( All Sessions)
        Oracle 采用永久表，在表内采用会话标识来加以区分，会话结束时清除数据
        SQL Server / Oracle Instance
        Each installation is called an instance
        computerName\instanceName

        USE [ParkDb]
GO
/****** 对象:  Table [dbo].[FeeRateResult]    脚本日期: 11/06/2013 16:15:35 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[FeeRateResult](
	[FeeRate] [text] COLLATE Chinese_PRC_CI_AS NULL CONSTRAINT [DF_FeeRateResult_FeeRate]  DEFAULT (''),
	[ID] [int] NOT NULL CONSTRAINT [DF_FeeRateResult_Key]  DEFAULT ((1))
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]

        -- READTEXT UPDATETEXT WRITETEXT
        ALTER PROCEDURE [dbo].[GetFeeRate]
	@ParkID varchar(45),
	@FeeData varchar(max) output
AS
BEGIN
	declare ResultData CURSOR for select '("' +  convert( varchar(128 ), ID ) + '","' + ccbh + '")' from parkdb.dbo.jccxx;-- where ID < 23289;
	declare @RowData varchar(1024);
	--DECLARE @ptrval binary(16);
	declare @ByteLen int;
	declare @TmpLen int;
	declare @First tinyint;

	SET NOCOUNT ON;

	CREATE TABLE #FeeRateResult(
	[FeeRate] varchar(max) COLLATE Chinese_PRC_CI_AS NULL CONSTRAINT [DF_FeeRateResult_FeeRate]  DEFAULT (''),
	[ID] [int] NOT NULL CONSTRAINT [DF_FeeRateResult_Key]  DEFAULT ((1))
	) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY];

	insert #FeeRateResult( ID, FeeRate ) Values( 1, '' );

	--select @ptrval = TEXTPTR( FeeRate ) from #FeeRateResult;
	select @ByteLen = 0;
	select @TmpLen = 0;
	set @First = 1;

	open ResultData;
	fetch next from ResultData into @RowData;
	
	while 0 = @@fetch_status
	begin
		if ( 0 = @First ) set @RowData = ',' + @RowData;--SELECT STUFF(@RowData, 1, 0, ',');
		--updatetext #FeeRateResult.FeeRate @ptrval @ByteLen 0 @RowData;
		UPDATE #FeeRateResult set FeeRate .write( @RowData, @ByteLen, 0 ) where ID = 1;
		--select @TmpLen = Len( @RowData );
		select @TmpLen = DATALENGTH( @RowData );
		fetch next from ResultData into @RowData;
		select @ByteLen = @ByteLen + @TmpLen;
		set @First = 0;
	end

	close ResultData;
	Deallocate ResultData;

	select @FeeData = FeeRate from #FeeRateResult;
	--select FeeRate from #FeeRateResult;
END
#endif
        //UI<-->DataRowView(DataRow)<-->DataView(DataRowView)
        //(各种操作功能-插入 删除 编辑 排序 多视图模式 部分浏览等等)
        //<-->DataTable(DataRow DataColumn)
        //<-->DataSet(MemoryDatabase)<-->DataAdapter(SqlCommandBuilder 自动产生动作查询命令)
        //<-->SqlCommand(Select Update Insert Delete)
        //<-->SqlConnect<-->Database
        private string strConnString = null;

        public SQLServerAccessor()
        {
            strConnString = ConfigurationManager.ConnectionStrings["SQLServer"].ConnectionString;
        }

        private void CreateParameter(SqlCommand sqlCmd, object parmaValue, string strName, SqlDbType dbType, int nSize, System.Data.ParameterDirection paramDirect)
        {
            SqlParameter param = null;
            if (!sqlCmd.Parameters.Contains(strName))
            {
                param = new SqlParameter(strName, dbType, nSize);
                sqlCmd.Parameters.Add(param);
            }
            else
            {
                param = sqlCmd.Parameters[strName];
            }

            param.Value = parmaValue;
            param.Direction = paramDirect;
        }

        public StringBuilder GetFeeRateData(string strParkID)
        {
            SqlConnection sqlConn = new SqlConnection(strConnString);
            SqlCommand sqlCmd = sqlConn.CreateCommand( );
            sqlCmd.Connection = sqlConn;

            sqlCmd.CommandType = CommandType.StoredProcedure;
            sqlCmd.CommandText = "GetFeeRate";

            //http://msdn.microsoft.com/en-us/library/bb399384(v=vs.110).aspx
            //varchar(max), nvarchar(max), or varbinary(max)
            CreateParameter(sqlCmd, strParkID, "@ParkID", SqlDbType.VarChar, 45, ParameterDirection.Input);
            CreateParameter(sqlCmd, null, "@FeeData", SqlDbType.VarChar, -1, ParameterDirection.Output);

            sqlConn.Open();

            SqlTransaction trans = sqlConn.BeginTransaction();
            sqlCmd.Transaction = trans;
            Exception exRethrow = null;
            try
            {
                sqlCmd.ExecuteNonQuery();
                trans.Commit();
            }
            catch (Exception ex)
            {
                trans.Rollback();
                exRethrow = ex;
            }

            StringBuilder builder = new StringBuilder();
            object objRecord = sqlCmd.Parameters["@FeeData"].Value;
            if (null != objRecord && DBNull.Value != objRecord)
            {
                builder.Append(objRecord.ToString( ));
            }
            
            trans.Dispose();
            sqlCmd.Dispose();
            sqlConn.Close();
            sqlConn.Dispose();

            if (null != exRethrow)
            {
                throw exRethrow;
            }

            return builder;
        }

        public void WriteRecordData(DataTable table)
        {
            // Inset Value( )
            // Insert Values( )
            // BulkCopy
            // Table Value Parameters 2008
            SqlBulkCopy sqlBulk = new SqlBulkCopy(strConnString);

            table.Columns.Add("a", typeof(Int32));
            table.Columns.Add("b", typeof(string));
            DataRow row = table.NewRow();
            row[0] = 1;
            row[1] = "qwe";
            table.Rows.Add(row);

            row = table.NewRow();
            row[0] = 2;
            row[1] = "qwedsfsdf";
            table.Rows.Add(row);

            sqlBulk.BulkCopyTimeout = 60;
            sqlBulk.DestinationTableName = "TestUpload";
            sqlBulk.BatchSize = table.Rows.Count;
            sqlBulk.WriteToServer(table);
            sqlBulk.Close();
        }
    }
}
