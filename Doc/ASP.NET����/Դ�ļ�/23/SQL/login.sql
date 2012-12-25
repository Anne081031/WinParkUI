USE [Login]
GO
/****** 对象:  Table [dbo].[Login]    脚本日期: 10/22/2008 22:56:11 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Login](
	[bh] [int] IDENTITY(1,1) NOT NULL,
	[username] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[password] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[email] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[msn] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[passed] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[ask] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[answer] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
 CONSTRAINT [PK_Login] PRIMARY KEY CLUSTERED 
(
	[bh] ASC
)WITH (PAD_INDEX  = OFF, STATISTICS_NORECOMPUTE  = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS  = ON, ALLOW_PAGE_LOCKS  = ON) ON [PRIMARY]
) ON [PRIMARY]
