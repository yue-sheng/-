
// WeekSecondtest1View.cpp : CWeekSecondtest1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "WeekSecondtest1.h"
#endif

#include "WeekSecondtest1Doc.h"
#include "WeekSecondtest1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeekSecondtest1View

IMPLEMENT_DYNCREATE(CWeekSecondtest1View, CView)

BEGIN_MESSAGE_MAP(CWeekSecondtest1View, CView)
END_MESSAGE_MAP()

// CWeekSecondtest1View ����/����

CWeekSecondtest1View::CWeekSecondtest1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeekSecondtest1View::~CWeekSecondtest1View()
{
}

BOOL CWeekSecondtest1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeekSecondtest1View ����

void CWeekSecondtest1View::OnDraw(CDC* pDC)
{
	CWeekSecondtest1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	CString C;
	int c;
	c = 100;
	s = _T("����ʯʤ��");
	C.Format(_T("%d"), c);
	pDC->TextOutW(200,200,s);
	pDC->TextOutW(250, 250, C);
}


// CWeekSecondtest1View ���

#ifdef _DEBUG
void CWeekSecondtest1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeekSecondtest1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeekSecondtest1Doc* CWeekSecondtest1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeekSecondtest1Doc)));
	return (CWeekSecondtest1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeekSecondtest1View ��Ϣ�������
