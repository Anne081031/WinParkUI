<%@ Control Language="C#" AutoEventWireup="true" CodeBehind="LoginForm.ascx.cs" Inherits="_11_4.LoginForm" %>
<style type="text/css">
    .style1
    {
        width: 100%;
         font-size:12px;
    }
</style>
<div style="border:1px solid #ccc; background:#f0f0f0; font-size:12px;">

    <table class="style1">
        <tr>
            <td>

    用户名 :
            </td>
            <td>
    <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
            &nbsp;<asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                    ControlToValidate="TextBox1" ErrorMessage="用户名不能为空"></asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td>
                密码&nbsp; :</td>
            <td>
    <asp:TextBox ID="TextBox2" runat="server" TextMode="Password"></asp:TextBox>
            &nbsp;<asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                    ControlToValidate="TextBox2" ErrorMessage="密码不能为空"></asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td>
    <asp:Button ID="Button1" runat="server" Text="登陆" onclick="Button1_Click" />
            </td>
            <td>
                <asp:LinkButton ID="LinkButton1" runat="server" PostBackUrl="resign.aspx">还没有注册?</asp:LinkButton>

            &nbsp;<asp:Label ID="Label1" runat="server" style="color: #FF3300"></asp:Label>

            </td>
        </tr>
    </table>

</div>