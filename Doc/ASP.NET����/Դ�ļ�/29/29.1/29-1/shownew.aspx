<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="shownew.aspx.cs" Inherits="_29_1._shownew" %>

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
                                <td>
                                    <asp:DataList ID="DataList1" runat="server" DataKeyField="id" 
                                        DataSourceID="SqlDataSource1" Width="100%">
                                        <ItemTemplate>
                                            <asp:Label ID="titleLabel" runat="server" 
                                                style="font-size: large; font-weight: 700" Text='<%# Eval("title") %>' />
                                            <br />
                                            <br />
                                            <asp:Label ID="authorLabel" runat="server" Text='<%# Eval("author") %>' />
                                            发布于<asp:Label ID="timeLabel" runat="server" Text='<%# Eval("time") %>' />
                                            <br />
                                            <br />
                                            <asp:Label ID="contentLabel" runat="server" style="font-size: medium" 
                                                Text='<%# Eval("content") %>' />
                                            <br />
                                            <br />
                                            评分:
                                            <asp:Label ID="marksLabel" runat="server" Text='<%# Eval("marks") %>' />
                                            <br />
                                            阅读次数:
                                            <asp:Label ID="hitsLabel" runat="server" Text='<%# Eval("hits") %>' />
                                            <br />
                                            <a href="modi.aspx?id=<%# Eval("id") %>">修改</a> <a href="delete.aspx?id=<%# Eval("id") %>">删除</a><br />
                                        </ItemTemplate>
                                    </asp:DataList>
                                    <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
                                        ConnectionString="<%$ ConnectionStrings:friendsConnectionString %>" 
                                        SelectCommand="SELECT TOP 1 * FROM [diary] WHERE ([id] = @id)">
                                        <SelectParameters>
                                            <asp:QueryStringParameter Name="id" QueryStringField="id" Type="Int32" />
                                        </SelectParameters>
                                    </asp:SqlDataSource>
                                </td>
                            </tr>
                            <tr>
                                <td>
                                    <asp:DataList ID="DataList2" runat="server" CellPadding="4" DataKeyField="id" 
                                        DataSourceID="SqlDataSource2" ForeColor="#333333" Width="100%">
                                        <FooterStyle BackColor="#1C5E55" Font-Bold="True" ForeColor="White" />
                                        <AlternatingItemStyle BackColor="White" />
                                        <ItemStyle BackColor="#E3EAEB" />
                                        <SelectedItemStyle BackColor="#C5BBAF" Font-Bold="True" ForeColor="#333333" />
                                        <HeaderStyle BackColor="#1C5E55" Font-Bold="True" ForeColor="White" />
                                        <ItemTemplate>
                                            <a href="userindex.aspx?uid=<%# Eval("userid") %>"><%# Eval("username") %></a> <asp:Label ID="titleLabel" runat="server" Text='<%# Eval("title") %>' />
                                            <asp:Label ID="timeLabel" runat="server" Text='<%# Eval("time") %>' />
                                            <br />
                                            &nbsp;<asp:Label ID="Label1" runat="server" Text='<%# Eval("content") %>'></asp:Label>
                                            <br />
                                            <br />
                                        </ItemTemplate>
                                    </asp:DataList>
                                    <asp:SqlDataSource ID="SqlDataSource2" runat="server" 
                                        ConnectionString="<%$ ConnectionStrings:friendsConnectionString %>" 
                                        SelectCommand="SELECT * FROM [diarygbook],[register] WHERE (diarygbook.diaryid = @diaryid) and diarygbook.userid = register.id order by register.id desc">
                                        <SelectParameters>
                                            <asp:QueryStringParameter Name="diaryid" QueryStringField="id" Type="Int32" />
                                        </SelectParameters>
                                    </asp:SqlDataSource>
                                </td>
                            </tr>
                            <tr>
                                <td>
                                    标题:<asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
                                    &nbsp;<asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                                        ControlToValidate="TextBox1" ErrorMessage="标题不能为空"></asp:RequiredFieldValidator>
                                    <br />
                                    内容:<asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                                        ControlToValidate="TextBox2" ErrorMessage="内容不能为空"></asp:RequiredFieldValidator>
                                    <br />
                                    <asp:TextBox ID="TextBox2" runat="server" Height="100px" TextMode="MultiLine" 
                                        Width="100%"></asp:TextBox>
                                    <br />
                                    <br />
                                    <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="评论留言" />
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
