#pragma once


// EllDlg 对话框

class EllDlg : public CDialogEx
{
	DECLARE_DYNAMIC(EllDlg)

public:
	EllDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~EllDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

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
