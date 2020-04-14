// AddDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "AddDlg.h"
#include "AddDialog.h"
#include "afxdialogex.h"


// AddDialog 对话框

IMPLEMENT_DYNAMIC(AddDialog, CDialogEx)

AddDialog::AddDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, c(0)
{

}

AddDialog::~AddDialog()
{
}

void AddDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDV_MinMaxInt(pDX, a, -10, 500);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDV_MinMaxInt(pDX, b, -10, 500);
	DDX_Text(pDX, IDC_EDIT3, c);
	DDV_MinMaxInt(pDX, c, -20, 1000);
}


BEGIN_MESSAGE_MAP(AddDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &AddDialog::OnBnClickedButton1)
END_MESSAGE_MAP()


// AddDialog 消息处理程序


void AddDialog::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	c = a + b;
	UpdateData(false);
}
