<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="_5_15._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>无标题页</title>
</head>
<body>
    <form id="form1" runat="server">
    <asp:Wizard ID="Wizard1" runat="server" ActiveStepIndex="2" 
        DisplayCancelButton="True" onfinishbuttonclick="Wizard1_FinishButtonClick">
        <WizardSteps>
            <asp:WizardStep runat="server" title="Step 1">
                执行的是第一步</asp:WizardStep>
            <asp:WizardStep runat="server" title="Step 2">
                执行的是第二步</asp:WizardStep>
            <asp:WizardStep runat="server" Title="Step3">
                感谢您的使用</asp:WizardStep>
        </WizardSteps>
    </asp:Wizard>
    <div>
        <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label> 
    </div>
    </form>
</body>
</html>
