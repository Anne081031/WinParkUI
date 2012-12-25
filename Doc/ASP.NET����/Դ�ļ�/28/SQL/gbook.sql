USE [guestbook]
GO
/****** 对象:  Table [dbo].[gbook]    脚本日期: 10/22/2008 22:50:57 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[gbook](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[title] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[name] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[time] [datetime] NULL,
	[content] [nvarchar](max) COLLATE Chinese_PRC_CI_AS NULL,
	[reptitle] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[admin] [nvarchar](50) COLLATE Chinese_PRC_CI_AS NULL,
	[reptime] [datetime] NULL,
	[repcontent] [nvarchar](max) COLLATE Chinese_PRC_CI_AS NULL,
	[classid] [int] NULL,
	[userid] [int] NULL,
 CONSTRAINT [PK_gbook] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX  = OFF, STATISTICS_NORECOMPUTE  = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS  = ON, ALLOW_PAGE_LOCKS  = ON) ON [PRIMARY]
) ON [PRIMARY]

GO
ALTER TABLE [dbo].[gbook]  WITH CHECK ADD  CONSTRAINT [FK_gbook_gbook_class] FOREIGN KEY([classid])
REFERENCES [dbo].[gbook_class] ([id])
GO
ALTER TABLE [dbo].[gbook] CHECK CONSTRAINT [FK_gbook_gbook_class]
GO
ALTER TABLE [dbo].[gbook]  WITH CHECK ADD  CONSTRAINT [FK_gbook_Register] FOREIGN KEY([userid])
REFERENCES [dbo].[Register] ([id])
GO
ALTER TABLE [dbo].[gbook] CHECK CONSTRAINT [FK_gbook_Register]