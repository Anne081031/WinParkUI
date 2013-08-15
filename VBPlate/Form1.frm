VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "车牌识别Demo"
   ClientHeight    =   6570
   ClientLeft      =   1680
   ClientTop       =   2460
   ClientWidth     =   3960
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   ScaleHeight     =   6570
   ScaleWidth      =   3960
   StartUpPosition =   2  'CenterScreen
   Begin VB.ListBox List1 
      Height          =   5520
      Left            =   120
      TabIndex        =   1
      Top             =   960
      Width           =   3615
   End
   Begin VB.CommandButton Command1 
      Caption         =   "识别【Test.JPG】"
      Height          =   735
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   3615
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Type TH_RECT
    left As Long
    top As Long
    right As Long
    bottom As Long
End Type

Private Type TH_PlateResult
    license(0 To 15) As Byte
    color(0 To 7) As Byte
    nColor As Long
    nType As Long
    nConfidence As Long
    nBright As Long
    nDirection As Long
    rcLocation As TH_RECT
    nTime As Long
    nCarBright As Byte
    nCarColor As Byte
    reserved(0 To 99) As Byte
End Type

' Function argument
' default byref (address )
' byval ( value)
Private Declare Function LPR_SetImageFormat Lib "LPKernelEx.dll" (ByVal bMovingImage As Boolean, _
                    ByVal bFlipVertical As Boolean, ByVal nColorOrder As Long, ByVal bVertCompress As Boolean, _
                    ByVal nMinPlateWidth As Long, ByVal nMaxPlateWidth As Long, ByVal bDwordAligned As Boolean, _
                    ByVal bInputHalfHeightImage As Boolean, ByVal bOutputSingleFrame As Boolean, ByVal nChannel As Long) As Boolean

Private Declare Function LPR_InitEx Lib "LPKernelEx.dll" (ByVal nChannel As Long) As Boolean

Private Declare Function LPR_SetPlateType Lib "LPKernelEx.dll" (ByVal bYellow2 As Boolean, ByVal bIndivi As Boolean, _
                    ByVal bArmPol As Boolean, ByVal bArmy2 As Boolean, ByVal bTractor As Boolean, ByVal bOnlyDyellow As Boolean, _
                    ByValbEmbassy As Boolean, ByVal bDarmpolice As Boolean, ByVal bOnlyLocation As Boolean, ByVal nChannel As Long) As Boolean

Private Declare Function LPR_FileEx Lib "LPKernelEx.dll" (ByVal lpszFileName As String, ByVal lpszPlateFile As String, _
                    ByVal pResult As Long, ByRef nRecogNum As Long, ByRef prcRange As TH_RECT, ByVal nChannel As Long) As Boolean
                    
Private Declare Function LPR_UninitEx Lib "LPKernelEx.dll" (ByVal nChannel As Long) As Boolean


Private Sub Command1_Click()
    Dim bRet As Boolean
    Dim nChannel As Long
    Dim nNum As Long
    Dim sResult(0 To 5) As TH_PlateResult
    Dim nResultAddr As Long
    Dim sRect As TH_RECT
    Dim lpszFileName As String
    Dim lpszPlateFile As String
    
    nChannel = 1
    lpszFileName = "test.jpg"
    lpszPlateFile = vbNullString
    nNum = 6
    sResultAddr = VarPtr(sResult(0))
    
    sRect.bottom = 0
    sRect.left = 0
    sRect.right = 0
    sRect.top = 0
    
    bRet = LPR_FileEx(lpszFileName, lpszPlateFile, sResultAddr, nNum, sRect, nChannel)
    
    If bRet And 0 < nNum Then
        'MsgBox StrConv(sResult(0).license, vbUnicode)
        List1.AddItem StrConv(sResult(0).license, vbUnicode)
    End If
End Sub

Private Function Test(arrTest() As Integer) As Integer
    Test = -1
    
    
End Function

Private Sub Form_Load()
    Dim bRet As Boolean
    Dim nChannel As Long
    
    nChannel = 1
    bRet = LPR_SetImageFormat(False, False, 1, False, 80, 400, True, False, True, nChannel)
    bRet = LPR_InitEx(nChannel)
    bRet = LPR_SetPlateType(False, False, False, False, False, False, False, False, False, nChannel)
    List1.Clear
End Sub

Private Sub Form_Unload(Cancel As Integer)
Dim bRet As Boolean
    Dim nChannel As Long
    
    nChannel = 1
    bRet = LPR_UninitEx(nChannel)
End Sub
