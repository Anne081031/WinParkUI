<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="HiddenField.aspx.cs" Inherits="_5_17.HiddenField" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:HiddenField ID="HiddenField1" runat="server" Value="我是HiddenFiled控件!" 
            EnableViewState="False" onvaluechanged="HiddenField1_ValueChanged" 
             />
    
        <br />
        <asp:Label ID="Label1" runat="server" Text="单击按钮获取HiddenFiled的值"></asp:Label>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" Text="Change" onclick="Button1_Click" />
    
        <br />
    
    </div>
    </form>
</body>
</html>
