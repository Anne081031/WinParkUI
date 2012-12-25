<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title>无标题 3</title>
        <link href="../css.css" rel="stylesheet" type="text/css" />
</head>

<body>
    <form id="form1" runat="server">
    <asp:TreeView ID="TreeView1" runat="server">
        <Nodes>
            <asp:TreeNode Text="投票管理" Value="投票管理" NavigateUrl="~/admin/manage.aspx" Target="main">
                <asp:TreeNode Text="添加投票" Value="添加投票" NavigateUrl="~/admin/post.aspx" Target="main"></asp:TreeNode>
            </asp:TreeNode>
            <asp:TreeNode Text="退出管理" Value="退出管理" Target="main"></asp:TreeNode>
        </Nodes>
    </asp:TreeView>
    </form>
</body>

</html>
