
// threeView.cpp : CthreeView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "three.h"
#endif

#include "threeDoc.h"
#include "threeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CthreeView

IMPLEMENT_DYNCREATE(CthreeView, CView)

BEGIN_MESSAGE_MAP(CthreeView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CthreeView ����/����

CthreeView::CthreeView()
{
	// TODO: �ڴ˴���ӹ������

}

CthreeView::~CthreeView()
{
}

BOOL CthreeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CthreeView ����

void CthreeView::OnDraw(CDC* /*pDC*/)
{
	CthreeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CthreeView ���

#ifdef _DEBUG
void CthreeView::AssertValid() const
{
	CView::AssertValid();
}

void CthreeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CthreeDoc* CthreeView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CthreeDoc)));
	return (CthreeDoc*)m_pDocument;
}
#endif //_DEBUG


// CthreeView ��Ϣ�������


void CthreeView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CthreeDoc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(200, 200, pDoc->c);

	CView::OnLButtonDown(nFlags, point);
}


void CthreeView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	
	CthreeDoc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(200, 300, pDoc->s);

	CView::OnLButtonUp(nFlags, point);
}
