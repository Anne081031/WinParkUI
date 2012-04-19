//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "SMSXControl_OCX"
#pragma link "SMSXControl_OCX"
#pragma link "SMSXControl_OCX"
#pragma link "SMSXControl_OCX"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
  WideString PortName,AccessCode;
  SMSX1->Init();
  PortName="COM1";
  AccessCode="106093238214028" ;
//  SMSX1->ConnectModem(BSTR("COM4"),57600,BSTR("12345"));
  SMSX1->ConnectModem(PortName,57600,AccessCode);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::SMSX1ConnectResult(TObject *Sender, int Status)
{
 if (Status==0) Memo1->Lines->Add("GSM Modem连接成功");
 else Memo1->Lines->Add("GSM Modem断开连接");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
  WideString PhoneNum,Content;
  PhoneNum=Edit1->Text;//.c_str();
//  "13194988075";
  Content=Edit2->Text;//.c_str();
  //"你好";
  SMSX1->SendMsg(PhoneNum,Content,123);
}

void __fastcall TForm1::SMSX1SendMsg(TObject *Sender, short Result,
      long MsgIndex)
{
  if (Result==0)  Memo1->Lines->Add("消息发送成功");
  if (Result==-1)  Memo1->Lines->Add("消息发送失败");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  SMSX1->DisconnectModem(); 
}
//---------------------------------------------------------------------------

