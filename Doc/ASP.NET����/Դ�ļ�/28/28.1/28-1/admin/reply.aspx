<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="reply.aspx.cs" Inherits="_28_1.admin.reply" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <link href="../css/css.css" rel="stylesheet" type="text/css" />
</head>
<body style="background:white url(../images/bg.png) repeat-x;">
    <form id="form1" runat="server">
    <div class="gbook_main">   
        回复留言:<br />
        <asp:TextBox ID="TextBox1" runat="server" Height="150px" TextMode="MultiLine" 
            Width="100%"></asp:TextBox>
        <br />
        <asp:Button ID="Button1" runat="server" Text="回复留言" onclick="Button1_Click" />    
    </div>
    </form>
</body>
</html>
