unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, OleCtrls,  ExtCtrls,
  SMSXControl_TLB;

type
  TForm1 = class(TForm)
    Memo1: TMemo;
    GroupBox1: TGroupBox;
    Label1: TLabel;
    Edit1: TEdit;
    Label2: TLabel;
    Edit2: TEdit;
    Button2: TButton;
    Panel1: TPanel;
    Button1: TButton;
    Panel2: TPanel;
    Button3: TButton;
    Button4: TButton;
    Button5: TButton;
    Button6: TButton;
    Edit3: TEdit;
    Label3: TLabel;
    Edit6: TEdit;
    Label4: TLabel;
    Button7: TButton;
    Timer1: TTimer;
    SMSX1: TSMSX;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure SMSX1ConnectResult(Sender: TObject; Status: Integer);
    procedure SMSX1SendMsg(Sender: TObject; Result: Smallint;
      MsgIndex: Integer);
    procedure SMSX1RecvMsg(Sender: TObject; MsgCount: Smallint);
    procedure Button3Click(Sender: TObject);
    procedure Button4Click(Sender: TObject);
    procedure Button5Click(Sender: TObject);
    procedure Button6Click(Sender: TObject);
    procedure Timer1Timer(Sender: TObject);
    procedure SMSX1PinInput(Sender: TObject);
    procedure SMSX1PinError(Sender: TObject);
    procedure SMSX1BeginSend(Sender: TObject; usetime: Smallint;
      const phone, msgtext: WideString);


  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation


{$R *.DFM}

procedure TForm1.Button1Click(Sender: TObject);
begin
  smsx1.init;
  smsx1.SetVM(1);
  smsx1.SetCNMI('1,2,0,2,1'); 
  smsx1.ConnectModem(edit3.text,57600,edit6.text);
  timer1.Enabled:=true;
end;

procedure TForm1.Button2Click(Sender: TObject);
var
  phonenum,content:widestring;
  i:integer;
begin
 phonenum:=edit1.text;
 content:=edit2.text;

 i:=136;
 try
 i:=strtoint(copy(phonenum,1,3));
 except
 end;
 smsx1.SendMsg(phonenum,content,1);
 //memo1.lines.add('ͨ��1��������Ϣ��'+phonenum+',���ݣ�'+content);
end;

procedure TForm1.SMSX1ConnectResult(Sender: TObject; Status: Integer);
begin
  if status=0 then  memo1.lines.add('ͨ��1��GSM MODEM ���ӳɹ�,����ע��������='+inttostr(smsx1.requestcode))
  else memo1.lines.add('ͨ��1��GSM MODEM ����ʧ��');
  memo1.lines.add('sim����:'+smsx1.GetCardID);
end;

procedure TForm1.SMSX1SendMsg(Sender: TObject; Result: Smallint;
  MsgIndex: Integer);
begin
  if result=0 then   memo1.lines.add('ͨ��1����Ϣ���ͳɹ�')
  else  memo1.lines.add('ͨ��1����Ϣ����ʧ��');
end;

procedure TForm1.SMSX1RecvMsg(Sender: TObject; MsgCount: Smallint);
var p1,p2:pchar;
    phone,content:widestring;
    year,month,day,hour,minute,second:integer;
begin
  setlength(phone,13);
  setlength(content,160);
  Smsx1.RecvMsg(phone,content,year,month,day,hour,minute,second);
  memo1.lines.add('ͨ��1���յ�һ����Ϣ:'+'���ԣ�'+phone);
  memo1.lines.add('����:'+content);
end;

procedure TForm1.Button3Click(Sender: TObject);
begin
  smsx1.setsend(true);
end;

procedure TForm1.Button4Click(Sender: TObject);
begin
  smsx1.setsend(false);
end;

procedure TForm1.Button5Click(Sender: TObject);
begin
  smsx1.SetRecv(true);
end;

procedure TForm1.Button6Click(Sender: TObject);
begin
  smsx1.SetRecv(false);
end;

procedure TForm1.Timer1Timer(Sender: TObject);
var r,b:integer;
begin
// smsx1.GetCSQ(r,b);
// memo1.Lines.Add('r='+inttostr(r)+',b='+inttostr(b));
end;

procedure TForm1.SMSX1PinInput(Sender: TObject);
begin
 // memo1.Lines.Add('SIM����Ҫ����pin��');
 // smsx1.InputPin('1234');
end;

procedure TForm1.SMSX1PinError(Sender: TObject);
begin
 // memo1.Lines.Add('pin�����');
end;

procedure TForm1.SMSX1BeginSend(Sender: TObject; usetime: Smallint;
  const phone, msgtext: WideString);
begin
 memo1.lines.add('ͨ��1��������Ϣ��'+phone+',����='+msgtext+',�ϴη���usetime='+inttostr(usetime));
end;

end.
