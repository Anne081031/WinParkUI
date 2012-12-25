<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="LinqDataSource.aspx.cs" Inherits="_8_1.LinqDataSource" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:DataList ID="DataList1" runat="server" DataSourceID="LinqDataSource1" Width="100%">
            <ItemTemplate>
                Length:
                <asp:Label ID="LengthLabel" runat="server" Text='<%# Eval("Length") %>' />
                <br />
                Chars:
                <asp:Label ID="CharsLabel" runat="server" Text='<%# Eval("Chars") %>' />
                <br />
                <br />
            </ItemTemplate>
        </asp:DataList>
        <asp:LinqDataSource ID="LinqDataSource1" runat="server" 
            ContextTypeName="ClassLibrary1.Class1" Select="new (Length, Chars)" 
            TableName="arr">
        </asp:LinqDataSource>
    
    </div>
    </form>
</body>
</html>
