<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_5_8._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <asp:Button ID="Button1" runat="server" Text="Show" onclick="Button1_Click" />
    <br />
    <asp:Panel ID="Panel1" runat="server" Visible="False" GroupingText="I love C#">
        <asp:Label ID="Label1" runat="server" Text="Name:" style="font-size: xx-large"></asp:Label>
        <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        <br />
        This is a Panel!
    </asp:Panel>
    </form>
</body>
</html>
