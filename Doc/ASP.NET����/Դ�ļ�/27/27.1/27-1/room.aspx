<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="room.aspx.cs" Inherits="_27_1.room" %>

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
            width: 536px;
        }
    </style>
    <link href="css.css" rel="stylesheet" type="text/css" />
</head>
<body>
    <form id="form1" runat="server">
    <div class="room">
    
        <asp:ScriptManager ID="ScriptManager1" runat="server">
        </asp:ScriptManager>
        <asp:UpdatePanel ID="UpdatePanel1" runat="server">
            <ContentTemplate>
                <table class="style1">
                    <tr>
                        <td class="banner">
                            群聊窗口 
                            <asp:LinkButton ID="LinkButton1" runat="server" onclick="LinkButton1_Click">另存为</asp:LinkButton>
                        </td>
                        <td valign="top" rowspan="6">
                            <table class="style1">
                                <tr>
                                    <td class="banner">
                                        用户列表</td>
                                </tr>
                                <tr>
                                    <td>
                                        <asp:Label ID="Label1" runat="server"></asp:Label>
                                    </td>
                                </tr>
                            </table>
                        </td>
                    </tr>
                    <tr>
                        <td class="style2">
                            <asp:TextBox ID="TextBox3" runat="server" Height="200px" TextMode="MultiLine" 
                                Width="100%"></asp:TextBox>
                        </td>
                    </tr>
                    <tr>
                        <td class="banner">
                            私聊窗口 
                            <asp:LinkButton ID="LinkButton2" runat="server" onclick="LinkButton2_Click">另存为</asp:LinkButton>
                        </td>
                    </tr>
                    <tr>
                        <td class="style2">
                            <asp:TextBox ID="TextBox1" runat="server" Height="100px" 
                TextMode="MultiLine" Width="100%"></asp:TextBox>
                        </td>
                    </tr>
                    <tr>
                        <td class="style2">
                            <asp:TextBox ID="TextBox4" runat="server" Width="100%"></asp:TextBox>
                        </td>
                    </tr>
                    <tr>
                        <td class="style2">
                            <asp:TextBox ID="TextBox2" runat="server" Height="100px" TextMode="MultiLine" 
                                Width="100%"></asp:TextBox>
                            <br />
                            <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="发送消息" />
                            &nbsp;<asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                                ControlToValidate="TextBox2" ErrorMessage="发言不能为空.."></asp:RequiredFieldValidator>
                            <asp:Timer ID="Timer1" runat="server" Interval="10000" ontick="Timer1_Tick">
                            </asp:Timer>
                        </td>
                    </tr>
                </table>
            </ContentTemplate>
        </asp:UpdatePanel>
    
    </div>
    </form>
</body>
</html>
