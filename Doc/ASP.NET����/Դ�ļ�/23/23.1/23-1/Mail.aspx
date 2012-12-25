<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Mail.aspx.cs" Inherits="_23_1.SendMail" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head id="Head1" runat="server">
    <title>无标题页</title>
    <style type="text/css">
        .style1
        {
            width: 100%;
        }
        .style2
        {
        }
        .style3
        {
        }
        .style4
        {
            width: 62px;
        }
        .style5
        {
            width: 113px;
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
                    <img src="mail.png" style="width: 60px; height: 60px" /></td>
                <td>
                    忘记密码? 请填写您的用户名</td>
            </tr>
        </table>
    </div>
    <div class="login">
    
        <table class="style1">
            <tr>
                <td class="style2" colspan="3">
                    在填写了用户名之后，密码将会发送到指定邮箱！<asp:Label ID="Label2" runat="server" 
                        style="font-weight: 700; color: #FF0000"></asp:Label>
                </td>
            </tr>
            <tr>
                <td class="style5">
                    <asp:Label ID="Label1" runat="server" Text="用户名"></asp:Label>
                </td>
                <td class="style3">
                    <asp:TextBox ID="TextBox1" runat="server" AutoPostBack="True" 
                        ontextchanged="TextBox1_TextChanged"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                        ControlToValidate="TextBox1" ErrorMessage="用户名不能为空"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="style5">
                    <asp:Label ID="Label3" runat="server" Text="用户提示问题"></asp:Label>
                </td>
                <td class="style3" colspan="2">
                    <asp:Label ID="Label5" runat="server" Text="用户提示问题"></asp:Label>
                </td>
            </tr>
            <tr>
                <td class="style5">
                    <asp:Label ID="Label4" runat="server" Text="用户问题答案"></asp:Label>
                </td>
                <td class="style3">
                    <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                        ControlToValidate="TextBox2" ErrorMessage="问题答案不能为空"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td colspan="3">
                    <asp:Button ID="Button1" runat="server" Text="忘记密码" onclick="Button1_Click" />
                &nbsp;<asp:HyperLink ID="HyperLink1" runat="server" NavigateUrl="register.aspx">还没有注册?</asp:HyperLink>
&nbsp;<asp:HyperLink ID="HyperLink2" runat="server" NavigateUrl="forget.aspx">忘记密码?</asp:HyperLink>
&nbsp;<asp:HyperLink ID="HyperLink3" runat="server" Visible="False">你已经被禁止登陆</asp:HyperLink>
                </td>
            </tr>
        </table>
    
    </div>
    <div class="end">版权所有</div>
    </form>
</body>
</html>
