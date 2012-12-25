<%@ Page 
Language="C#" 
AutoEventWireup="true" CodeBehind="Beta.aspx.cs" Inherits="_17_1.Views.Beta.Index" %>
<h2>About Us</h2>
<p>
    <span style="color:Red">这是一个测试页面</span><br/>
    <% foreach(string str in ViewData["beta"] as List<string>)%>
    <% = str%>
    <br/>
    <%=TempData["beta"] %>
</p>

