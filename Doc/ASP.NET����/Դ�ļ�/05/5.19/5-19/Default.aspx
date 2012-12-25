<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_5_19._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:Menu ID="Menu1" runat="server">
            <Items>
                <asp:MenuItem Text="新建项" Value="新建项"></asp:MenuItem>
                <asp:MenuItem Text="新建项" Value="新建项">
                    <asp:MenuItem Text="新建项" Value="新建项"></asp:MenuItem>
                </asp:MenuItem>
                <asp:MenuItem Text="新建项" Value="新建项">
                    <asp:MenuItem Text="新建项" Value="新建项"></asp:MenuItem>
                </asp:MenuItem>
                <asp:MenuItem Text="新建项" Value="新建项">
                    <asp:MenuItem Text="新建项" Value="新建项">
                        <asp:MenuItem Text="新建项" Value="新建项"></asp:MenuItem>
                    </asp:MenuItem>
                </asp:MenuItem>
                <asp:MenuItem Text="新建项" Value="新建项"></asp:MenuItem>
            </Items>
        </asp:Menu>
        <br />
        <asp:TreeView ID="TreeView1" runat="server">
            <Nodes>
                <asp:TreeNode Text="新建节点" Value="新建节点"></asp:TreeNode>
                <asp:TreeNode Text="新建节点" Value="新建节点">
                    <asp:TreeNode Text="新建节点" Value="新建节点"></asp:TreeNode>
                </asp:TreeNode>
                <asp:TreeNode Text="新建节点" Value="新建节点">
                    <asp:TreeNode Text="新建节点" Value="新建节点"></asp:TreeNode>
                </asp:TreeNode>
                <asp:TreeNode Text="新建节点" Value="新建节点">
                    <asp:TreeNode Text="新建节点" Value="新建节点"></asp:TreeNode>
                </asp:TreeNode>
                <asp:TreeNode Text="新建节点" Value="新建节点"></asp:TreeNode>
            </Nodes>
        </asp:TreeView>
    
    </div>
    </form>
</body>
</html>
