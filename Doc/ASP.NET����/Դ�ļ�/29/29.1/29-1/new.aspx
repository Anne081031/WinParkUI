<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="new.aspx.cs" Inherits="_29_1._new" %>

<%@ Register assembly="FredCK.FCKeditorV2" namespace="FredCK.FCKeditorV2" tagprefix="FCKeditorV2" %>
<%@ Register assembly="DiaryAdmins" namespace="DiaryAdmins" tagprefix="cc1" %>
<%@ Register assembly="AddFriends" namespace="AddFriends" tagprefix="cc2" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <link href="css/css.css" rel="stylesheet" type="text/css" />
    <style type="text/css">
        .style1
        {
            width: 100%;
        }
        .style2
        {
            width: 104px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div class="top">
        <img src="images/logo.png" />
    </div>
    <div class="banner">   
    </div>
    <div class="center">
        <div class="main_board">
            <div class="main_board_admin">
                <cc1:Myadmins ID="Myadmins1" runat="server" />
            </div>
            <div class="main_board_font"></div>
            <div class="clearfloat"></div>
        </div>
        <div class="main_site">
            <div class="main_left">           
                <asp:ScriptManager ID="ScriptManager1" runat="server">
                </asp:ScriptManager>
                <asp:UpdatePanel ID="UpdatePanel1" runat="server">
                    <ContentTemplate>
                        <table class="style1">
                            <tr>
                                <td class="style2">
                                    日志标题:</td>
                                <td>
                                    <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
                                    &nbsp;<asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                                        ControlToValidate="TextBox1" ErrorMessage="日志标题不能为空"></asp:RequiredFieldValidator>
                                </td>
                            </tr>
                            <tr>
                                <td class="style2">
                                    基本信息:</td>
                                <td>
                                    作者:<asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
                                    &nbsp;发布时间:<asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
                                    &nbsp;选择日志分类:<asp:DropDownList ID="DropDownList1" runat="server" 
                                        DataSourceID="SqlDataSource1" DataTextField="classname" DataValueField="id">
                                    </asp:DropDownList>
                                </td>
                            </tr>
                            <tr>
                                <td colspan="2">
                                    <FCKeditorV2:FCKeditor ID="FCKeditor1" runat="server" Height="300px">
                                    </FCKeditorV2:FCKeditor>
                                </td>
                            </tr>
                            <tr>
                                <td class="style2">
                                    <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="发布日志" />
                                </td>
                                <td>
                                    <asp:Label ID="Label3" runat="server" style="color: #FF0000"></asp:Label>
                                    <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
                                        ConnectionString="<%$ ConnectionStrings:friendsConnectionString %>" 
                                        SelectCommand="SELECT * FROM [diaryclass]"></asp:SqlDataSource>
                                </td>
                            </tr>
                        </table>
                    </ContentTemplate>
                </asp:UpdatePanel>           
            </div>
            <div class="main_right">           
                <cc2:NewFriends ID="NewFriends1" runat="server" />
            </div>
        </div>
        <div class="clearfloat"></div>
    </div>
    <div class="end">   
    </div>
    </form>
</body>
</html>
