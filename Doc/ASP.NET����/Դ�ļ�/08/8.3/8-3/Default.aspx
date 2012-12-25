<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_8_3._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:DataList ID="DataList1" runat="server" BackColor="White" 
            BorderColor="#E7E7FF" BorderStyle="None" BorderWidth="1px" CellPadding="3" 
            DataKeyField="ID" DataSourceID="SqlDataSource1" Font-Bold="False" 
            Font-Italic="False" Font-Overline="False" Font-Strikeout="False" 
            Font-Underline="False" GridLines="Horizontal" Width="100%" 
            ondeletecommand="DataList1_DeleteCommand">
            <FooterStyle BackColor="#B5C7DE" ForeColor="#4A3C8C" />
            <AlternatingItemStyle BackColor="#F7F7F7" />
            <ItemStyle BackColor="#E7E7FF" ForeColor="#4A3C8C" />
            <SelectedItemStyle BackColor="#738A9C" Font-Bold="True" ForeColor="#F7F7F7" />
            <HeaderStyle BackColor="#4A3C8C" Font-Bold="True" ForeColor="#F7F7F7" />
            <ItemTemplate>
                新闻ID:
                <asp:Label ID="IDLabel" runat="server" Text='<%# Eval("ID") %>' />
                <br />
                新闻编号:
                <asp:Label ID="TITLELabel" runat="server" Text='<%# Eval("TITLE") %>' />
                <br />
                <asp:Button ID="Button1" runat="server" Text="删除" CommandName="delete" CommandArgument='<%# Eval("ID") %>'/>
            </ItemTemplate>
        </asp:DataList>
        <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:mytableConnectionString %>" 
            SelectCommand="SELECT * FROM [mynews]"></asp:SqlDataSource>
    
    </div>
    </form>
</body>
</html>
