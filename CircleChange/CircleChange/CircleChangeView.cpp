
// CircleChangeView.cpp : CCircleChangeView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CircleChange.h"
#endif

#include "CircleChangeDoc.h"
#include "CircleChangeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCircleChangeView

IMPLEMENT_DYNCREATE(CCircleChangeView, CView)

BEGIN_MESSAGE_MAP(CCircleChangeView, CView)
	ON_COMMAND(CIRCLECHANGE, &CCircleChangeView::OnCirclechange)
END_MESSAGE_MAP()

// CCircleChangeView ����/����

CCircleChangeView::CCircleChangeView()
{
	// TODO: �ڴ˴���ӹ������
	x = 707; y = 298;
	rect.left = x - 10; rect.top = y - 10;
	rect.right = x + 10; rect.bottom = y + 10;
}

CCircleChangeView::~CCircleChangeView()
{
}

BOOL CCircleChangeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCircleChangeView ����

void CCircleChangeView::OnDraw(CDC* pDC)
{
	CCircleChangeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCircleChangeView ���

#ifdef _DEBUG
void CCircleChangeView::AssertValid() const
{
	CView::AssertValid();
}

void CCircleChangeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCircleChangeDoc* CCircleChangeView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCircleChangeDoc)));
	return (CCircleChangeDoc*)m_pDocument;
}
#endif //_DEBUG


// CCircleChangeView ��Ϣ�������


void CCircleChangeView::OnCirclechange()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	for (int i = 0; i<2 * y; i = rect.bottom)
	{

		rect.left -= 1;
		rect.top -= 1;
		rect.right += 1;
		rect.bottom += 1;


		Invalidate();
		dc.Ellipse(rect);
	}
}
