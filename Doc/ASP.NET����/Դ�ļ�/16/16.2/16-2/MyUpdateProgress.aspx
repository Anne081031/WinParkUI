<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="MyUpdateProgress.aspx.cs" Inherits="_16_2.MyUpdateProgress" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:ScriptManager ID="ScriptManager1" runat="server">
        </asp:ScriptManager>
        <asp:UpdatePanel ID="UpdatePanel1" runat="server">
            <ContentTemplate>
                <asp:UpdateProgress ID="UpdateProgress1" runat="server">
                    <ProgressTemplate>
                        正在操作中，请稍后 ...<br />
                    </ProgressTemplate>                   
                </asp:UpdateProgress>
                <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
                &nbsp;<asp:Button ID="Button1" runat="server" Text="Button" 
                    onclick="Button1_Click" />
            </ContentTemplate>     
        </asp:UpdatePanel>
    </div>
    <p>
        
    </p>
    </form>
</body>
</html>
