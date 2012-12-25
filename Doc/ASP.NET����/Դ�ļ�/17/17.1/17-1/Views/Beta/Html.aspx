<%@ Page 
Language="C#" 
AutoEventWireup="true" CodeBehind="Html.aspx.cs" Inherits="_17_1.Views.Beta.Html" %>
<h2>HtmlHelper</h2>
<p>
<% using (Html.BeginForm("Html", "Beta"))
   { %>
    请输入用户名:<% =Html.TextBox("Name")%>
    <br/>
    请输入密码:<% =Html.Password("Name")%>
    <br/>
    <input id="Submit1" type="submit" value="submit" />
    <%=Url.Action("Index", "Beta")%>
    <br/>
    <%= ViewData["p"]%>
<%} %>
</p>
<!--
<form id="form1" method="post" action="<%=Html.AttributeEncode(Url.Action("Html","Beta")) %>">
    请输入用户名:<% =Html.TextBox("Name") %>
    <br/>
    请输入密码:<% =Html.Password("Name") %>
    <br/>
    <input id="Submit1" type="submit" value="submit" />
    <%=Url.Action("Index","Beta") %>
    <br/>
    <%= ViewData["p"] %>
</form></p>
-->

