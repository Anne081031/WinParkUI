VERSION 5.00
Object = "{0A8A25CE-252B-409C-929B-DF09F2F6D2F9}#1.0#0"; "SMSXControl1.ocx"
Begin VB.Form Form1 
   Caption         =   "FTSMSOCX Sample"
   ClientHeight    =   4845
   ClientLeft      =   4500
   ClientTop       =   3450
   ClientWidth     =   5370
   LinkTopic       =   "Form1"
   ScaleHeight     =   4845
   ScaleWidth      =   5370
   Begin VB.TextBox Text4 
      Height          =   375
      Left            =   3480
      TabIndex        =   8
      Text            =   "123456789012345"
      Top             =   120
      Width           =   1695
   End
   Begin SMSXControlCtl.SMSX SMSX1 
      Height          =   375
      Left            =   4440
      TabIndex        =   7
      Top             =   840
      Visible         =   0   'False
      Width           =   975
   End
   Begin VB.CommandButton Command1 
      Caption         =   "收消息"
      Height          =   375
      Left            =   3600
      TabIndex        =   6
      Top             =   840
      Width           =   1095
   End
   Begin VB.TextBox Text3 
      Height          =   285
      Left            =   240
      TabIndex        =   5
      Text            =   "COM2"
      Top             =   120
      Width           =   1455
   End
   Begin VB.ListBox List1 
      Height          =   2400
      Left            =   240
      TabIndex        =   4
      Top             =   2040
      Width           =   5055
   End
   Begin VB.CommandButton SendMsg 
      Caption         =   "发送消息"
      Height          =   375
      Left            =   1800
      TabIndex        =   3
      Top             =   840
      Width           =   1335
   End
   Begin VB.TextBox Text2 
      Height          =   615
      Left            =   240
      TabIndex        =   2
      Text            =   "hello"
      Top             =   1320
      Width           =   5055
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   240
      TabIndex        =   1
      Text            =   "13194988075"
      Top             =   840
      Width           =   1455
   End
   Begin VB.CommandButton Init 
      Caption         =   "连接设备"
      Height          =   375
      Left            =   1800
      TabIndex        =   0
      Top             =   120
      Width           =   1575
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
  Dim phone As String
  Dim msg As String
  Dim R As Integer
  
  phone = String(255, 0)
  msg = String(255, 0)
  Dim year As Long
  Dim month As Long
  Dim day As Long
  Dim hour As Long
  Dim minute As Long
  Dim second As Long
 
  SMSX1.RecvMsg phone, msg, year, month, day, hour, minute, second
  
  List1.AddItem "来自：" + phone + "的消息，内容：" + msg
End Sub

Private Sub Form_Load()
 SMSX1.Init
End Sub

Private Sub Form_Unload(Cancel As Integer)
   SMSX1.DisconnectModem
End Sub

Private Sub Init_Click()
 Dim pn As String
 pn = Text3.Text
 Dim ac As String
 ac = Text4.Text

 SMSX1.ConnectModem pn, 57600, ac

End Sub

Private Sub SendMsg_Click()
  List1.AddItem "发送消息 " + Text2.Text + "到 " + Text1.Text
  
  SMSX1.SendMsg Text1.Text, Text2.Text, 123
End Sub

Private Sub SMSX1_OnConnectResult(ByVal Status As Long)
  If Status = 0 Then List1.AddItem "GSM 设备初始化成功"
  If Status = -1 Then List1.AddItem "GSM 设备初始化失败"
End Sub

Private Sub SMSX1_OnRecvMsg(ByVal MsgCount As Integer)
  Dim phone As String
  Dim msg As String
  
'  phone = String(255, 0)
'  msg = String(255, 0)
  Dim year As Long
  Dim month As Long
  Dim day As Long
  Dim hour As Long
  Dim minute As Long
  Dim second As Long
  
  List1.AddItem "收到一条消息"
  SMSX1.RecvMsg phone, msg, year, month, day, hour, minute, second
  List1.AddItem "来自：" + phone + "的消息，内容：" + msg
  
  
End Sub

Private Sub SMSX1_OnSendMsg(ByVal Result As Integer, ByVal MsgIndex As Long)
  If Result = 0 Then List1.AddItem "消息发送成功"
  If Result = -1 Then List1.AddItem "消息发送失败"
End Sub

