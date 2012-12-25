<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Lieral.aspx.cs" Inherits="_5_17.Lieral" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        这是Literal:
        <asp:Literal ID="Literal1" runat="server"></asp:Literal>
        <hr />
这是Label:
        <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
                <br />
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="Click" />
    
    </div>
    </form>
</body>
</html>
