<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="ExecuteReader.aspx.cs" Inherits="_9_1._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" 
            Text="获取title列的ID" />
&nbsp;<asp:Button ID="Button2" runat="server" onclick="Button2_Click" Text="插入数据并显式" />
    
    </div>
    </form>
</body>
</html>
