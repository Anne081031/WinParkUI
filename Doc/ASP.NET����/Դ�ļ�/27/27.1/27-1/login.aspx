<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="login.aspx.cs" Inherits="_27_1._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <link href="css.css" rel="stylesheet" type="text/css" />
</head>
<body>
    <form id="form1" runat="server">
        <div class="all">
        <div class="top">
    
            欢迎来到聊天室<asp:ScriptManager ID="ScriptManager1" runat="server">
            </asp:ScriptManager>
            </div>
        <div class="center">
    
            还没有登陆?想要进行聊天?使用一个昵称就能够进行聊天<asp:UpdatePanel ID="UpdatePanel1" runat="server">
                <ContentTemplate>
                    昵称:<asp:TextBox ID="TextBox1" runat="server" 
                        ontextchanged="TextBox1_TextChanged"></asp:TextBox>
                    &nbsp;<asp:Button ID="Button1" runat="server" onclick="Button1_Click" 
                        Text="选择聊天室" />
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                        ControlToValidate="TextBox1" ErrorMessage="昵称不能为空"></asp:RequiredFieldValidator>
                    &nbsp;<br />
                    <asp:RadioButtonList ID="RadioButtonList1" runat="server" Visible="False">
                        <asp:ListItem Value="0">谈天说地</asp:ListItem>
                        <asp:ListItem Value="1">大学校园</asp:ListItem>
                        <asp:ListItem Value="2">恐怖灵异</asp:ListItem>
                        <asp:ListItem Value="3">莘莘学子</asp:ListItem>
                    </asp:RadioButtonList>
                    <br />
                    <asp:Button ID="Button2" runat="server" onclick="Button2_Click" Text="进入聊天室" 
                        Visible="False" />
                    &nbsp;<asp:Label ID="Label1" runat="server" style="color: #FF3300"></asp:Label>
                </ContentTemplate>
            </asp:UpdatePanel>
    
        </div>
        <div class="end">
            Copyright ASP.NET 3.5开发大全
        </div>
    </div>
    </form>
</body>
</html>
