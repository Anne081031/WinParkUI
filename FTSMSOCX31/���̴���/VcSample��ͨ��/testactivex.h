// testactivex.h : main header file for the TESTACTIVEX application
//

#if !defined(AFX_TESTACTIVEX_H__A846D4C9_DA41_4BDA_A7C0_ADA8146484DE__INCLUDED_)
#define AFX_TESTACTIVEX_H__A846D4C9_DA41_4BDA_A7C0_ADA8146484DE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTestactivexApp:
// See testactivex.cpp for the implementation of this class
//

class CTestactivexApp : public CWinApp
{
public:
	CTestactivexApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestactivexApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTestactivexApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTACTIVEX_H__A846D4C9_DA41_4BDA_A7C0_ADA8146484DE__INCLUDED_)
