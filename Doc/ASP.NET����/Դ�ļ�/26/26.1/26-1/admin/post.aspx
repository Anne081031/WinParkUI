<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="post.aspx.cs" Inherits="_26_1.admin.post" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <link href="../css.css" rel="stylesheet" type="text/css" />
    <style type="text/css">
        .style1
        {
            width: 100%;
        }
        .style2
        {
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        发布投票:<br />
        <table class="style1">
            <tr>
                <td class="style2">
                    投票标题:</td>
                <td>
                    <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
&nbsp;<asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                        ControlToValidate="TextBox1" ErrorMessage="投票标题不能为空"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="style2">
                    投票简介:</td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                        ControlToValidate="TextBox2" ErrorMessage="投票简介不能为空"></asp:RequiredFieldValidator>
                    <br />
                    <asp:TextBox ID="TextBox2" runat="server" Height="76px" TextMode="MultiLine" 
                        Width="260px"></asp:TextBox>
                </td>
            </tr>
            <tr>
                <td class="style2">
                    投票选项:</td>
                <td>
                    //如果有多个选项请回车区分,一行就是一个选项</td>
            </tr>
            <tr>
                <td class="style2" colspan="2">
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" 
                        ControlToValidate="TextBox3" ErrorMessage="投票选项不能为空"></asp:RequiredFieldValidator>
                    <br />
                    <asp:TextBox ID="TextBox3" runat="server" Height="161px" TextMode="MultiLine" 
                        Width="491px"></asp:TextBox>
                    <br />
                    <br />
                    <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="发布投票" />
                </td>
            </tr>
        </table>
    
    </div>
    </form>
</body>
</html>
