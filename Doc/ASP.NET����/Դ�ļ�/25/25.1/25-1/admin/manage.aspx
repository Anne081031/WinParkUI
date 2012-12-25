<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="manage.aspx.cs" Inherits="_25_1.admin.manage" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <link href="../css.css" rel="stylesheet" type="text/css" />
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:GridView ID="GridView1" runat="server" AllowPaging="True" 
            AutoGenerateColumns="False" BackColor="LightGoldenrodYellow" BorderColor="Tan" 
            BorderWidth="1px" CellPadding="2" DataKeyNames="id" 
            DataSourceID="SqlDataSource1" ForeColor="Black" GridLines="None" PageSize="20" 
            ShowHeader="False" Width="100%">
            <FooterStyle BackColor="Tan" />
            <Columns>
                <asp:BoundField DataField="id" HeaderText="id" InsertVisible="False" 
                    ReadOnly="True" SortExpression="id" />
                <asp:BoundField DataField="title" HeaderText="title" SortExpression="title" />
                <asp:BoundField DataField="time" HeaderText="time" SortExpression="time" />
                <asp:BoundField DataField="author" HeaderText="author" 
                    SortExpression="author" />
                <asp:BoundField DataField="weather" HeaderText="weather" 
                    SortExpression="weather" />
                <asp:BoundField DataField="level" HeaderText="level" SortExpression="level" />
                <asp:BoundField DataField="hits" HeaderText="hits" SortExpression="hits" />
                <asp:BoundField DataField="classname" HeaderText="classname" 
                    SortExpression="classname" />
                <asp:CommandField ShowDeleteButton="True" />
                <asp:HyperLinkField DataNavigateUrlFields="id" 
                    DataNavigateUrlFormatString="modi.aspx?id={0}" Text="修改" />
            </Columns>
            <PagerStyle BackColor="PaleGoldenrod" ForeColor="DarkSlateBlue" 
                HorizontalAlign="Center" />
            <SelectedRowStyle BackColor="DarkSlateBlue" ForeColor="GhostWhite" />
            <HeaderStyle BackColor="Tan" Font-Bold="True" />
            <AlternatingRowStyle BackColor="PaleGoldenrod" />
        </asp:GridView>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:newsConnectionString %>" 
            DeleteCommand="DELETE FROM [news] WHERE [id] = @id" 
            InsertCommand="INSERT INTO [news] ([title], [time], [author], [content], [weather], [level], [hits], [classname]) VALUES (@title, @time, @author, @content, @weather, @level, @hits, @classname)" 
            SelectCommand="SELECT * FROM [news] ORDER BY [id] DESC" 
            UpdateCommand="UPDATE [news] SET [title] = @title, [time] = @time, [author] = @author, [content] = @content, [weather] = @weather, [level] = @level, [hits] = @hits, [classname] = @classname WHERE [id] = @id">
            <DeleteParameters>
                <asp:Parameter Name="id" Type="Int32" />
            </DeleteParameters>
            <UpdateParameters>
                <asp:Parameter Name="title" Type="String" />
                <asp:Parameter Name="time" Type="DateTime" />
                <asp:Parameter Name="author" Type="String" />
                <asp:Parameter Name="content" Type="String" />
                <asp:Parameter Name="weather" Type="Int32" />
                <asp:Parameter Name="level" Type="Int32" />
                <asp:Parameter Name="hits" Type="Int32" />
                <asp:Parameter Name="classname" Type="Int32" />
                <asp:Parameter Name="id" Type="Int32" />
            </UpdateParameters>
            <InsertParameters>
                <asp:Parameter Name="title" Type="String" />
                <asp:Parameter Name="time" Type="DateTime" />
                <asp:Parameter Name="author" Type="String" />
                <asp:Parameter Name="content" Type="String" />
                <asp:Parameter Name="weather" Type="Int32" />
                <asp:Parameter Name="level" Type="Int32" />
                <asp:Parameter Name="hits" Type="Int32" />
                <asp:Parameter Name="classname" Type="Int32" />
            </InsertParameters>
        </asp:SqlDataSource>
    
    </div>
    </form>
</body>
</html>
