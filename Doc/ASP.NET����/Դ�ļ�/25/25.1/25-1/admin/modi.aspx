<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="modi.aspx.cs" Inherits="_25_1.admin.modi" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <link href="../css.css" rel="stylesheet" type="text/css" />
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:DetailsView ID="DetailsView1" runat="server" AutoGenerateRows="False" 
            BackColor="White" BorderColor="#999999" BorderStyle="None" BorderWidth="1px" 
            CellPadding="3" DataKeyNames="id" DataSourceID="SqlDataSource1" 
            GridLines="Vertical" Height="50px" Width="100%">
            <FooterStyle BackColor="#CCCCCC" ForeColor="Black" />
            <RowStyle BackColor="#EEEEEE" ForeColor="Black" />
            <PagerStyle BackColor="#999999" ForeColor="Black" HorizontalAlign="Center" />
            <Fields>
                <asp:BoundField DataField="id" HeaderText="编号" InsertVisible="False" 
                    ReadOnly="True" SortExpression="id" />
                <asp:BoundField DataField="title" HeaderText="新闻标题" SortExpression="title" />
                <asp:BoundField DataField="time" HeaderText="发布时间" SortExpression="time" />
                <asp:BoundField DataField="author" HeaderText="发布作者" SortExpression="author" />
                <asp:BoundField DataField="content" HeaderText="新闻内容" 
                    SortExpression="content" />
                <asp:BoundField DataField="weather" HeaderText="天气" SortExpression="weather" />
                <asp:BoundField DataField="level" HeaderText="等级" SortExpression="level" />
                <asp:BoundField DataField="hits" HeaderText="阅读次数" SortExpression="hits" />
                <asp:BoundField DataField="classname" HeaderText="新闻分类" 
                    SortExpression="classname" />
                <asp:CommandField ShowEditButton="True" />
            </Fields>
            <HeaderStyle BackColor="#000084" Font-Bold="True" ForeColor="White" />
            <EditRowStyle BackColor="#008A8C" Font-Bold="True" ForeColor="White" />
            <AlternatingRowStyle BackColor="#DCDCDC" />
        </asp:DetailsView>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:newsConnectionString %>" 
            DeleteCommand="DELETE FROM [news] WHERE [id] = @id" 
            InsertCommand="INSERT INTO [news] ([title], [time], [author], [content], [weather], [level], [hits], [classname]) VALUES (@title, @time, @author, @content, @weather, @level, @hits, @classname)" 
            SelectCommand="SELECT * FROM [news] WHERE ([id] = @id)" 
            UpdateCommand="UPDATE [news] SET [title] = @title, [time] = @time, [author] = @author, [content] = @content, [weather] = @weather, [level] = @level, [hits] = @hits, [classname] = @classname WHERE [id] = @id">
            <SelectParameters>
                <asp:QueryStringParameter Name="id" QueryStringField="id" Type="Int32" />
            </SelectParameters>
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
        <br />
    
    </div>
    </form>
</body>
</html>
