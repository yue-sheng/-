
// WeekSecondtest2View.cpp : CWeekSecondtest2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "WeekSecondtest2.h"
#endif

#include "WeekSecondtest2Doc.h"
#include "WeekSecondtest2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeekSecondtest2View

IMPLEMENT_DYNCREATE(CWeekSecondtest2View, CView)

BEGIN_MESSAGE_MAP(CWeekSecondtest2View, CView)
END_MESSAGE_MAP()

// CWeekSecondtest2View ����/����

CWeekSecondtest2View::CWeekSecondtest2View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeekSecondtest2View::~CWeekSecondtest2View()
{
}

BOOL CWeekSecondtest2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeekSecondtest2View ����

void CWeekSecondtest2View::OnDraw(CDC* pDC)
{
	CWeekSecondtest2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(200, 200, pDoc->s);
	pDC->TextOutW(250, 250, pDoc->C);
}


// CWeekSecondtest2View ���

#ifdef _DEBUG
void CWeekSecondtest2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeekSecondtest2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeekSecondtest2Doc* CWeekSecondtest2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeekSecondtest2Doc)));
	return (CWeekSecondtest2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeekSecondtest2View ��Ϣ�������
