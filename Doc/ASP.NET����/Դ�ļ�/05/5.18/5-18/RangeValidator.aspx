<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="RangeValidator.aspx.cs" Inherits="_5_18.RangeValidator" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>   
        请输入生日:<asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        <asp:RangeValidator ID="RangeValidator1" runat="server" 
            ControlToValidate="TextBox1" ErrorMessage="超出规定范围，请重新填写" 
            MaximumValue="2009/1/1" MinimumValue="1990/1/1" Type="Date"></asp:RangeValidator>
        <br />
        <asp:Button ID="Button1" runat="server" Text="Button" />  
    </div>
    </form>
</body>
</html>
