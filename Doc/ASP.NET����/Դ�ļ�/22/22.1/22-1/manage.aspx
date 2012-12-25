<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="manage.aspx.cs" Inherits="_22_1.manage" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <link href="css.css" rel="stylesheet" type="text/css" />
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:GridView ID="GridView1" runat="server" AllowPaging="True" 
            AutoGenerateColumns="False" BackColor="White" BorderColor="#999999" 
            BorderStyle="None" BorderWidth="1px" CellPadding="3" DataKeyNames="id" 
            DataSourceID="SqlDataSource1" GridLines="Vertical" ShowHeader="False" 
            Width="100%">
            <FooterStyle BackColor="#CCCCCC" ForeColor="Black" />
            <RowStyle BackColor="#EEEEEE" ForeColor="Black" />
            <Columns>
                <asp:BoundField DataField="id" HeaderText="id" InsertVisible="False" 
                    ReadOnly="True" SortExpression="id" />
                <asp:BoundField DataField="username" HeaderText="username" 
                    SortExpression="username" />
                <asp:BoundField DataField="password" HeaderText="password" 
                    SortExpression="password" />
                <asp:BoundField DataField="sex" HeaderText="sex" SortExpression="sex" />
                <asp:BoundField DataField="picture" HeaderText="picture" 
                    SortExpression="picture" />
                <asp:BoundField DataField="IM" HeaderText="IM" SortExpression="IM" />
                <asp:BoundField DataField="information" HeaderText="information" 
                    SortExpression="information" />
                <asp:BoundField DataField="others" HeaderText="others" 
                    SortExpression="others" />
                <asp:BoundField DataField="ifisuser" HeaderText="ifisuser" 
                    SortExpression="ifisuser" />
                <asp:CommandField ShowDeleteButton="True" ShowEditButton="True" />
            </Columns>
            <PagerStyle BackColor="#999999" ForeColor="Black" HorizontalAlign="Center" />
            <SelectedRowStyle BackColor="#008A8C" Font-Bold="True" ForeColor="White" />
            <HeaderStyle BackColor="#000084" Font-Bold="True" ForeColor="White" />
            <AlternatingRowStyle BackColor="#DCDCDC" />
        </asp:GridView>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:RegisterConnectionString %>" 
            DeleteCommand="DELETE FROM [Register] WHERE [id] = @id" 
            InsertCommand="INSERT INTO [Register] ([username], [password], [sex], [picture], [IM], [information], [others], [ifisuser]) VALUES (@username, @password, @sex, @picture, @IM, @information, @others, @ifisuser)" 
            SelectCommand="SELECT * FROM [Register] ORDER BY [id] DESC" 
            UpdateCommand="UPDATE [Register] SET [username] = @username, [password] = @password, [sex] = @sex, [picture] = @picture, [IM] = @IM, [information] = @information, [others] = @others, [ifisuser] = @ifisuser WHERE [id] = @id">
            <DeleteParameters>
                <asp:Parameter Name="id" Type="Int32" />
            </DeleteParameters>
            <UpdateParameters>
                <asp:Parameter Name="username" Type="String" />
                <asp:Parameter Name="password" Type="String" />
                <asp:Parameter Name="sex" Type="Int32" />
                <asp:Parameter Name="picture" Type="String" />
                <asp:Parameter Name="IM" Type="String" />
                <asp:Parameter Name="information" Type="String" />
                <asp:Parameter Name="others" Type="String" />
                <asp:Parameter Name="ifisuser" Type="Int32" />
                <asp:Parameter Name="id" Type="Int32" />
            </UpdateParameters>
            <InsertParameters>
                <asp:Parameter Name="username" Type="String" />
                <asp:Parameter Name="password" Type="String" />
                <asp:Parameter Name="sex" Type="Int32" />
                <asp:Parameter Name="picture" Type="String" />
                <asp:Parameter Name="IM" Type="String" />
                <asp:Parameter Name="information" Type="String" />
                <asp:Parameter Name="others" Type="String" />
                <asp:Parameter Name="ifisuser" Type="Int32" />
            </InsertParameters>
        </asp:SqlDataSource>
    
    </div>
    </form>
</body>
</html>
