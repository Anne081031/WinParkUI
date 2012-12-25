<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_23_1._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <style type="text/css">
        .style1
        {
            width: 100%;
        }
        .style2
        {
            width: 78px;
        }
        .style3
        {
            width: 150px;
        }
        .style4
        {
            width: 62px;
        }
    </style>
    <link href="css.css" rel="stylesheet" type="text/css" />
</head>
<body>
    <form id="form1" runat="server">
    <div class="top">
        <table class="style1">
            <tr>
                <td class="style4">
                    <img alt="" src="logo.png" style="width: 60px; height: 60px" /></td>
                <td>
                    欢迎登陆网站</td>
            </tr>
        </table>
    </div>
    <div class="login">
    
        <table class="style1">
            <tr>
                <td class="style2">
                    <asp:Label ID="Label1" runat="server" Text="用户名"></asp:Label>
                </td>
                <td class="style3">
                    <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                        ControlToValidate="TextBox1" ErrorMessage="用户名不能为空"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="style2">
                    <asp:Label ID="Label2" runat="server" Text="密码"></asp:Label>
                </td>
                <td class="style3">
                    <asp:TextBox ID="TextBox2" runat="server" TextMode="Password"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                        ControlToValidate="TextBox2" ErrorMessage="密码不能为空"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td colspan="3">
                    <asp:Button ID="Button1" runat="server" Text="登陆" onclick="Button1_Click" />
                &nbsp;<asp:HyperLink ID="HyperLink1" runat="server" NavigateUrl="register.aspx">还没有注册?</asp:HyperLink>
&nbsp;<asp:HyperLink ID="HyperLink2" runat="server" NavigateUrl="~/Mail.aspx">忘记密码?</asp:HyperLink>
&nbsp;<asp:HyperLink ID="HyperLink3" runat="server" Visible="False">你已经被禁止登陆</asp:HyperLink>
                    　<asp:Label ID="Label3" runat="server" style="font-weight: 700; color: #FF0000"></asp:Label>
                </td>
            </tr>
        </table>
    
    </div>
    <div class="end">版权所有 
        <asp:Label ID="Label4" runat="server" Text="0" Visible="False"></asp:Label>
    </div>
    </form>
</body>
</html>
