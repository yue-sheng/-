#pragma once


// InOutPaint �Ի���

class InOutPaint : public CDialogEx
{
	DECLARE_DYNAMIC(InOutPaint)

public:
	InOutPaint(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~InOutPaint();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	void foo(CImage& img, int &sx, int &sy, int& w, int &h);
};
