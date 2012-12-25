<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Request.aspx.cs" Inherits="_13_1._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <a href="request.aspx?id=1&amp;type=QueryString&amp;action=get">QueryString</a>
        <br />
        获取传递的参数id
        <asp:Label ID="Label1" runat="server" style="font-weight: 700" Text="Label"></asp:Label>
&nbsp; 获取传递的参数QueryString
        <asp:Label ID="Label2" runat="server" style="font-weight: 700" Text="Label"></asp:Label>
        <br />
        <br />
        Path<br />
        <asp:Label ID="Label3" runat="server" Text="Label"></asp:Label>
        <br />
        <br />UserHostAddress
        <br />
        <asp:Label ID="Label4" runat="server" Text="Label"></asp:Label>
        <br />
        <br />
        Browser
        <br />
        <asp:Label ID="Label5" runat="server" Text="Label"></asp:Label>
    </div>
    </form>
</body>
</html>
