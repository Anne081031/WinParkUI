<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="UserIndex.aspx.cs" Inherits="_28_1.UserIndex" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <link href="css/css.css" rel="stylesheet" type="text/css" />
</head>
<body style="background:white url(images/bg.png) repeat-x;">
    <form id="form1" runat="server">
    <div class="gbook_main_title"></div>
    <div class="gbook_banner">
        <img alt="" src="images/groups.png" style="width: 16px; height: 16px" /> 登陆 
        <img alt="" src="images/gift.png" style="width: 16px; height: 16px" /> 注册 
        <img alt="" src="images/list.png" style="width: 16px; height: 16px" /> 管理员登陆</div>
    <div class="gbook_main">

<p>
    <asp:DataList ID="DataList1" runat="server" DataKeyField="id" 
        DataSourceID="SqlDataSource1" Width="100%">
        <ItemTemplate>
        <table class="g_table">
            <tr>
                <td><div class="g_title">
                    你于<asp:Label ID="timeLabel" runat="server" Text='<%# Eval("time") %>' />
                    进行留言:&nbsp;</div></td>
            </tr>
            <tr>
                <td><div class="g_content">
                    <asp:Label ID="contentLabel" runat="server" Text='<%# Eval("content") %>' />
                </td>
            </tr>
            <tr>
                <td>
                <div class="g_reply">
                    <asp:Label ID="repcontentLabel" runat="server" 
                        Text='<%# Eval("repcontent") %>' 
                        style="font-size: xx-small; color: #FF0000" />
                        </div>
                </td>
            </tr>
        </table>
        </ItemTemplate>
    </asp:DataList>
    <br />
    <asp:Label ID="Label4" runat="server" Text="Label"></asp:Label>
    &nbsp;<asp:Label ID="Label3" runat="server" Text="Label"></asp:Label>
    &nbsp;<asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
    &nbsp;</p>
<asp:SqlDataSource ID="SqlDataSource1" runat="server" 
    ConnectionString="<%$ ConnectionStrings:guestbookConnectionString %>" 
    
            SelectCommand="SELECT gbook.* FROM gbook,register WHERE (gbook.userid = @userid) AND (register.id=gbook.userid) ORDER BY gbook.id DESC">
    <SelectParameters>
        <asp:QueryStringParameter Name="userid" QueryStringField="uid" />
    </SelectParameters>
</asp:SqlDataSource>
    </div>
    <div class="copyright">copyright ASP.NET 3.5开发大全 2008@</div>
    </form>
</body>
</html>
