<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Index.aspx.cs" Inherits="_27_1.Views.Blog.Index" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title><%=ViewData["title"]%></title>
</head>
<body>
    <div>
    数据库中的数据为:<br/>
    <%=ViewData["contents"]%>
    </div>
</body>
</html>
