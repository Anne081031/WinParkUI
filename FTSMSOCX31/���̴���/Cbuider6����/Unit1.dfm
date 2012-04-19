object Form1: TForm1
  Left = 246
  Top = 217
  Width = 544
  Height = 375
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 0
    Top = 89
    Width = 536
    Height = 252
    Align = alClient
    ImeName = #32043#20809#25340#38899#36755#20837#27861
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
      Left = 16
      Top = 16
      Width = 45
      Height = 13
      Caption = #25163#26426#21495'   '
    end
    object Label2: TLabel
      Left = 200
      Top = 16
      Width = 24
      Height = 13
      Caption = #20869#23481
    end
    object Edit1: TEdit
      Left = 64
      Top = 16
      Width = 129
      Height = 21
      ImeName = #32043#20809#25340#38899#36755#20837#27861
      TabOrder = 0
    end
    object Edit2: TEdit
      Left = 240
      Top = 16
      Width = 153
      Height = 21
      ImeName = #32043#20809#25340#38899#36755#20837#27861
      TabOrder = 1
      Text = #24744#22909#65292#36825#26159#27979#35797#28040#24687
    end
    object Button2: TButton
      Left = 416
      Top = 16
      Width = 97
      Height = 25
      Caption = #21457#36865#27979#35797#28040#24687
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
    Caption = 'Panel1'
    TabOrder = 2
    object Button1: TButton
      Left = 128
      Top = 8
      Width = 209
      Height = 25
      Caption = #21021#22987#21270#65292#36830#25509'MODEM'
      TabOrder = 0
      OnClick = Button1Click
    end
    object SMSX1: TSMSX
      Left = 16
      Top = 8
      Width = 75
      Height = 25
      TabOrder = 1
      OnConnectResult = SMSX1ConnectResult
      OnSendMsg = SMSX1SendMsg
      ControlData = {
        545046300754427574746F6E00044C656674021003546F700208055769647468
        024B0648656967687402190000}
    end
  end
  object Timer1: TTimer
    Left = 424
    Top = 8
  end
end
