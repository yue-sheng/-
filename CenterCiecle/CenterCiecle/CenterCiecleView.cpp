
// CenterCiecleView.cpp : CCenterCiecleView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CenterCiecle.h"
#endif

#include "CenterCiecleDoc.h"
#include "CenterCiecleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCenterCiecleView

IMPLEMENT_DYNCREATE(CCenterCiecleView, CView)

BEGIN_MESSAGE_MAP(CCenterCiecleView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCenterCiecleView ����/����

CCenterCiecleView::CCenterCiecleView()
{
	// TODO: �ڴ˴���ӹ������

}

CCenterCiecleView::~CCenterCiecleView()
{
}

BOOL CCenterCiecleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCenterCiecleView ����

void CCenterCiecleView::OnDraw(CDC* /*pDC*/)
{
	CCenterCiecleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCenterCiecleView ���

#ifdef _DEBUG
void CCenterCiecleView::AssertValid() const
{
	CView::AssertValid();
}

void CCenterCiecleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCenterCiecleDoc* CCenterCiecleView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCenterCiecleDoc)));
	return (CCenterCiecleDoc*)m_pDocument;
}
#endif //_DEBUG


// CCenterCiecleView ��Ϣ�������


void CCenterCiecleView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r;
	CRect cr;

	this->GetClientRect(&cr);
	if (cr.Height() > cr.Width()) r = cr.Width() / 2;
	else r = cr.Height() / 2;
	int x = cr.Width() / 2;
	int y = cr.Height() / 2;
	CClientDC dc(this);
	dc.Ellipse(x - r, y - r, x + r, y + r);
	CView::OnLButtonDown(nFlags, point);
}
