// SpDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Swap.h"
#include "SpDlg.h"
#include "afxdialogex.h"


// SpDlg �Ի���

IMPLEMENT_DYNAMIC(SpDlg, CDialogEx)

SpDlg::SpDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(_T(""))
	, b(_T(""))
{

}

SpDlg::~SpDlg()
{
}

void SpDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Control(pDX, IDC_BUTTON1, swap);
}


BEGIN_MESSAGE_MAP(SpDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &SpDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// SpDlg ��Ϣ�������


void SpDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString r;
	this->UpdateData(true);
	r=a;
	a = b;
	b = r;
	this->UpdateData(false);
}
