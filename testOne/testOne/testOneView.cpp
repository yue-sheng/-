
// testOneView.cpp : CtestOneView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "testOne.h"
#endif

#include "testOneDoc.h"
#include "testOneView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtestOneView

IMPLEMENT_DYNCREATE(CtestOneView, CView)

BEGIN_MESSAGE_MAP(CtestOneView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CtestOneView ����/����

CtestOneView::CtestOneView()
{
	// TODO: �ڴ˴���ӹ������

}

CtestOneView::~CtestOneView()
{
}

BOOL CtestOneView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CtestOneView ����

void CtestOneView::OnDraw(CDC* pDC)
{
	CtestOneDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CtestOneView ���

#ifdef _DEBUG
void CtestOneView::AssertValid() const
{
	CView::AssertValid();
}

void CtestOneView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CtestOneDoc* CtestOneView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtestOneDoc)));
	return (CtestOneDoc*)m_pDocument;
}
#endif //_DEBUG


// CtestOneView ��Ϣ�������


void CtestOneView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CtestOneDoc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, pDoc->sName);

	CView::OnLButtonDown(nFlags, point);
}
