<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="SqlDataSource.aspx.cs" Inherits="_8_1._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:mytableConnectionString %>" 
            InsertCommand="INSERT INTO mynews(ID) VALUES ('control title')" 
            SelectCommand="SELECT [TITLE], [ID] FROM [mynews]"></asp:SqlDataSource>
    
    </div>
    </form>
</body>
</html>
