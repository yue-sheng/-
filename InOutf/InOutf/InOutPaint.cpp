// InOutPaint.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "InOutf.h"
#include "InOutPaint.h"
#include "afxdialogex.h"


// InOutPaint �Ի���

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


// InOutPaint ��Ϣ�������


BOOL InOutPaint::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void InOutPaint::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
}

void InOutPaint::foo(CImage& img, int &sx, int &sy, int &w, int &h)
{
	CRect rect;
	GetDlgItem()
}