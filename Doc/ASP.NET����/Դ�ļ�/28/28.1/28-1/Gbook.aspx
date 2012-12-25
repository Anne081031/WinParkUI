<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Gbook.aspx.cs" Inherits="_28_1.Gbook" %>

<%@ Register src="control/GbookList.ascx" tagname="GbookList" tagprefix="uc1" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>留言本</title>
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
        <div class="left">
            <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" 
                BackColor="White" BorderColor="#CCCCCC" BorderStyle="None" BorderWidth="1px" 
                CellPadding="4" DataKeyNames="id" DataSourceID="SqlDataSource1" 
                ForeColor="Black" GridLines="Horizontal" ShowHeader="False" Width="100%">
                <FooterStyle BackColor="#CCCC99" ForeColor="Black" />
                <Columns>
                    <asp:HyperLinkField DataNavigateUrlFields="id" 
                        DataNavigateUrlFormatString="Gbook.aspx?cid={0}" DataTextField="classname" 
                        DataTextFormatString="{0}" />
                </Columns>
                <PagerStyle BackColor="White" ForeColor="Black" HorizontalAlign="Right" />
                <SelectedRowStyle BackColor="#CC3333" Font-Bold="True" ForeColor="White" />
                <HeaderStyle BackColor="#333333" Font-Bold="True" ForeColor="White" />
            </asp:GridView>
            <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
                ConnectionString="<%$ ConnectionStrings:guestbookConnectionString %>" 
                SelectCommand="SELECT top 10 * FROM [gbook_class] ORDER BY [id] DESC">
            </asp:SqlDataSource>
        </div>
        <div class="right">
            <uc1:GbookList ID="GbookList1" runat="server" />
            <br />
            <asp:Panel ID="Panel1" runat="server">
                给我们留言:<br />
                主题:<asp:TextBox ID="TextBox2" runat="server" Width="411px"></asp:TextBox>
                <br />
                内容:<br />
                <asp:TextBox ID="TextBox1" runat="server" Height="150px" TextMode="MultiLine" 
                    Width="99%"></asp:TextBox>
                <br />
                <asp:Button ID="Button1" runat="server" Text="留言" onclick="Button1_Click" />
            </asp:Panel>
        </div>
    </div>
    <div class="copyright">copyright ASP.NET 3.5开发大全 2008@</div>
    </form>
</body>
</html>
