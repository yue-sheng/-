
// MOUSEMOVEView.cpp : CMOUSEMOVEView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MOUSEMOVE.h"
#endif

#include "MOUSEMOVEDoc.h"
#include "MOUSEMOVEView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMOUSEMOVEView

IMPLEMENT_DYNCREATE(CMOUSEMOVEView, CView)

BEGIN_MESSAGE_MAP(CMOUSEMOVEView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMOUSEMOVEView ����/����

CMOUSEMOVEView::CMOUSEMOVEView()
{
	// TODO: �ڴ˴���ӹ������
	num = 0;
	mouse = 0;
	flag = false;
}

CMOUSEMOVEView::~CMOUSEMOVEView()
{
}

BOOL CMOUSEMOVEView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMOUSEMOVEView ����

void CMOUSEMOVEView::OnDraw(CDC* pDC)
{
	CMOUSEMOVEDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMOUSEMOVEView ���

#ifdef _DEBUG
void CMOUSEMOVEView::AssertValid() const
{
	CView::AssertValid();
}

void CMOUSEMOVEView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMOUSEMOVEDoc* CMOUSEMOVEView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMOUSEMOVEDoc)));
	return (CMOUSEMOVEDoc*)m_pDocument;
}
#endif //_DEBUG


// CMOUSEMOVEView ��Ϣ�������


void CMOUSEMOVEView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCapture();
	flag = true;
	x1 = point.x;
	y1 = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMOUSEMOVEView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CMOUSEMOVEDoc* pDoc = GetDocument();
	ReleaseCapture();
	flag = false;
	CString m;
	m.Format(L"MOUSEMOVE:%d,����һ����������%d", mouse,num);
	dc.TextOutW(30, 30, m);
	CView::OnLButtonUp(nFlags, point);
}


void CMOUSEMOVEView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	if (flag)
	{
		x2 = x1;
		y2 = y1;
		x1 = point.x;
		y1 = point.y;
		mouse++;
		num = (x2 - x1) + (y2 - y1);
		if (num < 0)
			num -= num;
	}
	




	CView::OnMouseMove(nFlags, point);
}
