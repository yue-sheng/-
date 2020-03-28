
// class1View.cpp : Cclass1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "class1.h"
#endif

#include "class1Doc.h"
#include "class1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cclass1View

IMPLEMENT_DYNCREATE(Cclass1View, CView)

BEGIN_MESSAGE_MAP(Cclass1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_RBUTTONDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cclass1View ����/����

Cclass1View::Cclass1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cclass1View::~Cclass1View()
{
}

BOOL Cclass1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cclass1View ����

void Cclass1View::OnDraw(CDC* pDC)
{
	Cclass1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// Cclass1View ���

#ifdef _DEBUG
void Cclass1View::AssertValid() const
{
	CView::AssertValid();
}

void Cclass1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cclass1Doc* Cclass1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cclass1Doc)));
	return (Cclass1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cclass1View ��Ϣ�������

void Cclass1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cclass1Doc* pDoc2 = GetDocument();
	pDoc2->count++;
	CView::OnLButtonDown(nFlags, point);
}


void Cclass1View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cclass1Doc* pDoc1 = GetDocument();
	CString D;
	D.Format(_T("count��ֵ(%d)"),pDoc1->count );
	CClientDC dc(this);
	dc.TextOutW(200, 200, D);
	CView::OnRButtonDown(nFlags, point);
}


