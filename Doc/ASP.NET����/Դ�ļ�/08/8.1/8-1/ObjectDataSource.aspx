<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="ObjectDataSource.aspx.cs" Inherits="_8_1.ObjectDataSource" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:ObjectDataSource ID="ObjectDataSource1" runat="server" 
            SelectMethod="GetName" TypeName="ClassLibrary1.Class1">
        </asp:ObjectDataSource>
    
    </div>
    </form>
</body>
</html>
