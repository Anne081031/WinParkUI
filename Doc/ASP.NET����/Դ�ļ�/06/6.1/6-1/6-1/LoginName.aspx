<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="LoginName.aspx.cs" Inherits="_6_1.LoginName" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:LoginName ID="LoginName1" runat="server" FormatString="您好，{0}，您已经登陆！" />
    
    </div>
    </form>
</body>
</html>
