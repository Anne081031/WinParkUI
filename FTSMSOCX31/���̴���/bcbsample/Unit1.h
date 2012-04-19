//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "SMSXControl1_OCX.h"
#include <OleCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMemo *Memo1;
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TEdit *Edit1;
        TLabel *Label2;
        TEdit *Edit2;
        TButton *Button2;
        TPanel *Panel1;
        TButton *Button1;
        TTimer *Timer1;
        TSMSX *SMSX1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall SMSX1ConnectResult(TObject *Sender, int Status);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall SMSX1RecvMsg(TObject *Sender, short MsgCount);
        void __fastcall SMSX1SendMsg(TObject *Sender, short Result,
          long MsgIndex);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
