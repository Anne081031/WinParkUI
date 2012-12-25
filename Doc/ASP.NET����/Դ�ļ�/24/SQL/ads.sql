USE [ad]
GO
/****** 对象:  Table [dbo].[ads]    脚本日期: 10/22/2008 22:54:57 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[ads](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[time] [datetime] NULL,
	[endtime] [datetime] NULL,
	[name] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[content] [nvarchar](max) COLLATE Chinese_PRC_CI_AS NULL,
	[infor] [nvarchar](max) COLLATE Chinese_PRC_CI_AS NULL,
	[picture] [nvarchar](500) COLLATE Chinese_PRC_CI_AS NULL,
	[url] [nvarchar](500) COLLATE Chinese_PRC_CI_AS NULL,
	[title] [nvarchar](500) COLLATE Chinese_PRC_CI_AS NULL,
	[html] [nvarchar](max) COLLATE Chinese_PRC_CI_AS NULL,
	[type] [int] NULL,
	[adid] [int] NULL,
 CONSTRAINT [PK_ads] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX  = OFF, STATISTICS_NORECOMPUTE  = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS  = ON, ALLOW_PAGE_LOCKS  = ON) ON [PRIMARY]
) ON [PRIMARY]
