<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_5_13._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:MultiView ID="MultiView1" runat="server" ActiveViewIndex="0">
            <asp:View ID="View1" runat="server">
                这是第一个标签<br />
                <asp:Button ID="Button1" runat="server" CommandArgument="View2" 
                    CommandName="SwitchViewByID" Text="下一个" />
            </asp:View>
            <asp:View ID="View2" runat="server">
                这是第二个标签<br />
                <asp:Button ID="Button2" runat="server" CommandArgument="View1" 
                    CommandName="SwitchViewByID" Text="上一个" />
            </asp:View>
        </asp:MultiView>
    
    </div>
    </form>
</body>
</html>
