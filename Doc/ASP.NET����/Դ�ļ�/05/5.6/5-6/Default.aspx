<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_5_6._Default" %>

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
    
        <asp:CheckBox ID="CheckBox1" runat="server" Text="Check1" AutoPostBack="true" 
            oncheckedchanged="CheckBox1_CheckedChanged" />
&nbsp;<asp:CheckBox ID="CheckBox2" runat="server" Text="Check2"  AutoPostBack="true" 
            oncheckedchanged="CheckBox2_CheckedChanged"/>
    
        <br />
        <asp:CheckBoxList ID="CheckBoxList1" runat="server" AutoPostBack="True" 
            onselectedindexchanged="CheckBoxList1_SelectedIndexChanged">
            <asp:ListItem>Choose1</asp:ListItem>
            <asp:ListItem Value="Choose2">Choose2</asp:ListItem>
            <asp:ListItem Value="Choose3">Choose3</asp:ListItem>
        </asp:CheckBoxList>
    
    </div>
    </form>
</body>
</html>
