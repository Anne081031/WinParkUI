<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_12_1._Default" StylesheetTheme="MyTheme1"%>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
    <style type="text/css">
        .style1
        {
            width: 100%;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <table class="style1">
            <tr>
                <td>
                    控件配置属性同时也使用主题控制属性</td>
                <td>
          使用now主题</td>
            </tr>
            <tr>
                <td>
    
      <asp:Calendar ID="Calendar1" runat="server" SkinID="blue" BackColor="White" 
         BorderColor="#3366CC" BorderWidth="1px" DayNameFormat="Shortest" 
         Font-Names="Verdana" Font-Size="8pt" ForeColor="#003399" Height="200px" Width="220px" 
                        EnableTheming="False" CellPadding="1">
         <SelectedDayStyle BackColor="#009999" Font-Bold="True" ForeColor="#CCFF99"/>
         <SelectorStyle BackColor="#99CCCC" ForeColor="#336666" />
          <WeekendDayStyle BackColor="#CCCCFF" />
         <TodayDayStyle BackColor="#FFCC66" ForeColor="White" />
         <OtherMonthDayStyle ForeColor="#999999" />
         <NextPrevStyle Font-Size="8pt" ForeColor="#CCCCFF" />
         <DayHeaderStyle BackColor="#99CCCC" Height="1px" ForeColor="#336666" />
         <TitleStyle BackColor="#003399" Font-Bold="True" Font-Size="10pt" 
          ForeColor="#CCCCFF" BorderColor="#3366CC" BorderWidth="1px" Height="25px" />
       </asp:Calendar>
                </td>
                <td>
                    <asp:Calendar ID="Calendar2" runat="server" SkinID="now"></asp:Calendar>
    
                </td>
            </tr>
        </table>
    
    </div>
    <asp:Calendar ID="Calendar3" runat="server" EnableTheming="False">
    </asp:Calendar>
&nbsp;&nbsp;&nbsp;
    </form>
</body>
</html>
