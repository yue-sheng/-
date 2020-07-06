// MyDlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "Calculator.h"
#include "MyDlg0.h"
#include "afxdialogex.h"
#include"math.h"


// MyDlg0 对话框

IMPLEMENT_DYNAMIC(MyDlg0, CDialogEx)

MyDlg0::MyDlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, c(0)
	, ps(_T(""))
	, daoShu(_T(""))
{

}

MyDlg0::~MyDlg0()
{
}

void MyDlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDV_MinMaxInt(pDX, a, -100, 800);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDV_MinMaxInt(pDX, b, -100, 800);
	DDX_Text(pDX, IDC_EDIT3, c);
	DDV_MinMaxInt(pDX, c, -800, 1600);
	DDX_Text(pDX, IDC_EDIT4, ps);
	DDX_Text(pDX, IDC_EDIT5, daoShu);
}


BEGIN_MESSAGE_MAP(MyDlg0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg0::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &MyDlg0::OnDelect)
	ON_BN_CLICKED(IDC_BUTTON3, &MyDlg0::OnMultiply)
	ON_BN_CLICKED(IDC_BUTTON4, &MyDlg0::OnDivision)
	ON_BN_CLICKED(IDC_BUTTON5, &MyDlg0::OnExtract)
	ON_BN_CLICKED(IDC_BUTTON6, &MyDlg0::OnBnClickedButton6)
END_MESSAGE_MAP()


// MyDlg0 消息处理程序


void MyDlg0::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	
	c = a + b;
	UpdateData(false);
}


void MyDlg0::OnDelect()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	c = a - b;
	UpdateData(false);
}


void MyDlg0::OnMultiply()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	c = a * b;
	UpdateData(false);
}


void MyDlg0::OnDivision()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	if (b == 0)
	{
		ps = "除数不能为0";
	}
	else c = a / b;
	UpdateData(false);
}


void MyDlg0::OnExtract()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	ps = "请在第一个编辑框内输入被开方数";
	if (b< 0||a<0)
	{
		ps = "被开方数大于等于0,请在第一个编辑框内输入被开方数";
		
		c = 0;
	}
	else {
		c = sqrt(a);
		b = 0;
	}
	
	UpdateData(false);
}


void MyDlg0::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	ps = "请在第一个编辑框内输入整数";
	if (a==0)
	{
		ps = "整数不能等于0,请在第一个编辑框内输入整数";
		daoShu = "0";
	}
	else {
		daoShu.Format(_T("1/%d"), a);
		c = 0;
	}
	UpdateData(false);
}
