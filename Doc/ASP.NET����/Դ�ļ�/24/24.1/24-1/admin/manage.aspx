<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="manage.aspx.cs" Inherits="_24_1.admin.manage" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title><link href="../css.css" rel="stylesheet" type="text/css" />
</head>

<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:GridView ID="GridView1" runat="server" AllowPaging="True" 
            AutoGenerateColumns="False" BackColor="White" BorderColor="#E7E7FF" 
            BorderStyle="None" BorderWidth="1px" CellPadding="3" DataKeyNames="id" 
            DataSourceID="SqlDataSource1" GridLines="Horizontal" PageSize="20" 
            ShowHeader="False" Width="100%">
            <FooterStyle BackColor="#B5C7DE" ForeColor="#4A3C8C" />
            <RowStyle BackColor="#E7E7FF" ForeColor="#4A3C8C" />
            <Columns>
                <asp:BoundField DataField="id" HeaderText="id" InsertVisible="False" 
                    ReadOnly="True" SortExpression="id" />
                <asp:BoundField DataField="time" HeaderText="time" SortExpression="time" />
                <asp:BoundField DataField="endtime" HeaderText="endtime" 
                    SortExpression="endtime" />
                <asp:BoundField DataField="name" HeaderText="name" SortExpression="name" />
                <asp:BoundField DataField="content" HeaderText="content" 
                    SortExpression="content" />
                <asp:BoundField DataField="infor" HeaderText="infor" SortExpression="infor" />
                <asp:BoundField DataField="picture" HeaderText="picture" 
                    SortExpression="picture" />
                <asp:BoundField DataField="url" HeaderText="url" SortExpression="url" />
                <asp:BoundField DataField="title" HeaderText="title" SortExpression="title" />
                <asp:BoundField DataField="html" HeaderText="html" SortExpression="html" />
                <asp:BoundField DataField="type" HeaderText="type" SortExpression="type" />
                <asp:BoundField DataField="adid" HeaderText="adid" SortExpression="adid" />
                <asp:CommandField ShowDeleteButton="True" />
                <asp:HyperLinkField DataNavigateUrlFields="id" 
                    DataNavigateUrlFormatString="modi.aspx?id={0}" Text="修改" />
            </Columns>
            <PagerStyle BackColor="#E7E7FF" ForeColor="#4A3C8C" HorizontalAlign="Right" />
            <EmptyDataTemplate>
                暂时没有任何数据!
            </EmptyDataTemplate>
            <SelectedRowStyle BackColor="#738A9C" Font-Bold="True" ForeColor="#F7F7F7" />
            <HeaderStyle BackColor="#4A3C8C" Font-Bold="True" ForeColor="#F7F7F7" />
            <AlternatingRowStyle BackColor="#F7F7F7" />
        </asp:GridView>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:adConnectionString %>" 
            DeleteCommand="DELETE FROM [ads] WHERE [id] = @id" 
            InsertCommand="INSERT INTO [ads] ([time], [endtime], [name], [content], [infor], [picture], [url], [title], [html], [type], [adid]) VALUES (@time, @endtime, @name, @content, @infor, @picture, @url, @title, @html, @type, @adid)" 
            SelectCommand="SELECT * FROM [ads] ORDER BY [id] DESC" 
            UpdateCommand="UPDATE [ads] SET [time] = @time, [endtime] = @endtime, [name] = @name, [content] = @content, [infor] = @infor, [picture] = @picture, [url] = @url, [title] = @title, [html] = @html, [type] = @type, [adid] = @adid WHERE [id] = @id">
            <DeleteParameters>
                <asp:Parameter Name="id" Type="Int32" />
            </DeleteParameters>
            <UpdateParameters>
                <asp:Parameter Name="time" Type="DateTime" />
                <asp:Parameter Name="endtime" Type="DateTime" />
                <asp:Parameter Name="name" Type="String" />
                <asp:Parameter Name="content" Type="String" />
                <asp:Parameter Name="infor" Type="String" />
                <asp:Parameter Name="picture" Type="String" />
                <asp:Parameter Name="url" Type="String" />
                <asp:Parameter Name="title" Type="String" />
                <asp:Parameter Name="html" Type="String" />
                <asp:Parameter Name="type" Type="Int32" />
                <asp:Parameter Name="adid" Type="Int32" />
                <asp:Parameter Name="id" Type="Int32" />
            </UpdateParameters>
            <InsertParameters>
                <asp:Parameter Name="time" Type="DateTime" />
                <asp:Parameter Name="endtime" Type="DateTime" />
                <asp:Parameter Name="name" Type="String" />
                <asp:Parameter Name="content" Type="String" />
                <asp:Parameter Name="infor" Type="String" />
                <asp:Parameter Name="picture" Type="String" />
                <asp:Parameter Name="url" Type="String" />
                <asp:Parameter Name="title" Type="String" />
                <asp:Parameter Name="html" Type="String" />
                <asp:Parameter Name="type" Type="Int32" />
                <asp:Parameter Name="adid" Type="Int32" />
            </InsertParameters>
        </asp:SqlDataSource>
    
    </div>
    </form>
</body>
</html>
