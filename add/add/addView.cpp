
// addView.cpp : CaddView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "add.h"
#endif

#include "addDoc.h"
#include "addView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CaddView

IMPLEMENT_DYNCREATE(CaddView, CView)

BEGIN_MESSAGE_MAP(CaddView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CaddView ����/����

CaddView::CaddView()
{
	// TODO: �ڴ˴���ӹ������

}

CaddView::~CaddView()
{
}

BOOL CaddView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CaddView ����

void CaddView::OnDraw(CDC* pDC)
{
	CaddDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CaddView ���

#ifdef _DEBUG
void CaddView::AssertValid() const
{
	CView::AssertValid();
}

void CaddView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CaddDoc* CaddView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CaddDoc)));
	return (CaddDoc*)m_pDocument;
}
#endif //_DEBUG


// CaddView ��Ϣ�������


void CaddView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CaddDoc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(200, 200, pDoc->c);
	CView::OnLButtonDown(nFlags, point);
}
