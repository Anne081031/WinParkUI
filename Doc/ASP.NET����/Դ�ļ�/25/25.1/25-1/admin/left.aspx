<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="left.aspx.cs" Inherits="_25_1.admin.left" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <link href="../css.css" rel="stylesheet" type="text/css" />
</head>
<body>

<form id="form1" runat="server">
	<asp:TreeView id="TreeView1" runat="server">
		<Nodes>
			<asp:treenode Text="新闻管理" Value="新闻管理" NavigateUrl="~/admin/manage.aspx" 
                Target="main">
				<asp:treenode Text="添加新闻" Value="添加新闻" NavigateUrl="~/admin/news_add.aspx" 
                    Target="main">
				</asp:treenode>
				<asp:treenode Text="添加分类" Value="添加分类" NavigateUrl="~/admin/classmanage.aspx" 
                    Target="main">
				</asp:treenode>
			</asp:treenode>
			<asp:treenode Text="退出管理" Value="退出管理">
			</asp:treenode>
		</Nodes>
	</asp:TreeView>
</form>

</body>

</html>
