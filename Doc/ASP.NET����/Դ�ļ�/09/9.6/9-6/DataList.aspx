<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="DataList.aspx.cs" Inherits="_9_6.DataList" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:DataList ID="DataList1" runat="server" BackColor="White" 
            BorderColor="#999999" BorderStyle="None" BorderWidth="1px" CellPadding="3" 
            DataKeyField="ID" DataSourceID="SqlDataSource1" GridLines="Vertical" 
            Width="100%">
            <FooterStyle BackColor="#CCCCCC" ForeColor="Black" />
            <AlternatingItemStyle BackColor="#DCDCDC" />
            <ItemStyle BackColor="#EEEEEE" ForeColor="Black" />
            <SelectedItemStyle BackColor="#008A8C" Font-Bold="True" ForeColor="White" />
            <HeaderStyle BackColor="#000084" Font-Bold="True" ForeColor="White" />
            <ItemTemplate>
                <asp:Image ID="Image1" runat="server" 
                    ImageUrl="http://www.shangducms.com/style/userpic/user_115.jpg" />
                UID:
                <asp:Label ID="IDLabel" runat="server" Text='<%# Eval("ID") %>' />
                刚刚对<asp:Label ID="TITLELabel" runat="server" Text='<%# Eval("TITLE") %>' />
                发表了言论..<br />
                <br />
            </ItemTemplate>
        </asp:DataList>
    </div>
    <asp:Label ID="Label4" runat="server" Text="Label"></asp:Label>
    &nbsp;<asp:Label ID="Label3" runat="server" Text="Label"></asp:Label>
    &nbsp;<asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
    &nbsp;<asp:SqlDataSource ID="SqlDataSource1" runat="server" 
        ConnectionString="<%$ ConnectionStrings:mytableConnectionString %>" 
        SelectCommand="SELECT * FROM [mynews]"></asp:SqlDataSource>
    </form>
</body>
</html>
