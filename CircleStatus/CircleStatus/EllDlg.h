#pragma once


// EllDlg �Ի���

class EllDlg : public CDialogEx
{
	DECLARE_DYNAMIC(EllDlg)

public:
	EllDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~EllDlg();

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
	int x;
	int y;
	afx_msg void OnEnChangeEdit5();
	int rred;
	int ggreen;
	int bblue;
};
