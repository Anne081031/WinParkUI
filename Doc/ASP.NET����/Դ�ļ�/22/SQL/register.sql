USE [Register]
GO
/****** 对象:  Table [dbo].[Register]    脚本日期: 10/22/2008 22:56:52 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Register](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[username] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[password] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[sex] [int] NULL,
	[picture] [nvarchar](max) COLLATE Chinese_PRC_CI_AS NULL,
	[IM] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[information] [nvarchar](max) COLLATE Chinese_PRC_CI_AS NULL,
	[others] [nvarchar](max) COLLATE Chinese_PRC_CI_AS NULL,
	[ifisuser] [int] NULL,
 CONSTRAINT [PK_Register] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX  = OFF, STATISTICS_NORECOMPUTE  = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS  = ON, ALLOW_PAGE_LOCKS  = ON) ON [PRIMARY]
) ON [PRIMARY]
