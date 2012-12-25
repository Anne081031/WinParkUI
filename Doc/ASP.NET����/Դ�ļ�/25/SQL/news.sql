USE [news]
GO
/****** 对象:  Table [dbo].[news]    脚本日期: 10/22/2008 22:54:01 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[news](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[title] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[time] [datetime] NULL,
	[author] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[content] [nchar](10) COLLATE Chinese_PRC_CI_AS NULL,
	[weather] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[level] [int] NULL,
	[hits] [int] NULL,
	[classname] [int] NULL,
 CONSTRAINT [PK_news] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX  = OFF, STATISTICS_NORECOMPUTE  = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS  = ON, ALLOW_PAGE_LOCKS  = ON) ON [PRIMARY]
) ON [PRIMARY]
