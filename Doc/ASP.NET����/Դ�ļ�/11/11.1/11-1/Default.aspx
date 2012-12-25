<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_11_1._Default" %>

<%@ Register TagPrefix="Sample" TagName="Login" Src="~/mycontrol.ascx" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>用户控件</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    <Sample:Login runat="server" id="Login1"></Sample:Login>
    
    </div>
    </form>
    <p>
        使用了用户控件</p>
</body>
</html>
