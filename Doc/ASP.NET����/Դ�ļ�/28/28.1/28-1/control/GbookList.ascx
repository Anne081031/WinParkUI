<%@ Control Language="C#" AutoEventWireup="true" CodeBehind="GbookList.ascx.cs" Inherits="_28_1.control.GbookList" %>
<link href="../css/css.css" rel="stylesheet" type="text/css" />

<p>
    <asp:DataList ID="DataList1" runat="server" DataKeyField="id" 
        DataSourceID="SqlDataSource1" Width="100%">
        <ItemTemplate>
        <table class="g_table">
            <tr>
                <td><div class="g_title">
                    <asp:Label ID="nameLabel" runat="server" Text='<%# Eval("name") %>' 
                        style="font-weight: 700" />
                    于<asp:Label ID="timeLabel" runat="server" Text='<%# Eval("time") %>' />
                    进行留言:&nbsp;&nbsp;&nbsp;<span style="font-size:10px"><a href="admin/reply.aspx?cid=<%# Eval("classid") %>&id=<%# Eval("id") %>">回复</a> <a href="admin/delete.aspx?cid=<%# Eval("classid") %>&id=<%# Eval("id") %>">删除</a></span></div></td>
            </tr>
            <tr>
                <td><div class="g_content">
                    <asp:Label ID="contentLabel" runat="server" Text='<%# Eval("content") %>' />
                </td>
            </tr>
            <tr>
                <td>
                <div class="g_reply">
                    <asp:Label ID="repcontentLabel" runat="server" 
                        Text='<%# Eval("repcontent") %>' 
                        style="font-size: xx-small; color: #FF0000" />
                        </div>
                </td>
            </tr>
        </table>
        </ItemTemplate>
    </asp:DataList>
    <br />
    <asp:Label ID="Label4" runat="server" Text="Label"></asp:Label>
    &nbsp;<asp:Label ID="Label3" runat="server" Text="Label"></asp:Label>
    &nbsp;<asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
    &nbsp;</p>
<asp:SqlDataSource ID="SqlDataSource1" runat="server" 
    ConnectionString="<%$ ConnectionStrings:guestbookConnectionString %>" 
    SelectCommand="SELECT * FROM [gbook] WHERE ([classid] = @classid) ORDER BY [id] DESC">
    <SelectParameters>
        <asp:QueryStringParameter Name="classid" QueryStringField="cid" Type="Int32" />
    </SelectParameters>
</asp:SqlDataSource>
