#pragma once


// InOutPaint 对话框

class InOutPaint : public CDialogEx
{
	DECLARE_DYNAMIC(InOutPaint)

public:
	InOutPaint(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~InOutPaint();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	void foo(CImage& img, int &sx, int &sy, int& w, int &h);
};
