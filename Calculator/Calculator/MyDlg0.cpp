// MyDlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Calculator.h"
#include "MyDlg0.h"
#include "afxdialogex.h"
#include"math.h"


// MyDlg0 �Ի���

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


// MyDlg0 ��Ϣ�������


void MyDlg0::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	
	c = a + b;
	UpdateData(false);
}


void MyDlg0::OnDelect()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	c = a - b;
	UpdateData(false);
}


void MyDlg0::OnMultiply()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	c = a * b;
	UpdateData(false);
}


void MyDlg0::OnDivision()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	if (b == 0)
	{
		ps = "��������Ϊ0";
	}
	else c = a / b;
	UpdateData(false);
}


void MyDlg0::OnExtract()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	ps = "���ڵ�һ���༭�������뱻������";
	if (b< 0||a<0)
	{
		ps = "�����������ڵ���0,���ڵ�һ���༭�������뱻������";
		
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	ps = "���ڵ�һ���༭������������";
	if (a==0)
	{
		ps = "�������ܵ���0,���ڵ�һ���༭������������";
		daoShu = "0";
	}
	else {
		daoShu.Format(_T("1/%d"), a);
		c = 0;
	}
	UpdateData(false);
}
