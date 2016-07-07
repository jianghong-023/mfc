// FirstMFCDlg.h : header file
//

#if !defined(AFX_FIRSTMFCDLG_H__798EB272_6E80_4E15_AEA0_C293F71B29BD__INCLUDED_)
#define AFX_FIRSTMFCDLG_H__798EB272_6E80_4E15_AEA0_C293F71B29BD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CFirstMFCDlg dialog

class CFirstMFCDlg : public CDialog
{
// Construction
public:
	CFirstMFCDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CFirstMFCDlg)
	enum { IDD = IDD_FIRSTMFC_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFirstMFCDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CFirstMFCDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FIRSTMFCDLG_H__798EB272_6E80_4E15_AEA0_C293F71B29BD__INCLUDED_)
