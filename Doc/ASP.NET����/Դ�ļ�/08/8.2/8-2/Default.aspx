<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_8_2._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:Repeater ID="Repeater1" runat="server" DataSourceID="SqlDataSource1" 
            onitemcommand="Repeater1_ItemCommand">
        <ItemTemplate>
        <div style="border-bottom:1px dashed #ccc; padding:5px 5px 5px 5px;">
         <%# Eval("title")%> 
            <asp:Button ID="Button1" runat="server" Text="按钮" CommandArgument='<%# Eval("title")%>'/>
         </div>
        </ItemTemplate>
        </asp:Repeater>
        <br />
        <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:mytableConnectionString %>" 
            SelectCommand="SELECT * FROM [mynews]"></asp:SqlDataSource>
    
    </div>
    </form>
</body>
</html>
