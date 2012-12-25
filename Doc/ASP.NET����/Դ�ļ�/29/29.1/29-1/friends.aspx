<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="friends.aspx.cs" Inherits="_29_1.friends" %>

<%@ Register assembly="DiaryAdmins" namespace="DiaryAdmins" tagprefix="cc1" %>

<%@ Register assembly="AddFriends" namespace="AddFriends" tagprefix="cc2" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <link href="css/css.css" rel="stylesheet" type="text/css" />
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
            <div class="main_board_font">欢迎来到校友录系统..<br />
                <br />
                /*这里可以使用JS进行实现,也可以进行文件读取*/</div>
            <div class="clearfloat"></div>
        </div>
        <div class="main_site">
            <div class="main_left">           
                <asp:ScriptManager ID="ScriptManager1" runat="server">
                </asp:ScriptManager>
                <asp:UpdatePanel ID="UpdatePanel1" runat="server">
                    <ContentTemplate>
                        <asp:GridView ID="GridView1" runat="server" 
    AutoGenerateColumns="False" DataKeyNames="id" DataSourceID="SqlDataSource1" AllowPaging="True" 
                            BorderColor="#F0F0F0" BorderStyle="Solid" BorderWidth="1px" 
                            GridLines="Horizontal" PageSize="30" Width="100%">
                            <Columns>
                                <asp:HyperLinkField DataNavigateUrlFields="id" 
                                    DataNavigateUrlFormatString="Shownew.aspx?id={0}" DataTextField="title" 
                                    DataTextFormatString="{0}" HeaderText="日志标题" />
                                <asp:BoundField DataField="time" HeaderText="最后回复时间" SortExpression="time">
                                    <ItemStyle Width="100px" />
                                </asp:BoundField>
                                <asp:BoundField DataField="author" HeaderText="作者" SortExpression="author">
                                    <ItemStyle Width="100px" />
                                </asp:BoundField>
                            </Columns>
                            <EmptyDataTemplate>
                                暂时还没有任何日志哦,邀请好友来分享日志吧..
                            </EmptyDataTemplate>
                        </asp:GridView>
                        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
                            ConnectionString="<%$ ConnectionStrings:friendsConnectionString %>" 
                            SelectCommand="SELECT * FROM [diary] ORDER BY [time] DESC">
                        </asp:SqlDataSource>
                    </ContentTemplate>
                </asp:UpdatePanel>           
            </div>
            <div class="main_right">           
                <a href="new.aspx">发表新日志</a><cc2:NewFriends ID="NewFriends1" runat="server" />            
                </div>
            <div class="clearfloat"></div>
        </div>
    </div>
    <div class="end">   
    </div>
    </form>
</body>
</html>
