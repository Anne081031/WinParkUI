<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="SQLCon.aspx.cs" Inherits="_21_6.SQLCon" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="插入数据" />
&nbsp;<asp:Button ID="Button2" runat="server" onclick="Button2_Click" Text="更新数据" />
&nbsp;<asp:Button ID="Button3" runat="server" Text="删除数据" onclick="Button3_Click" />
    
    </div>
    </form>
</body>
</html>
