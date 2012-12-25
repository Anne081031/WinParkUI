<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Substitution.aspx.cs" Inherits="_5_17.Substitution" %>
<%@ OutputCache Duration="100" VaryByParam="none" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        当前的时间为：<asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
        (有缓存)<br />
        当前的时间为：<asp:Substitution ID="Substitution1" runat="server"  MethodName="GetTimeNow"/>
    
        (动态更新)</div>
    </form>
</body>
</html>
