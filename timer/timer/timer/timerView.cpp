
// timerView.cpp : CtimerView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "timer.h"
#endif

#include "timerDoc.h"
#include "timerView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtimerView

IMPLEMENT_DYNCREATE(CtimerView, CView)

BEGIN_MESSAGE_MAP(CtimerView, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CtimerView ����/����

CtimerView::CtimerView()
{
	// TODO: �ڴ˴���ӹ������
	
}

CtimerView::~CtimerView()
{
}

BOOL CtimerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CtimerView ����

void CtimerView::OnDraw(CDC* pDC)
{
	CtimerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (pDoc->set)
	{
		
			SetTimer(0, 200, NULL);
			pDoc->set = false;
		
	}
	
		pDC->Ellipse(pDoc->re);
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CtimerView ���

#ifdef _DEBUG
void CtimerView::AssertValid() const
{
	CView::AssertValid();
}

void CtimerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CtimerDoc* CtimerView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtimerDoc)));
	return (CtimerDoc*)m_pDocument;
}
#endif //_DEBUG


// CtimerView ��Ϣ�������


void CtimerView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CtimerDoc* pDoc = GetDocument();
	CRect cr;
	GetClientRect(&cr);
	
	if (pDoc->flag==0&&pDoc->re.bottom < (cr.bottom - cr.top))
	{
		pDoc->re.top += 10;
		pDoc->re.bottom += 10;
	}
	else pDoc->flag += 1;
	if (pDoc->flag >= 1 && (pDoc->re.top>0))
	{

		pDoc->re.top -= 10;
		pDoc->re.bottom -= 10;

	}
	else pDoc->flag = 0;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
