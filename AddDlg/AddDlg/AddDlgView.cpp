
// AddDlgView.cpp : CAddDlgView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "AddDlg.h"
#endif

#include "AddDlgDoc.h"
#include "AddDlgView.h"
#include"AddDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAddDlgView

IMPLEMENT_DYNCREATE(CAddDlgView, CView)

BEGIN_MESSAGE_MAP(CAddDlgView, CView)
	ON_COMMAND(ID_ADD, &CAddDlgView::OnAdd)
END_MESSAGE_MAP()

// CAddDlgView ����/����

CAddDlgView::CAddDlgView()
{
	// TODO: �ڴ˴���ӹ������

}

CAddDlgView::~CAddDlgView()
{
}

BOOL CAddDlgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CAddDlgView ����

void CAddDlgView::OnDraw(CDC* /*pDC*/)
{
	CAddDlgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CAddDlgView ���

#ifdef _DEBUG
void CAddDlgView::AssertValid() const
{
	CView::AssertValid();
}

void CAddDlgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAddDlgDoc* CAddDlgView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAddDlgDoc)));
	return (CAddDlgDoc*)m_pDocument;
}
#endif //_DEBUG


// CAddDlgView ��Ϣ�������


void CAddDlgView::OnAdd()
{
	// TODO: �ڴ���������������
	AddDialog dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		int A, B, C;
		A = dlg.a;
		B = dlg.b;

	}
}
