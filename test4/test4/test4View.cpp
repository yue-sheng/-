
// test4View.cpp : Ctest4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test4.h"
#endif

#include "test4Doc.h"
#include "test4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest4View

IMPLEMENT_DYNCREATE(Ctest4View, CView)

BEGIN_MESSAGE_MAP(Ctest4View, CView)
END_MESSAGE_MAP()

// Ctest4View ����/����

Ctest4View::Ctest4View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest4View::~Ctest4View()
{
}

BOOL Ctest4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest4View ����

void Ctest4View::OnDraw(CDC* pDC)
{
	Ctest4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect ct;
	GetClientRect(&ct);
	int	red = 100, green =0 , blue = 0;
	int color = RGB(red, green, blue);
	CBrush newBrush(color);
	CBrush*oldBrush = pDC->SelectObject(&newBrush);
	pDC->Ellipse(&ct);
	pDC->SelectObject(oldBrush);



}


// Ctest4View ���

#ifdef _DEBUG
void Ctest4View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest4Doc* Ctest4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest4Doc)));
	return (Ctest4Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest4View ��Ϣ�������
