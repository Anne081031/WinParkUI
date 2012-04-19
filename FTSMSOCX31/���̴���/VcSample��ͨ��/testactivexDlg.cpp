// testactivexDlg.cpp : implementation file
//

#include "stdafx.h"
#include "testactivex.h"
#include "testactivexDlg.h"
#include <comutil.h>


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestactivexDlg dialog

CTestactivexDlg::CTestactivexDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTestactivexDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTestactivexDlg)
	m_phone = _T("");
	m_msg = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTestactivexDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTestactivexDlg)
	DDX_Control(pDX, IDC_LIST1, m_memo);
	DDX_Control(pDX, IDC_SMSX1, m_sms1);
	DDX_Text(pDX, IDC_EDIT1, m_phone);
	DDX_Text(pDX, IDC_EDIT2, m_msg);
	DDX_Control(pDX, IDC_SMSX2, m_sms2);
	DDX_Control(pDX, IDC_SMSX3, m_sms3);
	DDX_Control(pDX, IDC_SMSX4, m_sms4);
	DDX_Control(pDX, IDC_SMSX5, m_sms5);
	DDX_Control(pDX, IDC_SMSX6, m_sms6);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTestactivexDlg, CDialog)
	//{{AFX_MSG_MAP(CTestactivexDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnInit)
	ON_BN_CLICKED(IDC_BUTTON2, OnSendMsg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestactivexDlg message handlers

BOOL CTestactivexDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CTestactivexDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTestactivexDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CTestactivexDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

CString  port1="COM1";
CString  port2="COM2";
CString  port3="COM3";
CString  port4="COM4";
CString  port5="COM5";
CString  port6="COM6";

CString  ac1="123456789012345";
CString  ac2="123456789012345";
CString  ac3="123456789012345";
CString  ac4="123456789012345";
CString  ac5="123456789012345";
CString  ac6="123456789012345";

void CTestactivexDlg::OnInit() 
{
	// TODO: Add your control notification handler code here
	m_sms1.Init();	m_sms1.ConnectModem(port1,57600,ac1);
	
	m_sms2.Init();	m_sms2.ConnectModem(port2,57600,ac2);
	
	m_sms3.Init();  m_sms3.ConnectModem(port3,57600,ac3);
	
	m_sms4.Init();  m_sms4.ConnectModem(port4,57600,ac4);

	m_sms5.Init();  m_sms5.ConnectModem(port5,57600,ac5);
	
	m_sms6.Init();  m_sms6.ConnectModem(port6,57600,ac6);

}

BEGIN_EVENTSINK_MAP(CTestactivexDlg, CDialog)
    //{{AFX_EVENTSINK_MAP(CTestactivexDlg)
	ON_EVENT(CTestactivexDlg, IDC_SMSX1, 4 /* OnConnectResult */, OnOnConnectResultSmsx1, VTS_I4)
	ON_EVENT(CTestactivexDlg, IDC_SMSX1, 6 /* OnSendMsg */, OnOnSendMsgSmsx1, VTS_I2 VTS_I4)
	ON_EVENT(CTestactivexDlg, IDC_SMSX1, 5 /* OnRecvMsg */, OnOnRecvMsgSmsx1, VTS_I2)
	ON_EVENT(CTestactivexDlg, IDC_SMSX2, 4 /* OnConnectResult */, OnOnConnectResultSmsx2, VTS_I4)
	ON_EVENT(CTestactivexDlg, IDC_SMSX3, 4 /* OnConnectResult */, OnOnConnectResultSmsx3, VTS_I4)
	ON_EVENT(CTestactivexDlg, IDC_SMSX4, 4 /* OnConnectResult */, OnOnConnectResultSmsx4, VTS_I4)
	ON_EVENT(CTestactivexDlg, IDC_SMSX5, 4 /* OnConnectResult */, OnOnConnectResultSmsx5, VTS_I4)
	ON_EVENT(CTestactivexDlg, IDC_SMSX6, 4 /* OnConnectResult */, OnOnConnectResultSmsx6, VTS_I4)
	ON_EVENT(CTestactivexDlg, IDC_SMSX2, 5 /* OnRecvMsg */, OnOnRecvMsgSmsx2, VTS_I2)
	ON_EVENT(CTestactivexDlg, IDC_SMSX3, 5 /* OnRecvMsg */, OnOnRecvMsgSmsx3, VTS_I2)
	ON_EVENT(CTestactivexDlg, IDC_SMSX4, 5 /* OnRecvMsg */, OnOnRecvMsgSmsx4, VTS_I2)
	ON_EVENT(CTestactivexDlg, IDC_SMSX5, 5 /* OnRecvMsg */, OnOnRecvMsgSmsx5, VTS_I2)
	ON_EVENT(CTestactivexDlg, IDC_SMSX6, 5 /* OnRecvMsg */, OnOnRecvMsgSmsx6, VTS_I2)
	ON_EVENT(CTestactivexDlg, IDC_SMSX2, 6 /* OnSendMsg */, OnOnSendMsgSmsx2, VTS_I2 VTS_I4)
	ON_EVENT(CTestactivexDlg, IDC_SMSX3, 6 /* OnSendMsg */, OnOnSendMsgSmsx3, VTS_I2 VTS_I4)
	ON_EVENT(CTestactivexDlg, IDC_SMSX4, 6 /* OnSendMsg */, OnOnSendMsgSmsx4, VTS_I2 VTS_I4)
	ON_EVENT(CTestactivexDlg, IDC_SMSX5, 6 /* OnSendMsg */, OnOnSendMsgSmsx5, VTS_I2 VTS_I4)
	ON_EVENT(CTestactivexDlg, IDC_SMSX6, 6 /* OnSendMsg */, OnOnSendMsgSmsx6, VTS_I2 VTS_I4)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()




void CTestactivexDlg::OnOnConnectResultSmsx1(long Status) 
{
	// TODO: Add your control notification handler code here
		if (Status==0) m_memo.AddString("GSM Modem1 初始化成功!");
    	else   m_memo.AddString("GSM Modem1 初始化失败!");
}

void CTestactivexDlg::OnSendMsg() 
{
	// TODO: Add your control notification handler code here
	char tmpbuf[200];
	int i,j;
	UpdateData(true);
    	
	//判断那个通道最空闲,用最空闲的那个通道发送短信
	i=1000000; j=1;
	if (i>m_sms1.SendListCount()){
		 i=m_sms1.SendListCount();j=1;
	}
	if (i>m_sms2.SendListCount()) {
		 i=m_sms2.SendListCount();j=2;
	}
	if (i>m_sms3.SendListCount()) {
		 i=m_sms3.SendListCount();j=3;
	}
	if (i>m_sms4.SendListCount()) {
		 i=m_sms4.SendListCount();j=4;
	}
	if (i>m_sms5.SendListCount()) {
		 i=m_sms5.SendListCount();j=5;
	}
	if (i>m_sms6.SendListCount()) {
		 i=m_sms6.SendListCount();j=6;
	}
    
	if (j==1) {
	 sprintf(tmpbuf,"gsm modem1发送短信到%s,内容:%s",m_phone,m_msg);
	 m_memo.AddString(tmpbuf);	
	 m_sms1.SendMsg(m_phone,m_msg,0);
	}
	if (j==2) {
	 sprintf(tmpbuf,"gsm modem2发送短信到%s,内容:%s",m_phone,m_msg);
	 m_memo.AddString(tmpbuf);	
	 m_sms2.SendMsg(m_phone,m_msg,0);
	}
	if (j==3) {
	 sprintf(tmpbuf,"gsm modem3发送短信到%s,内容:%s",m_phone,m_msg);
	 m_memo.AddString(tmpbuf);	
	 m_sms3.SendMsg(m_phone,m_msg,0);
	}
	if (j==4) {
	 sprintf(tmpbuf,"gsm modem4发送短信到%s,内容:%s",m_phone,m_msg);
	 m_memo.AddString(tmpbuf);	
	 m_sms4.SendMsg(m_phone,m_msg,0);
	}
	if (j==5) {
	 sprintf(tmpbuf,"gsm modem5发送短信到%s,内容:%s",m_phone,m_msg);
	 m_memo.AddString(tmpbuf);	
	 m_sms5.SendMsg(m_phone,m_msg,0);
	}
	if (j==6) {
	 sprintf(tmpbuf,"gsm modem6发送短信到%s,内容:%s",m_phone,m_msg);
	 m_memo.AddString(tmpbuf);	
	 m_sms6.SendMsg(m_phone,m_msg,0);
	}


}

void CTestactivexDlg::OnOnSendMsgSmsx1(short Result, long MsgIndex) 
{
	// TODO: Add your control notification handler code here
	if (Result==0)	m_memo.AddString("gsm modem1短信发送成功!");	
	else  m_memo.AddString("gsm modem1短信发送失败!");	
}

void CTestactivexDlg::OnOnRecvMsgSmsx1(short MsgCount) 
{
	// TODO: Add your control notification handler code here
	  BSTR phone=::SysAllocStringByteLen("13194988075",15);
      BSTR content=::SysAllocStringByteLen("",160);

	  long year,month,day,hour,minute,second;
	  char tmpbuf[450];
	  char *pPhone,*pContent;


	  m_sms1.RecvMsg((BSTR *)&phone,(BSTR *)&content,&year,&month,&day,&hour,&minute,&second);
      
	  pPhone=_com_util::ConvertBSTRToString(phone);
	  sprintf(tmpbuf,"gsm modem1 收到一条信息,来自:%s",pPhone);
      m_memo.AddString(tmpbuf);

	  pContent=_com_util::ConvertBSTRToString(content);
      sprintf(tmpbuf,"内容:%s",pContent);
      m_memo.AddString(tmpbuf);

	  delete pPhone; 
	  pPhone=NULL;

	  delete pContent;  
	  pContent=NULL;
}

void CTestactivexDlg::OnOnConnectResultSmsx2(long Status) 
{
	// TODO: Add your control notification handler code here
		if (Status==0) m_memo.AddString("GSM Modem2 初始化成功!");
    	else   m_memo.AddString("GSM Modem2 初始化失败!");

}

void CTestactivexDlg::OnOnConnectResultSmsx3(long Status) 
{
	// TODO: Add your control notification handler code here
		if (Status==0) m_memo.AddString("GSM Modem3 初始化成功!");
    	else   m_memo.AddString("GSM Modem3 初始化失败!");	
}

void CTestactivexDlg::OnOnConnectResultSmsx4(long Status) 
{
	// TODO: Add your control notification handler code here
		if (Status==0) m_memo.AddString("GSM Modem4 初始化成功!");
    	else   m_memo.AddString("GSM Modem4 初始化失败!");
	
}

void CTestactivexDlg::OnOnConnectResultSmsx5(long Status) 
{
	// TODO: Add your control notification handler code here
		if (Status==0) m_memo.AddString("GSM Modem5 初始化成功!");
    	else   m_memo.AddString("GSM Modem5 初始化失败!");
	
}

void CTestactivexDlg::OnOnConnectResultSmsx6(long Status) 
{
	// TODO: Add your control notification handler code here
		if (Status==0) m_memo.AddString("GSM Modem6 初始化成功!");
    	else   m_memo.AddString("GSM Modem6 初始化失败!");
	
}

void CTestactivexDlg::OnOnRecvMsgSmsx2(short MsgCount) 
{
	// TODO: Add your control notification handler code here
	  BSTR phone=::SysAllocStringByteLen("13194988075",15);
      BSTR content=::SysAllocStringByteLen("",160);

	  long year,month,day,hour,minute,second;
	  char tmpbuf[450];
	  char *pPhone,*pContent;


	  m_sms1.RecvMsg((BSTR *)&phone,(BSTR *)&content,&year,&month,&day,&hour,&minute,&second);
      
	  pPhone=_com_util::ConvertBSTRToString(phone);
	  sprintf(tmpbuf,"gsm modem2 收到一条信息,来自:%s",pPhone);
      m_memo.AddString(tmpbuf);

	  pContent=_com_util::ConvertBSTRToString(content);
      sprintf(tmpbuf,"内容:%s",pContent);
      m_memo.AddString(tmpbuf);

	  delete pPhone; 
	  pPhone=NULL;

	  delete pContent;  
	  pContent=NULL;
	
}

void CTestactivexDlg::OnOnRecvMsgSmsx3(short MsgCount) 
{
	// TODO: Add your control notification handler code here
	  BSTR phone=::SysAllocStringByteLen("13194988075",15);
      BSTR content=::SysAllocStringByteLen("",160);

	  long year,month,day,hour,minute,second;
	  char tmpbuf[450];
	  char *pPhone,*pContent;


	  m_sms1.RecvMsg((BSTR *)&phone,(BSTR *)&content,&year,&month,&day,&hour,&minute,&second);
      
	  pPhone=_com_util::ConvertBSTRToString(phone);
	  sprintf(tmpbuf,"gsm modem3 收到一条信息,来自:%s",pPhone);
      m_memo.AddString(tmpbuf);

	  pContent=_com_util::ConvertBSTRToString(content);
      sprintf(tmpbuf,"内容:%s",pContent);
      m_memo.AddString(tmpbuf);

	  delete pPhone; 
	  pPhone=NULL;

	  delete pContent;  
	  pContent=NULL;
	
	
}

void CTestactivexDlg::OnOnRecvMsgSmsx4(short MsgCount) 
{
	// TODO: Add your control notification handler code here
	  BSTR phone=::SysAllocStringByteLen("13194988075",15);
      BSTR content=::SysAllocStringByteLen("",160);

	  long year,month,day,hour,minute,second;
	  char tmpbuf[450];
	  char *pPhone,*pContent;


	  m_sms1.RecvMsg((BSTR *)&phone,(BSTR *)&content,&year,&month,&day,&hour,&minute,&second);
      
	  pPhone=_com_util::ConvertBSTRToString(phone);
	  sprintf(tmpbuf,"gsm modem4 收到一条信息,来自:%s",pPhone);
      m_memo.AddString(tmpbuf);

	  pContent=_com_util::ConvertBSTRToString(content);
      sprintf(tmpbuf,"内容:%s",pContent);
      m_memo.AddString(tmpbuf);

	  delete pPhone; 
	  pPhone=NULL;

	  delete pContent;  
	  pContent=NULL;
	
	
}

void CTestactivexDlg::OnOnRecvMsgSmsx5(short MsgCount) 
{
	// TODO: Add your control notification handler code here
	  BSTR phone=::SysAllocStringByteLen("13194988075",15);
      BSTR content=::SysAllocStringByteLen("",160);

	  long year,month,day,hour,minute,second;
	  char tmpbuf[450];
	  char *pPhone,*pContent;


	  m_sms1.RecvMsg((BSTR *)&phone,(BSTR *)&content,&year,&month,&day,&hour,&minute,&second);
      
	  pPhone=_com_util::ConvertBSTRToString(phone);
	  sprintf(tmpbuf,"gsm modem5 收到一条信息,来自:%s",pPhone);
      m_memo.AddString(tmpbuf);

	  pContent=_com_util::ConvertBSTRToString(content);
      sprintf(tmpbuf,"内容:%s",pContent);
      m_memo.AddString(tmpbuf);

	  delete pPhone; 
	  pPhone=NULL;

	  delete pContent;  
	  pContent=NULL;
	
	
}

void CTestactivexDlg::OnOnRecvMsgSmsx6(short MsgCount) 
{
	// TODO: Add your control notification handler code here
	  BSTR phone=::SysAllocStringByteLen("13194988075",15);
      BSTR content=::SysAllocStringByteLen("",160);

	  long year,month,day,hour,minute,second;
	  char tmpbuf[450];
	  char *pPhone,*pContent;


	  m_sms1.RecvMsg((BSTR *)&phone,(BSTR *)&content,&year,&month,&day,&hour,&minute,&second);
      
	  pPhone=_com_util::ConvertBSTRToString(phone);
	  sprintf(tmpbuf,"gsm modem6 收到一条信息,来自:%s",pPhone);
      m_memo.AddString(tmpbuf);

	  pContent=_com_util::ConvertBSTRToString(content);
      sprintf(tmpbuf,"内容:%s",pContent);
      m_memo.AddString(tmpbuf);

	  delete pPhone; 
	  pPhone=NULL;

	  delete pContent;  
	  pContent=NULL;
	
	
}

void CTestactivexDlg::OnOnSendMsgSmsx2(short Result, long MsgIndex) 
{
	// TODO: Add your control notification handler code here
	if (Result==0)	m_memo.AddString("gsm modem2短信发送成功!");	
	else  m_memo.AddString("gsm modem2短信发送失败!");	
	
}

void CTestactivexDlg::OnOnSendMsgSmsx3(short Result, long MsgIndex) 
{
	if (Result==0)	m_memo.AddString("gsm modem3短信发送成功!");	
	else  m_memo.AddString("gsm modem3短信发送失败!");	
	
}

void CTestactivexDlg::OnOnSendMsgSmsx4(short Result, long MsgIndex) 
{
	if (Result==0)	m_memo.AddString("gsm modem4短信发送成功!");	
	else  m_memo.AddString("gsm modem4短信发送失败!");	
	
}

void CTestactivexDlg::OnOnSendMsgSmsx5(short Result, long MsgIndex) 
{
	// TODO: Add your control notification handler code here
	if (Result==0)	m_memo.AddString("gsm modem5短信发送成功!");	
	else  m_memo.AddString("gsm modem5短信发送失败!");	
	
}

void CTestactivexDlg::OnOnSendMsgSmsx6(short Result, long MsgIndex) 
{
	// TODO: Add your control notification handler code here
	if (Result==0)	m_memo.AddString("gsm modem6短信发送成功!");	
	else  m_memo.AddString("gsm modem6短信发送失败!");		
}
