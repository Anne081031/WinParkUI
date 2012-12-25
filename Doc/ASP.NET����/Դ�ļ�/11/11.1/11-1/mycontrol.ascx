<%@ Control Language="C#" AutoEventWireup="true" CodeBehind="mycontrol.ascx.cs" Inherits="_11_1.mycontrol" %>
<div style="border:1px solid #ccc; width:300px; background:#f0f0f0; padding:5px 5px 5px 5px; font-size:12px;">
    用户登陆<br />
    <br />
    用户名 :
    <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
    <br />
    <br />
    密码:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
    <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
    <br />
    <br />
    <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="登陆" />
&nbsp;<asp:HyperLink ID="HyperLink1" runat="server">还没有注册?</asp:HyperLink>
&nbsp;<asp:Label ID="Label1" runat="server"></asp:Label>
</div>