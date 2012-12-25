<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="XmlDataSource.aspx.cs" Inherits="_8_1.XmlDataSource" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:TreeView ID="TreeView1" runat="server" DataSourceID="XmlDataSource1" 
            ImageSet="Contacts" NodeIndent="10">
            <ParentNodeStyle Font-Bold="True" ForeColor="#5555DD" />
            <HoverNodeStyle Font-Underline="False" />
            <SelectedNodeStyle Font-Underline="True" HorizontalPadding="0px" 
                VerticalPadding="0px" />
            <DataBindings>
                <asp:TreeNodeBinding DataMember="title" Text="title" TextField="#InnerText" 
                    Value="title" />
            </DataBindings>
            <NodeStyle Font-Names="Verdana" Font-Size="8pt" ForeColor="Black" 
                HorizontalPadding="5px" NodeSpacing="0px" VerticalPadding="0px" />
        </asp:TreeView>
        <br />
    
        <asp:XmlDataSource ID="XmlDataSource1" runat="server" DataFile="~/xmldate.xml"></asp:XmlDataSource>
    
    </div>
    </form>
</body>
</html>
