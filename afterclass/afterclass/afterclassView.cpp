
// afterclassView.cpp : CafterclassView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "afterclass.h"
#endif

#include "afterclassDoc.h"
#include "afterclassView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CafterclassView

IMPLEMENT_DYNCREATE(CafterclassView, CView)

BEGIN_MESSAGE_MAP(CafterclassView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CafterclassView ����/����

CafterclassView::CafterclassView()
{
	// TODO: �ڴ˴���ӹ������
	s1 = "Yeko";

}

CafterclassView::~CafterclassView()
{
}

BOOL CafterclassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CafterclassView ����

void CafterclassView::OnDraw(CDC* /*pDC*/)
{
	CafterclassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CafterclassView ���

#ifdef _DEBUG
void CafterclassView::AssertValid() const
{
	CView::AssertValid();
}

void CafterclassView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CafterclassDoc* CafterclassView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CafterclassDoc)));
	return (CafterclassDoc*)m_pDocument;
}
#endif //_DEBUG


// CafterclassView ��Ϣ�������


void CafterclassView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CafterclassDoc* pDoc = GetDocument();
	CClientDC dc(this);
	CString sz;
	sz = pDoc->s + s1;
	dc.TextOutW(point.x, point.y, sz);
	CView::OnLButtonDown(nFlags, point);
}
