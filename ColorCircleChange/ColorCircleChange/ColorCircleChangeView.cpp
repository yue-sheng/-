
// ColorCircleChangeView.cpp : CColorCircleChangeView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ColorCircleChange.h"
#endif

#include "ColorCircleChangeDoc.h"
#include "ColorCircleChangeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CColorCircleChangeView

IMPLEMENT_DYNCREATE(CColorCircleChangeView, CView)

BEGIN_MESSAGE_MAP(CColorCircleChangeView, CView)
	ON_COMMAND(ID_COLORCHANGE, &CColorCircleChangeView::OnColorchange)
END_MESSAGE_MAP()

// CColorCircleChangeView ����/����

CColorCircleChangeView::CColorCircleChangeView()
{
	// TODO: �ڴ˴���ӹ������
	x = 707; y = 298;
	red = 0; green = 0; blue = 0;

	rect.left = x - 10; rect.top = y - 10;
	rect.right = x + 10; rect.bottom = y + 10;
}

CColorCircleChangeView::~CColorCircleChangeView()
{
}

BOOL CColorCircleChangeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CColorCircleChangeView ����

void CColorCircleChangeView::OnDraw(CDC* pDC)
{
	CColorCircleChangeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(rect);
}


// CColorCircleChangeView ���

#ifdef _DEBUG
void CColorCircleChangeView::AssertValid() const
{
	CView::AssertValid();
}

void CColorCircleChangeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CColorCircleChangeDoc* CColorCircleChangeView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CColorCircleChangeDoc)));
	return (CColorCircleChangeDoc*)m_pDocument;
}
#endif //_DEBUG


// CColorCircleChangeView ��Ϣ�������


void CColorCircleChangeView::OnColorchange()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	for (int i = 0; i<2 * y; i = rect.bottom)
	{

		red += 15;
		green += 10;
		blue += 8;
		color = RGB(red, green, blue);
		rect.left -= 1;
		rect.top -= 1;
		rect.right += 1;
		rect.bottom += 1;
		CBrush newBrush(color);
		CBrush *oldBrush = dc.SelectObject(&newBrush);

		dc.Ellipse(rect);
		dc.SelectObject(oldBrush);


		Invalidate();

	}
}
