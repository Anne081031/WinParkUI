<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="RegularExpressionValidator.aspx.cs" Inherits="_5_18.RegularExpressionValidator" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>   
        <asp:Label ID="Label1" runat="server" Text="请输入身份证号:"></asp:Label>
        <asp:TextBox ID="TextBox1" runat="server" Width="386px"></asp:TextBox>
        <br />
        <asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" 
            ControlToValidate="TextBox1" ErrorMessage="正则不匹配,请重新输入!" 
            ValidationExpression="\d{17}[\d|X]|\d{15}"></asp:RegularExpressionValidator>
        <br />
        <asp:Button ID="Button1" runat="server" Text="Button" />    
    </div>
    </form>
</body>
</html>
