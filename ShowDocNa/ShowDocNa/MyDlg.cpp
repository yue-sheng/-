// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ShowDocNa.h"
#include "MyDlg.h"
#include "afxdialogex.h"




// MyDlg �Ի���

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


// MyDlg ��Ϣ�������

	


BOOL MyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	LBox.AddString(edit);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
