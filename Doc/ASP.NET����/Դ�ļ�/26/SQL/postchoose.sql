USE [post]
GO
/****** 对象:  Table [dbo].[postchoose]    脚本日期: 10/22/2008 22:52:57 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[postchoose](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[hits] [int] NULL,
	[content] [nvarchar](max) COLLATE Chinese_PRC_CI_AS NULL,
	[askid] [int] NULL,
 CONSTRAINT [PK_postchoose] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX  = OFF, STATISTICS_NORECOMPUTE  = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS  = ON, ALLOW_PAGE_LOCKS  = ON) ON [PRIMARY]
) ON [PRIMARY]
