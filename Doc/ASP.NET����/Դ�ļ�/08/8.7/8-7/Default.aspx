<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_8_7._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:ListView ID="ListView1" runat="server" DataKeyNames="ID" 
            DataSourceID="SqlDataSource1" GroupItemCount="3" InsertItemPosition="LastItem" 
            onitemupdated="ListView1_ItemUpdated">
            <AlternatingItemTemplate>
                <td runat="server" style="background-color:#FFF8DC;">
                    ID:
                    <asp:Label ID="IDLabel" runat="server" Text='<%# Eval("ID") %>' />
                    <br />
                    TITLE:
                    <asp:Label ID="TITLELabel" runat="server" Text='<%# Eval("TITLE") %>' />
                    <br />
                    <asp:Button ID="DeleteButton" runat="server" CommandName="Delete" Text="删除" />
                    <br />
                    <asp:Button ID="EditButton" runat="server" CommandName="Edit" Text="编辑" />
                    <br />
                </td>
            </AlternatingItemTemplate>
            <LayoutTemplate>
                <table runat="server">
                    <tr runat="server">
                        <td runat="server">
                            <table ID="groupPlaceholderContainer" runat="server" border="1" 
                                style="background-color: #FFFFFF;border-collapse: collapse;border-color: #999999;border-style:none;border-width:1px;font-family: Verdana, Arial, Helvetica, sans-serif;">
                                <tr ID="groupPlaceholder" runat="server">
                                </tr>
                            </table>
                        </td>
                    </tr>
                    <tr runat="server">
                        <td runat="server" 
                            style="text-align: center;background-color: #CCCCCC;font-family: Verdana, Arial, Helvetica, sans-serif;color: #000000;">
                            <asp:DataPager ID="DataPager1" runat="server" PageSize="12">
                                <Fields>
                                    <asp:NextPreviousPagerField ButtonType="Button" ShowFirstPageButton="True" 
                                        ShowLastPageButton="True" />
                                </Fields>
                            </asp:DataPager>
                        </td>
                    </tr>
                </table>
            </LayoutTemplate>
            <EmptyItemTemplate>
                <td runat="server" />
                </EmptyItemTemplate>
                <InsertItemTemplate>
                    <td runat="server" style="">
                        TITLE:
                        <asp:TextBox ID="TITLETextBox" runat="server" Text='<%# Bind("TITLE") %>' />
                        <br />
                        <asp:Button ID="InsertButton" runat="server" CommandName="Insert" Text="插入" />
                        <br />
                        <asp:Button ID="CancelButton" runat="server" CommandName="Cancel" Text="清除" />
                        <br />
                    </td>
                </InsertItemTemplate>
                <SelectedItemTemplate>
                    <td runat="server" 
                        style="background-color:#008A8C;font-weight: bold;color: #FFFFFF;">
                        ID:
                        <asp:Label ID="IDLabel" runat="server" Text='<%# Eval("ID") %>' />
                        <br />
                        TITLE:
                        <asp:Label ID="TITLELabel" runat="server" Text='<%# Eval("TITLE") %>' />
                        <br />
                        <asp:Button ID="DeleteButton" runat="server" CommandName="Delete" Text="删除" />
                        <br />
                        <asp:Button ID="EditButton" runat="server" CommandName="Edit" Text="编辑" />
                        <br />
                    </td>
                </SelectedItemTemplate>
                <GroupTemplate>
                    <tr ID="itemPlaceholderContainer" runat="server">
                        <td ID="itemPlaceholder" runat="server">
                        </td>
                    </tr>
                </GroupTemplate>
                <EmptyDataTemplate>
                    <table runat="server" 
                        style="background-color: #FFFFFF;border-collapse: collapse;border-color: #999999;border-style:none;border-width:1px;">
                        <tr>
                            <td>
                                未返回数据。</td>
                        </tr>
                    </table>
                </EmptyDataTemplate>
                <EditItemTemplate>
                    <td runat="server" style="background-color:#008A8C;color: #FFFFFF;">
                        ID:
                        <asp:Label ID="IDLabel1" runat="server" Text='<%# Eval("ID") %>' />
                        <br />
                        TITLE:
                        <asp:TextBox ID="TITLETextBox" runat="server" Text='<%# Bind("TITLE") %>' />
                        <br />
                        <asp:Button ID="UpdateButton" runat="server" CommandName="Update" Text="更新" />
                        <br />
                        <asp:Button ID="CancelButton" runat="server" CommandName="Cancel" Text="取消" />
                        <br />
                    </td>
                </EditItemTemplate>
                <ItemTemplate>
                    <td runat="server" style="background-color:#DCDCDC;color: #000000;">
                        ID:
                        <asp:Label ID="IDLabel" runat="server" Text='<%# Eval("ID") %>' />
                        <br />
                        TITLE:
                        <asp:Label ID="TITLELabel" runat="server" Text='<%# Eval("TITLE") %>' />
                        <br />
                        <asp:Button ID="DeleteButton" runat="server" CommandName="Delete" Text="删除" />
                        <br />
                        <asp:Button ID="EditButton" runat="server" CommandName="Edit" Text="编辑" />
                        <br />
                    </td>
                </ItemTemplate>
            </asp:ListView>
            <br />
            <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
            <br />
            <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
                ConnectionString="<%$ ConnectionStrings:mytableConnectionString %>" 
                DeleteCommand="DELETE FROM [mynews] WHERE [ID] = @ID" 
                InsertCommand="INSERT INTO [mynews] ([TITLE]) VALUES (@TITLE)" 
                SelectCommand="SELECT * FROM [mynews]" 
                UpdateCommand="UPDATE [mynews] SET [TITLE] = @TITLE WHERE [ID] = @ID">
                <DeleteParameters>
                    <asp:Parameter Name="ID" Type="Int32" />
                </DeleteParameters>
                <UpdateParameters>
                    <asp:Parameter Name="TITLE" Type="String" />
                    <asp:Parameter Name="ID" Type="Int32" />
                </UpdateParameters>
                <InsertParameters>
                    <asp:Parameter Name="TITLE" Type="String" />
                </InsertParameters>
            </asp:SqlDataSource>
    
    </div>
    </form>
</body>
</html>
