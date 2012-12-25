<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_11_5._Default" %>
<%@ Register TagPrefix="MyControl" Namespace="MyPager" Assembly="MyPager" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>   

        <MyControl:MyPager ID="MyPager1" runat="server" DataBase="mytable" 
            IndexPage="1" PageName="default.aspx" PageSize="1" Pwd="Bbg0123456#" 
            Table="mynews" Uid="sa" />

    </div>
    </form>
</body>
</html>
