// InOutPaint.cpp : 实现文件
//

#include "stdafx.h"
#include "InOutf.h"
#include "InOutPaint.h"
#include "afxdialogex.h"


// InOutPaint 对话框

IMPLEMENT_DYNAMIC(InOutPaint, CDialogEx)

InOutPaint::InOutPaint(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

InOutPaint::~InOutPaint()
{
}

void InOutPaint::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(InOutPaint, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// InOutPaint 消息处理程序


BOOL InOutPaint::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void InOutPaint::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
}

void InOutPaint::foo(CImage& img, int &sx, int &sy, int &w, int &h)
{
	CRect rect;
	GetDlgItem()
}