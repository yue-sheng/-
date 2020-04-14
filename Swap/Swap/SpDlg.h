#pragma once
#include "afxwin.h"


// SpDlg 对话框

class SpDlg : public CDialogEx
{
	DECLARE_DYNAMIC(SpDlg)

public:
	SpDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~SpDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString a;
	CString b;
	CButton swap;
	afx_msg void OnBnClickedButton1();
};
