USE [friends]
GO
/****** 对象:  Table [dbo].[diary]    脚本日期: 10/22/2008 22:48:49 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[diary](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[title] [nvarchar](500) COLLATE Chinese_PRC_CI_AS NULL,
	[author] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[time] [datetime] NULL,
	[content] [nvarchar](max) COLLATE Chinese_PRC_CI_AS NULL,
	[marks] [int] NULL,
	[classid] [int] NULL,
	[userid] [int] NULL,
	[hits] [int] NULL,
 CONSTRAINT [PK_diary] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX  = OFF, STATISTICS_NORECOMPUTE  = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS  = ON, ALLOW_PAGE_LOCKS  = ON) ON [PRIMARY]
) ON [PRIMARY]
