#pragma once
#include "afxwin.h"


// SpDlg �Ի���

class SpDlg : public CDialogEx
{
	DECLARE_DYNAMIC(SpDlg)

public:
	SpDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SpDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString a;
	CString b;
	CButton swap;
	afx_msg void OnBnClickedButton1();
};
