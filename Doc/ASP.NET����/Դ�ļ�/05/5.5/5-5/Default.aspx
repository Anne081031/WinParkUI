<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_5_5._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
        <br />
        <asp:RadioButton ID="RadioButton1" runat="server" AutoPostBack="True" 
            GroupName="choose" oncheckedchanged="RadioButton1_CheckedChanged" 
            Text="Choose1" />
        <asp:RadioButton ID="RadioButton2" runat="server" AutoPostBack="True" 
            GroupName="choose" oncheckedchanged="RadioButton2_CheckedChanged" 
            Text="Choose2" />
        <br />
        <br />
        <asp:RadioButtonList ID="RadioButtonList1" runat="server" AutoPostBack="True" 
            onselectedindexchanged="RadioButtonList1_SelectedIndexChanged">
            <asp:ListItem>Choose1</asp:ListItem>
            <asp:ListItem>Choose2</asp:ListItem>
            <asp:ListItem>Choose3</asp:ListItem>
        </asp:RadioButtonList>
    
    </div>
    </form>
</body>
</html>
