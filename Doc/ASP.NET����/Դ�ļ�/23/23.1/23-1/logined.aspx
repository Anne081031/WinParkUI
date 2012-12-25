<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="logined.aspx.cs" Inherits="_23_1.logined" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
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
                    感谢您<asp:Label ID="Label1" runat="server"></asp:Label>
                    的登陆</td>
            </tr>
        </table>
    </div>
    <div class="login">
        你好,你已经登陆成功,您的用户头像为<br />
        <br />
        <asp:Image ID="Image1" runat="server" ImageUrl="~/logo.png" />
        <br />
    </div>
    <div class="end">版权所有</div>
    </form>
</body>
</html>
