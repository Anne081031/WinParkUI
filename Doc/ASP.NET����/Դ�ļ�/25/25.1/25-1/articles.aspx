﻿<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="articles.aspx.cs" Inherits="_25_1.articles" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <link href="css.css" rel="stylesheet" type="text/css" />
    <style type="text/css">
        .style1
        {
            width: 100%;
        }
        .style2
        {
            width: 500px;
        }
    </style>
</head>
<body style="background:#f0f0f0;">
    <form id="form1" runat="server">
    <div style="padding:10px 10px 10px 10px; border:1px dashed #ccc; background:white; margin:10px auto; width:800px;">
    
        <table class="style1">
            <tr>
                <td colspan="2" style="padding:10px 10px 10px 10px;">
                    欢迎来到鑫鑫新闻网</td>
            </tr>
            <tr>
                <td class="style2" style="padding:10px 10px 10px 10px;" valign="top">
                    <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
                    <br />
                    <asp:Label ID="Label3" runat="server" Text="Label"></asp:Label>
                    发布于<asp:Label ID="Label4" runat="server" Text="Label"></asp:Label>
                    <br />
                    <br />
                    <asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
                </td>
                <td style="padding:10px 10px 10px 10px;" valign="top">
                    <img alt="" src="men.png" style="width: 100px; height: 100px" /></td>
            </tr>
        </table>
    
    </div>
    
    <div style="text-align:center; font-size:10px;">copyright ASP.NET 3.5开发大全</div>
    </form>
</body>
</html>
