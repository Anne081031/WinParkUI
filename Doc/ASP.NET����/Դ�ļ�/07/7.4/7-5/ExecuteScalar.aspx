<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="ExecuteScalar.aspx.cs" Inherits="_7_5.ExecuteScalar" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    ExecuteScalar方法使用示例:
    
        <br />
        <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
        <br />
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="获取总数" />
        <br />
        <br />
        你刚刚插入的信息的ID为:<asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
        <br />
        <asp:Button ID="Button2" runat="server" onclick="Button2_Click" Text="获取ID" />
    
    </div>
    </form>
</body>
</html>
