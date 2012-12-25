<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="AccessDataSource.aspx.cs" Inherits="_8_1.AccessDataSource" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:AccessDataSource ID="AccessDataSource1" runat="server" 
            DataFile="~/acc.mdb" SelectCommand="SELECT [bh], [title] FROM [mytable]"></asp:AccessDataSource>
    </div>
    </form>
</body>
</html>
