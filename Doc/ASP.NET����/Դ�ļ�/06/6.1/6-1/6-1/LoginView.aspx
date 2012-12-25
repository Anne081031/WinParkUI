<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="LoginView.aspx.cs" Inherits="_6_1.LoginView" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
            <asp:LoginView ID="LoginView1" runat="server">
            <RoleGroups>
                <asp:RoleGroup Roles="admin">
                    <ContentTemplate>
                        这是一个管理员用户可以访问的页面..
                    </ContentTemplate>
                </asp:RoleGroup>
                <asp:RoleGroup Roles="vip">
                    <ContentTemplate>
                        这是一个VIP用户可以访问的页面
                    </ContentTemplate>
                </asp:RoleGroup>
            </RoleGroups>
            <LoggedInTemplate>
                这是一个登陆用户可以访问的页面..
            </LoggedInTemplate>
            <AnonymousTemplate>
                这是一个匿名用户可以访问的页面..
            </AnonymousTemplate>
        </asp:LoginView>
    </div>
    </form>
</body>
</html>
