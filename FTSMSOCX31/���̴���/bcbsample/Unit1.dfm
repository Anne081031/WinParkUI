object Form1: TForm1
  Left = 192
  Top = 107
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
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 0
    Top = 89
    Width = 536
    Height = 259
    Align = alClient
    ImeName = '紫光拼音输入法'
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
      Caption = '手机号   '
    end
    object Label2: TLabel
      Left = 200
      Top = 16
      Width = 24
      Height = 13
      Caption = '内容'
    end
    object Edit1: TEdit
      Left = 64
      Top = 16
      Width = 129
      Height = 21
      ImeName = '紫光拼音输入法'
      TabOrder = 0
    end
    object Edit2: TEdit
      Left = 240
      Top = 16
      Width = 153
      Height = 21
      ImeName = '紫光拼音输入法'
      TabOrder = 1
      Text = '您好，这是测试消息'
    end
    object Button2: TButton
      Left = 416
      Top = 16
      Width = 97
      Height = 25
      Caption = '发送测试消息'
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
      Caption = '初始化，连接MODEM'
      TabOrder = 0
      OnClick = Button1Click
    end
    object SMSX1: TSMSX
      Left = 8
      Top = 0
      Width = 75
      Height = 25
      TabOrder = 1
      Visible = False
      OnConnectResult = SMSX1ConnectResult
      OnRecvMsg = SMSX1RecvMsg
      OnSendMsg = SMSX1SendMsg
      ControlData = {
        545046300754427574746F6E00044C656674020803546F700200055769647468
        024B0648656967687402190000}
    end
  end
  object Timer1: TTimer
    Left = 424
    Top = 8
  end
end
