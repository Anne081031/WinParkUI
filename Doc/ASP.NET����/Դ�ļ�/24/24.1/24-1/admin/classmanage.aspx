<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="classmanage.aspx.cs" Inherits="_24_1.admin.classmanage" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <link href="../css.css" rel="stylesheet" type="text/css" />
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <b>广告类型管理：</b><br />
        <asp:ListView ID="ListView1" runat="server" DataKeyNames="id" 
            DataSourceID="SqlDataSource1" InsertItemPosition="LastItem">
            <AlternatingItemTemplate>
                <li style="background-color: #FFF8DC;">id:
                    <asp:Label ID="idLabel" runat="server" Text='<%# Eval("id") %>' />
                    <br />
                    classname:
                    <asp:Label ID="classnameLabel" runat="server" Text='<%# Eval("classname") %>' />
                    <br />
                    <asp:Button ID="EditButton" runat="server" CommandName="Edit" Text="编辑" />
                    <asp:Button ID="DeleteButton" runat="server" CommandName="Delete" Text="删除" />
                </li>
            </AlternatingItemTemplate>
            <LayoutTemplate>
                <ul ID="itemPlaceholderContainer" runat="server" 
                    style="font-family: Verdana, Arial, Helvetica, sans-serif;">
                    <li ID="itemPlaceholder" runat="server" />
                    </ul>
                    <div style="text-align: center;background-color: #CCCCCC;font-family: Verdana, Arial, Helvetica, sans-serif;color: #000000;">
                        <asp:DataPager ID="DataPager1" runat="server">
                            <Fields>
                                <asp:NextPreviousPagerField ButtonType="Button" ShowFirstPageButton="True" 
                                    ShowLastPageButton="True" />
                            </Fields>
                        </asp:DataPager>
                    </div>
                </LayoutTemplate>
                <InsertItemTemplate>
                    <li style="">classname:
                        <asp:TextBox ID="classnameTextBox" runat="server" 
                            Text='<%# Bind("classname") %>' />
                        <br />
                        <asp:Button ID="InsertButton" runat="server" CommandName="Insert" Text="插入" />
                        <asp:Button ID="CancelButton" runat="server" CommandName="Cancel" Text="清除" />
                    </li>
                </InsertItemTemplate>
                <SelectedItemTemplate>
                    <li style="background-color: #008A8C;font-weight: bold;color: #FFFFFF;">id:
                        <asp:Label ID="idLabel" runat="server" Text='<%# Eval("id") %>' />
                        <br />
                        classname:
                        <asp:Label ID="classnameLabel" runat="server" Text='<%# Eval("classname") %>' />
                        <br />
                        <asp:Button ID="EditButton" runat="server" CommandName="Edit" Text="编辑" />
                        <asp:Button ID="DeleteButton" runat="server" CommandName="Delete" Text="删除" />
                    </li>
                </SelectedItemTemplate>
                <EmptyDataTemplate>
                    未返回数据。
                </EmptyDataTemplate>
                <EditItemTemplate>
                    <li style="background-color: #008A8C;color: #FFFFFF;">id:
                        <asp:Label ID="idLabel1" runat="server" Text='<%# Eval("id") %>' />
                        <br />
                        classname:
                        <asp:TextBox ID="classnameTextBox" runat="server" 
                            Text='<%# Bind("classname") %>' />
                        <br />
                        <asp:Button ID="UpdateButton" runat="server" CommandName="Update" Text="更新" />
                        <asp:Button ID="CancelButton" runat="server" CommandName="Cancel" Text="取消" />
                    </li>
                </EditItemTemplate>
                <ItemTemplate>
                    <li style="background-color: #DCDCDC;color: #000000;">id:
                        <asp:Label ID="idLabel" runat="server" Text='<%# Eval("id") %>' />
                        <br />
                        classname:
                        <asp:Label ID="classnameLabel" runat="server" Text='<%# Eval("classname") %>' />
                        <br />
                        <asp:Button ID="EditButton" runat="server" CommandName="Edit" Text="编辑" />
                        <asp:Button ID="DeleteButton" runat="server" CommandName="Delete" Text="删除" />
                    </li>
                </ItemTemplate>
                <ItemSeparatorTemplate>
                    <br />
                </ItemSeparatorTemplate>
            </asp:ListView>
            <b>
            <br />
            广告聚合类型管理：<br />
            </b>
            <br />
            <asp:ListView ID="ListView2" runat="server" DataKeyNames="id" 
                DataSourceID="SqlDataSource2" InsertItemPosition="LastItem">
                <AlternatingItemTemplate>
                    <li style="background-color: #FAFAD2;color: #284775;">id:
                        <asp:Label ID="idLabel" runat="server" Text='<%# Eval("id") %>' />
                        <br />
                        classname:
                        <asp:Label ID="classnameLabel" runat="server" Text='<%# Eval("classname") %>' />
                        <br />
                        <asp:Button ID="EditButton" runat="server" CommandName="Edit" Text="编辑" />
                        <asp:Button ID="DeleteButton" runat="server" CommandName="Delete" Text="删除" />
                    </li>
                </AlternatingItemTemplate>
                <LayoutTemplate>
                    <ul ID="itemPlaceholderContainer" runat="server" 
                        style="font-family: Verdana, Arial, Helvetica, sans-serif;">
                        <li ID="itemPlaceholder" runat="server" />
                        </ul>
                        <div style="text-align: center;background-color: #FFCC66;font-family: Verdana, Arial, Helvetica, sans-serif;color: #333333;">
                            <asp:DataPager ID="DataPager1" runat="server">
                                <Fields>
                                    <asp:NextPreviousPagerField ButtonType="Button" ShowFirstPageButton="True" 
                                        ShowLastPageButton="True" />
                                </Fields>
                            </asp:DataPager>
                        </div>
                    </LayoutTemplate>
                    <InsertItemTemplate>
                        <li style="">classname:
                            <asp:TextBox ID="classnameTextBox" runat="server" 
                                Text='<%# Bind("classname") %>' />
                            <br />
                            <asp:Button ID="InsertButton" runat="server" CommandName="Insert" Text="插入" />
                            <asp:Button ID="CancelButton" runat="server" CommandName="Cancel" Text="清除" />
                        </li>
                    </InsertItemTemplate>
                    <SelectedItemTemplate>
                        <li style="background-color: #FFCC66;font-weight: bold;color: #000080;">id:
                            <asp:Label ID="idLabel" runat="server" Text='<%# Eval("id") %>' />
                            <br />
                            classname:
                            <asp:Label ID="classnameLabel" runat="server" Text='<%# Eval("classname") %>' />
                            <br />
                            <asp:Button ID="EditButton" runat="server" CommandName="Edit" Text="编辑" />
                            <asp:Button ID="DeleteButton" runat="server" CommandName="Delete" Text="删除" />
                        </li>
                    </SelectedItemTemplate>
                    <EmptyDataTemplate>
                        未返回数据。
                    </EmptyDataTemplate>
                    <EditItemTemplate>
                        <li style="background-color: #FFCC66;color: #000080;">id:
                            <asp:Label ID="idLabel1" runat="server" Text='<%# Eval("id") %>' />
                            <br />
                            classname:
                            <asp:TextBox ID="classnameTextBox" runat="server" 
                                Text='<%# Bind("classname") %>' />
                            <br />
                            <asp:Button ID="UpdateButton" runat="server" CommandName="Update" Text="更新" />
                            <asp:Button ID="CancelButton" runat="server" CommandName="Cancel" Text="取消" />
                        </li>
                    </EditItemTemplate>
                    <ItemTemplate>
                        <li style="background-color: #FFFBD6;color: #333333;">id:
                            <asp:Label ID="idLabel" runat="server" Text='<%# Eval("id") %>' />
                            <br />
                            classname:
                            <asp:Label ID="classnameLabel" runat="server" Text='<%# Eval("classname") %>' />
                            <br />
                            <asp:Button ID="EditButton" runat="server" CommandName="Edit" Text="编辑" />
                            <asp:Button ID="DeleteButton" runat="server" CommandName="Delete" Text="删除" />
                        </li>
                    </ItemTemplate>
                    <ItemSeparatorTemplate>
                        <br />
                    </ItemSeparatorTemplate>
                </asp:ListView>
                <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
                    ConnectionString="<%$ ConnectionStrings:adConnectionString %>" 
                    DeleteCommand="DELETE FROM [adclass] WHERE [id] = @id" 
                    InsertCommand="INSERT INTO [adclass] ([classname]) VALUES (@classname)" 
                    SelectCommand="SELECT * FROM [adclass] ORDER BY [id] DESC" 
                    UpdateCommand="UPDATE [adclass] SET [classname] = @classname WHERE [id] = @id">
                    <DeleteParameters>
                        <asp:Parameter Name="id" Type="Int32" />
                    </DeleteParameters>
                    <UpdateParameters>
                        <asp:Parameter Name="classname" Type="String" />
                        <asp:Parameter Name="id" Type="Int32" />
                    </UpdateParameters>
                    <InsertParameters>
                        <asp:Parameter Name="classname" Type="String" />
                    </InsertParameters>
                </asp:SqlDataSource>
                <asp:SqlDataSource ID="SqlDataSource2" runat="server" 
                    ConnectionString="<%$ ConnectionStrings:adConnectionString %>" 
                    DeleteCommand="DELETE FROM [type] WHERE [id] = @id" 
                    InsertCommand="INSERT INTO [type] ([classname]) VALUES (@classname)" 
                    SelectCommand="SELECT * FROM [type] ORDER BY [id] DESC" 
                    UpdateCommand="UPDATE [type] SET [classname] = @classname WHERE [id] = @id">
                    <DeleteParameters>
                        <asp:Parameter Name="id" Type="Int32" />
                    </DeleteParameters>
                    <UpdateParameters>
                        <asp:Parameter Name="classname" Type="String" />
                        <asp:Parameter Name="id" Type="Int32" />
                    </UpdateParameters>
                    <InsertParameters>
                        <asp:Parameter Name="classname" Type="String" />
                    </InsertParameters>
                </asp:SqlDataSource>
    
    </div>
    </form>
</body>
</html>
