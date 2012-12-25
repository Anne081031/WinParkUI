<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="LoginStatus.aspx.cs" Inherits="_6_1.LoginStatus" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:LoginStatus ID="LoginStatus1" runat="server" LoginImageUrl="~/login.jpg" 
            LogoutImageUrl="~/logout.jpg" />
    </div>
    </form>
</body>
</html>
