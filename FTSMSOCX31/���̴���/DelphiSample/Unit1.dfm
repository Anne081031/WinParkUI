object Form1: TForm1
  Left = 253
  Top = 207
  Width = 544
  Height = 404
  Caption = #39134#22825#30701#20449#25511#20214#28436#31034#31243#24207
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 0
    Top = 137
    Width = 536
    Height = 240
    Align = alClient
    ImeName = #32043#20809#25340#38899#36755#20837#27861
    Lines.Strings = (
      '')
    TabOrder = 0
  end
  object GroupBox1: TGroupBox
    Left = 0
    Top = 41
    Width = 536
    Height = 48
    Align = alTop
    TabOrder = 1
    object Label1: TLabel
      Left = 8
      Top = 24
      Width = 54
      Height = 13
      Caption = #25163#26426#21495#30721'  '
    end
    object Label2: TLabel
      Left = 168
      Top = 24
      Width = 30
      Height = 13
      Caption = #20869#23481'  '
    end
    object Edit1: TEdit
      Left = 64
      Top = 16
      Width = 97
      Height = 21
      ImeName = #32043#20809#25340#38899#36755#20837#27861
      TabOrder = 0
    end
    object Edit2: TEdit
      Left = 208
      Top = 16
      Width = 193
      Height = 21
      ImeName = #32043#20809#25340#38899#36755#20837#27861
      TabOrder = 1
    end
    object Button2: TButton
      Left = 424
      Top = 16
      Width = 65
      Height = 25
      Caption = #21457#36865#28040#24687
      TabOrder = 2
      OnClick = Button2Click
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 536
    Height = 41
    Align = alTop
    TabOrder = 2
    object Label3: TLabel
      Left = 48
      Top = 16
      Width = 39
      Height = 13
      Caption = #20018#21475#65306' '
    end
    object Label4: TLabel
      Left = 336
      Top = 16
      Width = 36
      Height = 13
      Caption = #35775#38382#30721
    end
    object Button1: TButton
      Left = 200
      Top = 8
      Width = 129
      Height = 25
      Caption = #21021#22987#21270'GSM MODEM'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Edit3: TEdit
      Left = 86
      Top = 12
      Width = 97
      Height = 21
      ImeName = #32043#20809#25340#38899#36755#20837#27861
      TabOrder = 1
      Text = 'COM1'
    end
    object Edit6: TEdit
      Left = 384
      Top = 12
      Width = 137
      Height = 21
      ImeName = #20013#25991' ('#31616#20307') - '#24494#36719#25340#38899
      TabOrder = 2
    end
    object SMSX1: TSMSX
      Left = 8
      Top = 8
      Width = 75
      Height = 25
      TabOrder = 3
      OnConnectResult = SMSX1ConnectResult
      OnRecvMsg = SMSX1RecvMsg
      OnSendMsg = SMSX1SendMsg
      OnPinInput = SMSX1PinInput
      OnPinError = SMSX1PinError
      OnBeginSend = SMSX1BeginSend
      ControlData = {
        545046300754427574746F6E00044C656674020803546F700208055769647468
        024B0648656967687402190000}
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 89
    Width = 536
    Height = 48
    Align = alTop
    TabOrder = 3
    object Button3: TButton
      Left = 8
      Top = 8
      Width = 81
      Height = 25
      Caption = #21551#21160#21457#36865#21151#33021
      TabOrder = 0
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 96
      Top = 8
      Width = 83
      Height = 25
      Caption = #31105#27490#21457#36865#21151#33021
      TabOrder = 1
      OnClick = Button4Click
    end
    object Button5: TButton
      Left = 312
      Top = 8
      Width = 83
      Height = 25
      Caption = #21551#21160#25509#25910#21151#33021
      TabOrder = 2
      OnClick = Button5Click
    end
    object Button6: TButton
      Left = 408
      Top = 8
      Width = 97
      Height = 25
      Caption = #31105#27490#25509#25910#21151#33021
      TabOrder = 3
      OnClick = Button6Click
    end
    object Button7: TButton
      Left = 200
      Top = 16
      Width = 75
      Height = 25
      Caption = 'Button7'
      TabOrder = 4
    end
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 32
    Top = 16
  end
end
