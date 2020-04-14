
// MoveCircleView.cpp : CMoveCircleView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MoveCircle.h"
#endif

#include "MoveCircleDoc.h"
#include "MoveCircleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMoveCircleView

IMPLEMENT_DYNCREATE(CMoveCircleView, CView)

BEGIN_MESSAGE_MAP(CMoveCircleView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMoveCircleView ����/����

CMoveCircleView::CMoveCircleView()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
	satus = 0;
	set = true;
	cr.left = 200;
	cr.top = 300;
	cr.right = 220;
	cr.bottom = 320;
}

CMoveCircleView::~CMoveCircleView()
{
}

BOOL CMoveCircleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMoveCircleView ����

void CMoveCircleView::OnDraw(CDC* pDC)
{
	CMoveCircleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
	if (set)
	{
		SetTimer(0, 200, NULL);
		set = false;
	}
	pDC->Ellipse(cr);
}


// CMoveCircleView ���

#ifdef _DEBUG
void CMoveCircleView::AssertValid() const
{
	CView::AssertValid();
}

void CMoveCircleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMoveCircleDoc* CMoveCircleView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMoveCircleDoc)));
	return (CMoveCircleDoc*)m_pDocument;
}
#endif //_DEBUG


// CMoveCircleView ��Ϣ�������


void CMoveCircleView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	satus = 1;
	
	CView::OnLButtonDown(nFlags, point);
}


void CMoveCircleView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	satus = 0;
	CView::OnLButtonDblClk(nFlags, point);
}


void CMoveCircleView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect re;
	GetClientRect(&re);
	if (satus == 1)
	{
		if (flag == 0 && cr.right < (re.right - re.left))
		{
			cr.left += 10;
			cr.right += 10;
		}
		else flag += 1;
		if (flag >= 1 && cr.left > 0)
		{
			cr.right -= 10;
			cr.left -= 10;
		}
		else flag = 0;
	}
		
		Invalidate();
	
	
	CView::OnTimer(nIDEvent);
}
