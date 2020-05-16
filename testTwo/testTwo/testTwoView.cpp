
// testTwoView.cpp : CtestTwoView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "testTwo.h"
#endif

#include "testTwoDoc.h"
#include "testTwoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtestTwoView

IMPLEMENT_DYNCREATE(CtestTwoView, CView)

BEGIN_MESSAGE_MAP(CtestTwoView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CtestTwoView ����/����

CtestTwoView::CtestTwoView()
{
	// TODO: �ڴ˴���ӹ������

}

CtestTwoView::~CtestTwoView()
{
}

BOOL CtestTwoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CtestTwoView ����

void CtestTwoView::OnDraw(CDC* /*pDC*/)
{
	CtestTwoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CtestTwoView ���

#ifdef _DEBUG
void CtestTwoView::AssertValid() const
{
	CView::AssertValid();
}

void CtestTwoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CtestTwoDoc* CtestTwoView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtestTwoDoc)));
	return (CtestTwoDoc*)m_pDocument;
}
#endif //_DEBUG


// CtestTwoView ��Ϣ�������


void CtestTwoView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CtestTwoDoc* pDoc = GetDocument();
	pDoc->count += 1;
	CView::OnLButtonDown(nFlags, point);
}


void CtestTwoView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CtestTwoDoc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("%d"), pDoc->count);
	dc.TextOutW(point.x, point.y, s);
	CView::OnRButtonDown(nFlags, point);
}
