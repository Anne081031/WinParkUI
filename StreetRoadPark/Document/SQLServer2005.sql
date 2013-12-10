USE [ParkDb]
GO
/****** 对象:  StoredProcedure [dbo].[InOutXML]    脚本日期: 11/18/2013 10:27:31 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO



-- =============================================
-- Author:		<Author,,Name>
-- <TestUpload>
-- <TestUpload><RecordID>39</RecordID><LocationID>5101070001001006</LocationID><EnterTime>2013-11-01 17:00:53</EnterTime><LeaveTime>2013-11-01 17:00:56</LeaveTime><EnterPlate>1123</EnterPlate><LeavePlate>川A12456</LeavePlate><State>1</State></TestUpload>
-- <TestUpload><RecordID>40</RecordID><LocationID>5101070001001006</LocationID><EnterTime>2013-11-01 17:00:53</EnterTime><LeaveTime>2013-11-01 17:00:56</LeaveTime><EnterPlate>1123</EnterPlate><LeavePlate>川A12456</LeavePlate><State>1</State></TestUpload>
-- </TestUpload>
-- Create date: <Create Date,,>
-- Description:	<Description,,>
-- =============================================
CREATE PROCEDURE [dbo].[InOutXML]
	@RecordXML xml
AS
BEGIN
	DECLARE 
    @nItem INT, 
    @nTotal INT,
	--@RecordXML xml,
	@Row XML,

	@RecordID varchar(64),
	@LocationID varchar(64),
	@EnterTime varchar(64),
	@LeaveTime varchar(64),
	@EnterPlate varchar(64),
	@LeavePlate varchar(64),
	@State varchar(64);

	--select @RecordXML = '<zd_jccwxx><zd_jccwxx><RecordID>44</RecordID><LocationID>5101070001001007</LocationID><EnterTime>2013-11-01 17:03:55</EnterTime><LeaveTime/><EnterPlate>Test1</EnterPlate><LeavePlate/><State>1</State></zd_jccwxx></zd_jccwxx>';
 
	SELECT @nItem = 1, @nTotal = @RecordXML.value( 'count(/zd_jccwxx/zd_jccwxx)','INT' );

	WHILE @nItem <= @nTotal BEGIN
		SELECT @Row = @RecordXML.query('/zd_jccwxx/zd_jccwxx[position()=sql:variable("@nItem")]');

		select  @RecordID = CAST( T.C.query('/zd_jccwxx/RecordID/text( )') as VARCHAR(64) ),
			    @LocationID = CAST( T.C.query('/zd_jccwxx/LocationID/text( )') as VARCHAR(64) ),
				@EnterTime = CAST( T.C.query('/zd_jccwxx/EnterTime/text( )') as VARCHAR(64) ),
				@LeaveTime = CAST( T.C.query('/zd_jccwxx/LeaveTime/text( )') as VARCHAR(64) ),
				@EnterPlate = CAST( T.C.query('/zd_jccwxx/EnterPlate/text( )') as VARCHAR(64) ),
				@LeavePlate = CAST( T.C.query('/zd_jccwxx/LeavePlate/text( )') as VARCHAR(64) ),
				@State = CAST( T.C.query('/zd_jccwxx/State/text( )') as VARCHAR(64) ) from @Row.nodes('.') as T(C);

		

		if '' = @LeaveTime select @LeaveTime = null;
		if '' = @EnterPlate select @EnterPlate = null;
		if '' = @LeavePlate select @LeavePlate = null;

		IF EXISTS ( SELECT ID, RID FROM zd_jccwxx WHERE RID = @RecordID and ID = @LocationID )
		begin
			update zd_jccwxx set lksj = @LeaveTime, jrcphm = @EnterPlate, lkcphm = @LeavePlate, zt = @State where  RID = @RecordID and ID = @LocationID;
			--select 'update';
		end
		else
		begin
			Insert into zd_jccwxx( RID, ID, jrsj, lksj, jrcphm, lkcphm, zt ) 
                        values( @RecordID, @LocationID, @EnterTime, @LeaveTime, @EnterPlate, @LeavePlate, @State );
			--select 'insert';
		end

		SELECT @nItem = @nItem + 1;
/*
PRINT 'RecordID: ' + @RecordID;
		PRINT 'LocationID: ' + @LocationID;
		PRINT 'EnterTime: ' + @EnterTime;
		PRINT 'LeaveTime: ' + @LeaveTime;
		PRINT 'EnterPlate: ' + @EnterPlate;
		PRINT 'LeavePlate: ' + @LeavePlate;
		PRINT 'State: ' + @State;
		PRINT '';
*/
	END
END



USE [ParkDb]
GO
/****** 对象:  StoredProcedure [dbo].[GetUserInfo]    脚本日期: 11/18/2013 10:28:33 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

-- =============================================
-- Author:		<Author,,Name>
-- Create date: <Create Date,,>
-- Description:	<Description,,>
-- =============================================
CREATE PROCEDURE [dbo].[GetUserInfo] 
	@ParkID varchar(45),
	@UserData varchar(max) output
AS
BEGIN
	declare ResultData CURSOR for select '("' + a.gh + '","' + a.mm + '","' + a.xm +'","' + b.ccbh+ + '")' from zd_sfyxx a, zd_sfypg b where a.gh = b. gh and b.ccbh = @ParkID;
	declare @RowData varchar(1024);
	--DECLARE @ptrval binary(16);
	declare @ByteLen int;
	declare @TmpLen int;
	declare @First tinyint;

	SET NOCOUNT ON;

	CREATE TABLE #UserResult(
	[UserInfo] varchar(max) COLLATE Chinese_PRC_CI_AS NULL CONSTRAINT [DF_UserResult_User]  DEFAULT (''),
	[ID] [int] NOT NULL CONSTRAINT [DF_UserResult_Key]  DEFAULT ((1))
	) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY];

	insert #UserResult( ID, UserInfo ) Values( 1, '' );

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
		UPDATE #UserResult set UserInfo .write( @RowData, @ByteLen, 0 ) where ID = 1;
		--select @TmpLen = Len( @RowData );
		select @TmpLen = DATALENGTH( @RowData );
		fetch next from ResultData into @RowData;
		select @ByteLen = @ByteLen + @TmpLen;
		set @First = 0;
	end

	close ResultData;
	Deallocate ResultData;

	select @UserData = UserInfo from #UserResult;
END

-- ================================================-- Template generated from Template Explorer using:-- Create Procedure (New Menu).SQL---- Use the Specify Values for Template Parameters -- command (Ctrl-Shift-M) to fill in the parameter -- values below.---- This block of comments will not be included in-- the definition of the procedure.-- ================================================SET ANSI_NULLS ONGOSET QUOTED_IDENTIFIER ONGO-- =============================================-- Author:		<Author,,Name>-- Create date: <Create Date,,>-- Description:	<Description,,>-- =============================================CREATE PROCEDURE GetParkInfo	@ParkID varchar(45),	@ParkData varchar(max) outputASBEGIN	declare ResultData CURSOR for select '("' + ccbh + '","' + ccjc + '")' from tccxx where ccbh = @ParkID;	declare @RowData varchar(1024);	--DECLARE @ptrval binary(16);	declare @ByteLen int;	declare @TmpLen int;	declare @First tinyint;	SET NOCOUNT ON;	CREATE TABLE #ParkResult(	[ParkInfo] varchar(max) COLLATE Chinese_PRC_CI_AS NULL CONSTRAINT [DF_ParkResult_User]  DEFAULT (''),	[ID] [int] NOT NULL CONSTRAINT [DF_ParkResult_Key]  DEFAULT ((1))	) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY];	insert #ParkResult( ID, ParkInfo ) Values( 1, '' );	--select @ptrval = TEXTPTR( FeeRate ) from #FeeRateResult;	select @ByteLen = 0;	select @TmpLen = 0;	set @First = 1;	open ResultData;	fetch next from ResultData into @RowData;		while 0 = @@fetch_status	begin		if ( 0 = @First ) set @RowData = ',' + @RowData;--SELECT STUFF(@RowData, 1, 0, ',');		--updatetext #FeeRateResult.FeeRate @ptrval @ByteLen 0 @RowData;		UPDATE #ParkResult set ParkInfo .write( @RowData, @ByteLen, 0 ) where ID = 1;		--select @TmpLen = Len( @RowData );		select @TmpLen = DATALENGTH( @RowData );		fetch next from ResultData into @RowData;		select @ByteLen = @ByteLen + @TmpLen;		set @First = 0;	end	close ResultData;	Deallocate ResultData;	select @ParkData = ParkInfo from #ParkResult;ENDGO


USE [ParkDb]
GO
/****** 对象:  StoredProcedure [dbo].[GetFreeType]    脚本日期: 11/18/2013 10:28:51 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

-- =============================================
-- Author:		<Author,,Name>
-- Create date: <Create Date,,>
-- Description:	<Description,,>
-- =============================================
CREATE PROCEDURE [dbo].[GetFreeType]
	@FreeType varchar(max) output
AS
BEGIN
	declare ResultData CURSOR for select '("' + code + '","' + name + '")' from zd_mflx;
	declare @RowData varchar(1024);
	--DECLARE @ptrval binary(16);
	declare @ByteLen int;
	declare @TmpLen int;
	declare @First tinyint;

	SET NOCOUNT ON;

	CREATE TABLE #FreeResult(
	[FreeInfo] varchar(max) COLLATE Chinese_PRC_CI_AS NULL CONSTRAINT [DF_FreeResult_User]  DEFAULT (''),
	[ID] [int] NOT NULL CONSTRAINT [DF_FreeResult_Key]  DEFAULT ((1))
	) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY];

	insert #FreeResult( ID, FreeInfo ) Values( 1, '' );

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
		UPDATE #FreeResult set FreeInfo .write( @RowData, @ByteLen, 0 ) where ID = 1;
		--select @TmpLen = Len( @RowData );
		select @TmpLen = DATALENGTH( @RowData );
		fetch next from ResultData into @RowData;
		select @ByteLen = @ByteLen + @TmpLen;
		set @First = 0;
	end

	close ResultData;
	Deallocate ResultData;

	select @FreeType = FreeInfo from #FreeResult;
END


USE [ParkDb]
GO
/****** 对象:  StoredProcedure [dbo].[GetFeeRate]    脚本日期: 11/18/2013 10:29:00 ******/
set ANSI_NULLS ONset QUOTED_IDENTIFIER ONgoALTER PROCEDURE [dbo].[GetFeeRate]	@ParkID varchar(45),	@FeeData varchar(max) outputASBEGIN	declare ResultData CURSOR for select '("' +  ParkID + '","' + FeeRateCode + '","' + cast( FreeTime as varchar( 45 ) ) + '","' +										 DomainCode + '","' + DomainName + '","' + TimeSectionCode + '","' + SectionStartTime + '","' +										 SectionEndTime + '","' + TimeSecion + '","' + StopType + '","' + StopName + '","' +										 ViehcleType + '","' + ViehcleName + '","' + cast( StartPrice as varchar( 45 ) ) + '","' +										 cast( StartPriceTime as varchar( 45 ) ) + '","' +										 cast( ContinuePrice as varchar(  45 ) ) + '","' + cast( ContinuePriceTime as varchar( 45 ) ) + 										 '",' + IfSection + ',"' + cast( MaxFee as varchar( 45 ) ) + '")' 										 from FeeView where ParkID = @ParkID;	declare @RowData varchar(1024);	--DECLARE @ptrval binary(16);	declare @ByteLen int;	declare @TmpLen int;	declare @First tinyint;	declare @User varchar(max);	declare @FreeType varchar(max);	declare @ParkData varchar(max);	SET NOCOUNT ON;	CREATE TABLE #FeeRateResult(	[FeeRate] varchar(max) COLLATE Chinese_PRC_CI_AS NULL CONSTRAINT [DF_FeeRateResult_FeeRate]  DEFAULT (''),	[ID] [int] NOT NULL CONSTRAINT [DF_FeeRateResult_Key]  DEFAULT ((1))	) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY];	insert #FeeRateResult( ID, FeeRate ) Values( 1, '' );	--select @ptrval = TEXTPTR( FeeRate ) from #FeeRateResult;	select @ByteLen = 0;	select @TmpLen = 0;	set @First = 1;	open ResultData;	fetch next from ResultData into @RowData;		while 0 = @@fetch_status	begin		if ( 0 = @First ) set @RowData = ',' + @RowData;--SELECT STUFF(@RowData, 1, 0, ',');		--updatetext #FeeRateResult.FeeRate @ptrval @ByteLen 0 @RowData;		UPDATE #FeeRateResult set FeeRate .write( @RowData, @ByteLen, 0 ) where ID = 1;		--select @TmpLen = Len( @RowData );		select @TmpLen = DATALENGTH( @RowData );		fetch next from ResultData into @RowData;		select @ByteLen = @ByteLen + @TmpLen;		set @First = 0;	end	close ResultData;	Deallocate ResultData;	select @FeeData = FeeRate from #FeeRateResult;--select @FeeData = '("510108001","001","15","002","武侯","003","07:00","20:00","07:00-20:00","004","临时停放","005","小型车","100","2","1","30", 0, "20"),("510108002","001","15","002","武侯","003","07:00","20:00","07:00-20:00","004","临时停放","005","小型车","100","2","1","30", 1, "20")';	exec GetUserInfo @ParkID, @User OUTPUT;	exec GetFreeType @FreeType output;	exec GetParkInfo @ParkID, @ParkData output;	select @FeeData = '<Data><Fee>' + @FeeData + '</Fee><User>' + @User + '</User><FreeType>' + @FreeType + '</FreeType><ParkInfo>' + @ParkData + '</ParkInfo></Data>';END



USE [ParkDb]
GO
/****** 对象:  View [dbo].[FeeView]    脚本日期: 11/18/2013 10:29:20 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE VIEW [dbo].[FeeView]
AS
SELECT     a.ccbh AS ParkID, a.sfbzdm AS FeeRateCode, b.mfsc AS FreeTime, b.qylx AS DomainCode, c.name AS DomainName, b.sjdlx AS TimeSectionCode, 
                      d.Name1 AS SectionStartTime, d.Name2 AS SectionEndTime, d.Name2 AS TimeSecion, b.tflx AS StopType, e.name AS StopName, b.tfcx AS ViehcleType,
                       f.name AS ViehcleName, b.qjje AS StartPrice, b.qjsc AS StartPriceTime, b.xjje AS ContinuePrice, b.xjsc AS ContinuePriceTime, b.sffd AS IfSection, 
                      b.zgxe AS MaxFee
FROM         dbo.zd_tccsfbz AS a INNER JOIN
                      dbo.zd_flbz AS b ON a.sfbzdm = b.sfbzdm INNER JOIN
                      dbo.zd_qy AS c ON b.qylx = c.Code INNER JOIN
                      dbo.zd_sjd AS d ON b.sjdlx = d.code INNER JOIN
                      dbo.zd_tflx AS e ON b.tflx = e.code INNER JOIN
                      dbo.zd_tfcx AS f ON b.tfcx = f.code

GO
EXEC sys.sp_addextendedproperty @name=N'MS_DiagramPane1', @value=N'[0E232FF0-B466-11cf-A24F-00AA00A3EFFF, 1.00]
Begin DesignProperties = 
   Begin PaneConfigurations = 
      Begin PaneConfiguration = 0
         NumPanes = 4
         Configuration = "(H (1[40] 4[20] 2[20] 3) )"
      End
      Begin PaneConfiguration = 1
         NumPanes = 3
         Configuration = "(H (1 [50] 4 [25] 3))"
      End
      Begin PaneConfiguration = 2
         NumPanes = 3
         Configuration = "(H (1 [50] 2 [25] 3))"
      End
      Begin PaneConfiguration = 3
         NumPanes = 3
         Configuration = "(H (4 [30] 2 [40] 3))"
      End
      Begin PaneConfiguration = 4
         NumPanes = 2
         Configuration = "(H (1 [56] 3))"
      End
      Begin PaneConfiguration = 5
         NumPanes = 2
         Configuration = "(H (2 [66] 3))"
      End
      Begin PaneConfiguration = 6
         NumPanes = 2
         Configuration = "(H (4 [50] 3))"
      End
      Begin PaneConfiguration = 7
         NumPanes = 1
         Configuration = "(V (3))"
      End
      Begin PaneConfiguration = 8
         NumPanes = 3
         Configuration = "(H (1[56] 4[18] 2) )"
      End
      Begin PaneConfiguration = 9
         NumPanes = 2
         Configuration = "(H (1 [75] 4))"
      End
      Begin PaneConfiguration = 10
         NumPanes = 2
         Configuration = "(H (1[66] 2) )"
      End
      Begin PaneConfiguration = 11
         NumPanes = 2
         Configuration = "(H (4 [60] 2))"
      End
      Begin PaneConfiguration = 12
         NumPanes = 1
         Configuration = "(H (1) )"
      End
      Begin PaneConfiguration = 13
         NumPanes = 1
         Configuration = "(V (4))"
      End
      Begin PaneConfiguration = 14
         NumPanes = 1
         Configuration = "(V (2))"
      End
      ActivePaneConfig = 0
   End
   Begin DiagramPane = 
      Begin Origin = 
         Top = 0
         Left = 0
      End
      Begin Tables = 
         Begin Table = "a"
            Begin Extent = 
               Top = 6
               Left = 38
               Bottom = 84
               Right = 168
            End
            DisplayFlags = 280
            TopColumn = 0
         End
         Begin Table = "b"
            Begin Extent = 
               Top = 144
               Left = 167
               Bottom = 252
               Right = 297
            End
            DisplayFlags = 280
            TopColumn = 0
         End
         Begin Table = "c"
            Begin Extent = 
               Top = 36
               Left = 312
               Bottom = 114
               Right = 442
            End
            DisplayFlags = 280
            TopColumn = 0
         End
         Begin Table = "d"
            Begin Extent = 
               Top = 227
               Left = 385
               Bottom = 335
               Right = 515
            End
            DisplayFlags = 280
            TopColumn = 0
         End
         Begin Table = "e"
            Begin Extent = 
               Top = 20
               Left = 515
               Bottom = 98
               Right = 645
            End
            DisplayFlags = 280
            TopColumn = 0
         End
         Begin Table = "f"
            Begin Extent = 
               Top = 93
               Left = 685
               Bottom = 171
               Right = 815
            End
            DisplayFlags = 280
            TopColumn = 0
         End
      End
   End
   Begin SQLPane = 
   End
   Begin DataPane = 
      Begin ParameterDefaults = ""
      End
      Begin ColumnWidths = 9
         Width = 284
         Width = 1500
         Width = 1500
         Width = 1500
         Width = 150' ,@level0type=N'SCHEMA', @level0name=N'dbo', @level1type=N'VIEW', @level1name=N'FeeView'

GO
EXEC sys.sp_addextendedproperty @name=N'MS_DiagramPane2', @value=N'0
         Width = 1500
         Width = 1500
         Width = 1500
         Width = 1500
      End
   End
   Begin CriteriaPane = 
      Begin ColumnWidths = 11
         Column = 1440
         Alias = 900
         Table = 1170
         Output = 720
         Append = 1400
         NewValue = 1170
         SortType = 1350
         SortOrder = 1410
         GroupBy = 1350
         Filter = 1350
         Or = 1350
         Or = 1350
         Or = 1350
      End
   End
End
' ,@level0type=N'SCHEMA', @level0name=N'dbo', @level1type=N'VIEW', @level1name=N'FeeView'

GO
EXEC sys.sp_addextendedproperty @name=N'MS_DiagramPaneCount', @value=2 ,@level0type=N'SCHEMA', @level0name=N'dbo', @level1type=N'VIEW', @level1name=N'FeeView'
