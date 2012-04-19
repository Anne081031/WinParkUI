// testactivexDlg.h : header file
//
//{{AFX_INCLUDES()
#include "smsx.h"
//}}AFX_INCLUDES

#if !defined(AFX_TESTACTIVEXDLG_H__DF149AED_E784_4D59_A6DA_5DE5BAC2087D__INCLUDED_)
#define AFX_TESTACTIVEXDLG_H__DF149AED_E784_4D59_A6DA_5DE5BAC2087D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTestactivexDlg dialog

class CTestactivexDlg : public CDialog
{
// Construction
public:
	CTestactivexDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTestactivexDlg)
	enum { IDD = IDD_TESTACTIVEX_DIALOG };
	CListBox	m_memo;
	CSMSX	m_sms1;
	CString	m_phone;
	CString	m_msg;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestactivexDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTestactivexDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnInit();
	afx_msg void OnOnConnectResultSmsx1(long Status);
	afx_msg void OnSendMsg();
	afx_msg void OnOnSendMsgSmsx1(short Result, long MsgIndex);
	afx_msg void OnOnRecvMsgSmsx1(short MsgCount);
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTACTIVEXDLG_H__DF149AED_E784_4D59_A6DA_5DE5BAC2087D__INCLUDED_)
