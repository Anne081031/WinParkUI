<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_28_1._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>选择留言本</title>
    <link href="css/css.css" rel="stylesheet" type="text/css" />
</head>
<body style="background:white url(images/bg.png) repeat-x;">
    <form id="form1" runat="server">
    <div class="gbook_main">
    
        选择留言本:<br />
        <asp:DropDownList ID="DropDownList1" runat="server" 
            DataSourceID="SqlDataSource1" DataTextField="classname" DataValueField="id">
        </asp:DropDownList>
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="Go!" />
        <br />
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:guestbookConnectionString %>" 
            SelectCommand="SELECT * FROM [gbook_class]"></asp:SqlDataSource>
    
    </div>
    </form>
</body>
</html>
