// MyDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "ShowDocNa.h"
#include "MyDlg.h"
#include "afxdialogex.h"




// MyDlg 对话框

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, edit(_T(""))
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, edit);
	DDX_Control(pDX, IDC_LIST1, LBox);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	
END_MESSAGE_MAP()


// MyDlg 消息处理程序

	


BOOL MyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	LBox.AddString(edit);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
