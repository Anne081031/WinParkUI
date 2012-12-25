<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_5_14._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body style="font-style: italic">
    <form id="form1" runat="server">
    <div>
    
        <asp:Table ID="Table1" runat="server" Height="121px" Width="177px" 
            BackColor="Silver">
        <asp:TableRow>
         <asp:TableCell>1.1</asp:TableCell>
         <asp:TableCell>1.2</asp:TableCell>
         <asp:TableCell>1.3</asp:TableCell>
         <asp:TableCell BackColor="White">1.4</asp:TableCell>
        </asp:TableRow>
        <asp:TableRow>
         <asp:TableCell>2.1</asp:TableCell>
         <asp:TableCell BackColor="White">2.2</asp:TableCell>
         <asp:TableCell>2.3</asp:TableCell>
         <asp:TableCell>2.4</asp:TableCell>
        </asp:TableRow>
        </asp:Table>
    
        <br />
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="增加一行" />
&nbsp;</div>
    </form>
</body>
</html>
