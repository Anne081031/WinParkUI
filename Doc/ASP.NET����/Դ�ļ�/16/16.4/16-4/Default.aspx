<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_16_4._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:ScriptManager ID="ScriptManager1" runat="server" 
            AllowCustomErrorsRedirect="False" AsyncPostBackErrorMessage="nothing!" 
            onasyncpostbackerror="ScriptManager1_AsyncPostBackError">
        </asp:ScriptManager>
        <asp:UpdatePanel ID="UpdatePanel1" runat="server">
            <ContentTemplate>
                <asp:Label ID="Label1" runat="server" Text="计算器"></asp:Label>
                &nbsp;
                <br />
                <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
                除以<asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
                等于<asp:TextBox ID="TextBox3" runat="server"></asp:TextBox>
&nbsp;&nbsp;<br />
                <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="计算" />
            </ContentTemplate>
        </asp:UpdatePanel>
    </div>
    </form>
</body>
</html>
