USE [friends]
GO
/****** 对象:  Table [dbo].[diarygbook]    脚本日期: 10/22/2008 22:49:41 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[diarygbook](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[title] [nvarchar](500) COLLATE Chinese_PRC_CI_AS NULL,
	[time] [datetime] NULL,
	[content] [nvarchar](max) COLLATE Chinese_PRC_CI_AS NULL,
	[userid] [int] NULL,
	[diaryid] [int] NULL,
 CONSTRAINT [PK_diary_gbook] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX  = OFF, STATISTICS_NORECOMPUTE  = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS  = ON, ALLOW_PAGE_LOCKS  = ON) ON [PRIMARY]
) ON [PRIMARY]
