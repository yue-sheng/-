
// SwapView.cpp : CSwapView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Swap.h"
#endif

#include "SwapDoc.h"
#include "SwapView.h"
#include"SpDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSwapView

IMPLEMENT_DYNCREATE(CSwapView, CView)

BEGIN_MESSAGE_MAP(CSwapView, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CSwapView ����/����

CSwapView::CSwapView()
{
	// TODO: �ڴ˴���ӹ������

}

CSwapView::~CSwapView()
{
}

BOOL CSwapView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CSwapView ����

void CSwapView::OnDraw(CDC* /*pDC*/)
{
	CSwapDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CSwapView ���

#ifdef _DEBUG
void CSwapView::AssertValid() const
{
	CView::AssertValid();
}

void CSwapView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSwapDoc* CSwapView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSwapDoc)));
	return (CSwapDoc*)m_pDocument;
}
#endif //_DEBUG


// CSwapView ��Ϣ�������


void CSwapView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SpDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		
		A = dlg.a;
		B = dlg.b;
		
		
	}
	CView::OnLButtonDblClk(nFlags, point);
}
