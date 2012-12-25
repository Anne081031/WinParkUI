<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_16_2._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:ScriptManager ID="ScriptManager1" runat="server" 
            onasyncpostbackerror="ScriptManager1_AsyncPostBackError">
        </asp:ScriptManager>
        <asp:UpdatePanel ID="UpdatePanel1" runat="server">
            <ContentTemplate>
                <asp:Label ID="Label1" runat="server" Text="这是一串字符" Font-Size="12px"></asp:Label>
                &nbsp;<br />
                <br />
                <asp:TextBox ID="TextBox1" runat="server" AutoPostBack="True" 
                    ontextchanged="TextBox1_TextChanged"></asp:TextBox>
                &nbsp;字符的大小(px)
                <br />
                <br />
                <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="发生错误" />
            </ContentTemplate>
        </asp:UpdatePanel>   
    </div>
    </form>
</body>
</html>
