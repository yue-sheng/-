// EllDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CircleStatus.h"
#include "EllDlg.h"
#include "afxdialogex.h"


// EllDlg �Ի���

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


// EllDlg ��Ϣ�������


void EllDlg::OnEnChangeEdit5()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
