<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="CompareValidator.aspx.cs" Inherits="_5_18.CompareValidator" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>   
        请输入生日:
        <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        <br />
        毕业日期:
        <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
&nbsp;<asp:CompareValidator ID="CompareValidator1" runat="server" 
            ControlToCompare="TextBox2" ControlToValidate="TextBox1" 
            CultureInvariantValues="True" ErrorMessage="输入格式错误！请改正！" Operator="GreaterThan" 
            Type="Date"></asp:CompareValidator>
        <br />
        <asp:Button ID="Button1" runat="server" Text="Button" />
        <br />    
    </div>
    </form>
</body>
</html>
