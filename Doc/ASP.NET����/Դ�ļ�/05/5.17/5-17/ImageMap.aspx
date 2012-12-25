<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="ImageMap.aspx.cs" Inherits="_5_17.ImageMap" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:ImageMap ID="ImageMap1" runat="server" HotSpotMode="PostBack" 
            ImageUrl="~/images/mobile.jpg" onclick="ImageMap1_Click">
            <asp:CircleHotSpot Radius="15" X="15" Y="15" HotSpotMode="PostBack" PostBackValue="0" />
            <asp:CircleHotSpot Radius="100" X="15" Y="15" HotSpotMode="PostBack" PostBackValue="1" />
            <asp:CircleHotSpot Radius="300" X="15" Y="15" HotSpotMode="PostBack" PostBackValue="2" />
        </asp:ImageMap>
        <br />
        <asp:Label ID="Label1" runat="server" Text="请点上面的图片 ： ）"></asp:Label>
    
    </div>
    </form>
</body>
</html>
