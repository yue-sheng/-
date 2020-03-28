
// rectangleView.cpp : CrectangleView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "rectangle.h"
#endif

#include "rectangleDoc.h"
#include "rectangleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CrectangleView

IMPLEMENT_DYNCREATE(CrectangleView, CView)

BEGIN_MESSAGE_MAP(CrectangleView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CrectangleView ����/����

CrectangleView::CrectangleView()
{
	// TODO: �ڴ˴���ӹ������

}

CrectangleView::~CrectangleView()
{
}

BOOL CrectangleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CrectangleView ����

void CrectangleView::OnDraw(CDC* pDC)
{
	CrectangleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < pDoc->ca.GetSize(); i++)
		pDC->Ellipse(pDoc->ca.GetAt(i));
		

}


// CrectangleView ���

#ifdef _DEBUG
void CrectangleView::AssertValid() const
{
	CView::AssertValid();
}

void CrectangleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CrectangleDoc* CrectangleView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CrectangleDoc)));
	return (CrectangleDoc*)m_pDocument;
}
#endif //_DEBUG


// CrectangleView ��Ϣ�������


void CrectangleView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	
	
	//�ڶ���
	int a = rand() % 50 + 5;//����
	int b = rand() % 100 + 1;//����
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	
	CrectangleDoc* pDoc = GetDocument();
	pDoc->ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
