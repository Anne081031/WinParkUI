USE [post]
GO
/****** 对象:  Table [dbo].[posttitle]    脚本日期: 10/22/2008 22:53:08 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[posttitle](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[title] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[content] [nvarchar](max) COLLATE Chinese_PRC_CI_AS NULL,
 CONSTRAINT [PK_posttitle] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX  = OFF, STATISTICS_NORECOMPUTE  = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS  = ON, ALLOW_PAGE_LOCKS  = ON) ON [PRIMARY]
) ON [PRIMARY]
