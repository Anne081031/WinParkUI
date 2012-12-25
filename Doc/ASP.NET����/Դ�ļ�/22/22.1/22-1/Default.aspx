<%@ Page Language="C#" AutoEventWireup="false" CodeBehind="Default.aspx.cs" Inherits="_22_1._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <link href="css.css" rel="stylesheet" type="text/css" />
    <style type="text/css">
        .style4
        {
            color: #FF3300;
        }
        .style5
        {
            color: #FF0000;
        }
        .style6
        {
            width: 102px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div class="top">
    
    </div>
    <div class="register">
        <table class="style1">
            <tr>
                <td class="style6">
                    <asp:Label ID="Label1" runat="server" Text="用户名"></asp:Label>
                </td>
                <td class="style3">
                    <asp:TextBox ID="TextBox1" runat="server" Width="200px"></asp:TextBox>
                </td>
                <td>
                    &nbsp;<span class="style4">*</span>&nbsp;
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                        ControlToValidate="TextBox1" ErrorMessage="用户名不能为空"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="style6">
                    <asp:Label ID="Label2" runat="server" Text="密码"></asp:Label>
                </td>
                <td class="style3">
                    <asp:TextBox ID="TextBox2" runat="server" Width="200px" TextMode="Password"></asp:TextBox>
                </td>
                <td>
                    &nbsp;<span class="style4">*</span>&nbsp;<asp:RequiredFieldValidator 
                        ID="RequiredFieldValidator2" runat="server" ControlToValidate="TextBox2" 
                        ErrorMessage="用户密码不能为空"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="style6">
                    <asp:Label ID="Label3" runat="server" Text="性别"></asp:Label>
                </td>
                <td class="style3">
                    <asp:DropDownList ID="DropDownList1" runat="server">
                        <asp:ListItem Value="2">帅哥</asp:ListItem>
                        <asp:ListItem Value="1">美女</asp:ListItem>
                        <asp:ListItem Value="0">保密</asp:ListItem>
                    </asp:DropDownList>
&nbsp;</td>
                <td>
                    &nbsp;<span class="style5">*</span>&nbsp;<asp:RequiredFieldValidator 
                        ID="RequiredFieldValidator3" runat="server" ControlToValidate="DropDownList1" 
                        ErrorMessage="性别必须选择"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="style6">
                    <asp:Label ID="Label4" runat="server" Text="头像"></asp:Label>
                </td>
                <td class="style3">
                    <asp:TextBox ID="TextBox4" runat="server" Width="200px"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style6">
                    <asp:Label ID="Label5" runat="server" Text="IM"></asp:Label>
                </td>
                <td class="style3">
                    <asp:TextBox ID="TextBox5" runat="server" Width="200px"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style6">
                    <asp:Label ID="Label6" runat="server" Text="个性签名"></asp:Label>
                </td>
                <td class="style3">
                    <asp:TextBox ID="TextBox6" runat="server" Width="200px"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style6">
                    <asp:Label ID="Label7" runat="server" Text="备注"></asp:Label>
                </td>
                <td class="style3">
                    <asp:TextBox ID="TextBox7" runat="server" Width="200px"></asp:TextBox>
                </td>
                <td>
                    &nbsp;&nbsp;<asp:Label ID="Label8" runat="server" 
                        style="color: #FF0000; font-weight: 700"></asp:Label>
                </td>
            </tr>
            <tr>
                <td class="style2" colspan="3">
                    <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="注册" />
                </td>
            </tr>
        </table>
    </div>
    
    <div class="end">版权信息<br />
        本网站不会将用户信息泄露给任何人或机构.</div>
    </form>
</body>
</html>
