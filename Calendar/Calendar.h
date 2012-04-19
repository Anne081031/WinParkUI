/***************************************************************************
   �¿�����ЩԴ������ֵ�:
       ���!
       �Ȿ������Ϊһ����ҵPDA��Ʒ��������������,�����ֲ��PC����, �����㷨
   �����ݲ������ô�C++д��,���漰MFC,���еĴ��붼���Զ̽�ʡ�洢�ռ�Ϊ��ҪĿ
   ��.
	   �ܸ��������Щ��������Ȥ,��������⸴�ƺ�ʹ��Щ����,Ψһ��һ��СС��
   Ը��:����ʹ�ú͸��Ƹ�����ʱ,����ע����Щ��������:-)���������Ҳ�Ͱ���,��
   ������ݿ����������������������ҳ������ȥ�ġ�
	   �������ʲô�õ��������Mail���ҡ�

       wangfei@hanwang.com.cn
	   ��
	   wangfei@engineer.com.cn
                                                                 2000��3��
****************************************************************************/
#if !defined(AFX_CALENDAR1_H__FD9A6DAF_8C3C_493C_AAD4_612134D8F6D4__INCLUDED_)
#define AFX_CALENDAR1_H__FD9A6DAF_8C3C_493C_AAD4_612134D8F6D4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Calendar1.h : header file
/////////////////////////////////////////////////////////////////////////////
// CCalendar window
extern const WORD START_YEAR;
extern const WORD END_YEAR;

//define user message select changed
#define UM_SELCHANGE  (WM_USER+101)

class CCalendar : public CWnd
{
private:
	WORD    m_iYear, m_iMonth, m_iDay;
	CBitmap m_oBitMapList[42];
	CMenu   m_oPopMenu;

public:
	COLORREF m_dwBackColor,  m_dwForeColor;
	COLORREF m_dwSelColor,   m_dwSelForeColor;
	COLORREF m_dwTitleBkColor, m_dwTitleColor;

public:
	CCalendar(WORD iYear, WORD iMonth, WORD iDay);
	CCalendar();
	virtual BOOL Create(RECT &rect, CWnd * pParentWnd, UINT nID);

public:
	WORD GetYear(){return m_iYear;}
	WORD GetMonth(){return m_iMonth;}
	WORD GetDay(){return m_iDay;}
	void GetDate(WORD &iYear, WORD &iMonth, WORD &iDay);
	BOOL SetDate(WORD iYear, WORD iMonth, WORD iDay);

protected:
	CButton m_obutToday;
	//{{AFX_MSG(CCalendar)
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	//}}AFX_MSG
	afx_msg void OnTitleBkColor();
	afx_msg void OnTitleColor();
	afx_msg void OnSelColor();
	afx_msg void OnForeColor();
	DECLARE_MESSAGE_MAP()


public:
	//�ж�iYear�ǲ�������
    static BOOL IsLeapYear(WORD iYear)
	{return !(iYear%4)&&(iYear%100) || !(iYear%400);}

	//����iYear,iMonth,iDay��Ӧ�����ڼ� 1��1��1�� --- 65535��12��31��
	static WORD WeekDay(WORD iYear, WORD iMonth, WORD iDay);

	//����iYear��iMonth�µ����� 1��1�� --- 65535��12��
	static WORD MonthDays(WORD iYear, WORD iMonth);

	//��������iLunarYer������iLunarMonth�µ����������iLunarMonthΪ���£�
	//����Ϊ�ڶ���iLunarMonth�µ��������������Ϊ0 
	// 1901��1��---2050��12��
	static LONG LunarMonthDays(WORD iLunarYear, WORD iLunarMonth);

	//��������iLunarYear���������
	// 1901��1��---2050��12��
	static WORD LunarYearDays(WORD iLunarYear);

	//��������iLunarYear��������·ݣ���û�з���0
	// 1901��1��---2050��12��
	static WORD GetLeapMonth(WORD iLunarYear);

	//��iYear���ʽ������ɼ��귨��ʾ���ַ���
	static void FormatLunarYear(WORD  iYear, char *pBuffer);

	//��iMonth��ʽ���������ַ���
	static void FormatMonth(WORD iMonth, char *pBuffer, BOOL bLunar = TRUE);

    //��iDay��ʽ���������ַ���
	static void FormatLunarDay(WORD  iDay, char *pBuffer);

	//���㹫���������ڼ���������  1��1��1�� --- 65535��12��31��
	static LONG CalcDateDiff(WORD iEndYear, WORD iEndMonth, WORD iEndDay,
		                     WORD iStartYear = START_YEAR, 
							 WORD iStartMonth =1, WORD iStartDay =1);

	//���㹫��iYear��iMonth��iDay�ն�Ӧ����������,���ض�Ӧ���������� 0-24
	//1901��1��1��---2050��12��31��
	static WORD GetLunarDate(WORD iYear, WORD iMonth, WORD iDay,
		                     WORD &iLunarYear, WORD &iLunarMonth, WORD &iLunarDay);

public:
	virtual ~CCalendar();

private:
	void   l_InitData();

	//�����1901��1��1�չ�iSpanDays������������
	static void   l_CalcLunarDate(WORD &iYear, WORD &iMonth ,WORD &iDay, LONG iSpanDays);
    //���㹫��iYear��iMonth��iDay�ն�Ӧ�Ľ��� 0-24��0���ǽ���
	static WORD   l_GetLunarHolDay(WORD iYear, WORD iMonth, WORD iDay);

	WORD l_CalcSelectDay(POINT * pt);
	void l_PaintTitle(CPaintDC &dc);
	void l_PaintDate(CPaintDC &dc);
	inline void l_PaintOneDay(CPaintDC &dc, CDC &imgdc, WORD &iDay, 
		                        WORD &iLunarYear,
		                        WORD &iLunarMonth, WORD &iLuanrDay, 
								LONG startx, LONG starty);
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALENDAR1_H__FD9A6DAF_8C3C_493C_AAD4_612134D8F6D4__INCLUDED_)
