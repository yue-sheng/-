// EllDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "CircleStatus.h"
#include "EllDlg.h"
#include "afxdialogex.h"


// EllDlg 对话框

IMPLEMENT_DYNAMIC(EllDlg, CDialogEx)

EllDlg::EllDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, x(0)
	, y(0)
	, rred(0)
	, ggreen(0)
	, bblue(0)
{

}

EllDlg::~EllDlg()
{
}

void EllDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, x);
	DDX_Text(pDX, IDC_EDIT4, y);
	DDX_Text(pDX, IDC_EDIT5, rred);
	DDX_Text(pDX, IDC_EDIT6, ggreen);
	DDX_Text(pDX, IDC_EDIT7, bblue);
}


BEGIN_MESSAGE_MAP(EllDlg, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT5, &EllDlg::OnEnChangeEdit5)
END_MESSAGE_MAP()


// EllDlg 消息处理程序


void EllDlg::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
