#pragma once


// MyDlg0 �Ի���

class MyDlg0 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg0)

public:
	MyDlg0(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDlg0();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int a;
	int b;
	int c;
	afx_msg void OnBnClickedButton1();
	CString ps;
	afx_msg void OnDelect();
	afx_msg void OnMultiply();
	afx_msg void OnDivision();
	afx_msg void OnExtract();
	afx_msg void OnBnClickedButton6();
	CString daoShu;
};
