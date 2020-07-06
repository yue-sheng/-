
// CircleStatusView.cpp : CCircleStatusView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CircleStatus.h"
#endif

#include "CircleStatusDoc.h"
#include "CircleStatusView.h"
#include "EllDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCircleStatusView

IMPLEMENT_DYNCREATE(CCircleStatusView, CView)

BEGIN_MESSAGE_MAP(CCircleStatusView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_DRAWELLI, &CCircleStatusView::OnDrawelli)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_FILLCOLOR, &CCircleStatusView::OnFillcolor)
END_MESSAGE_MAP()

// CCircleStatusView ����/����

CCircleStatusView::CCircleStatusView()
{
	// TODO: �ڴ˴���ӹ������
	flag1 = 1;
	red = 0; green = 1; blue = 0; s = 0;
}

CCircleStatusView::~CCircleStatusView()
{
}

BOOL CCircleStatusView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCircleStatusView ����

void CCircleStatusView::OnDraw(CDC* pDC)
{
	CCircleStatusDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if(s)
	{
		CPen * pOldPen = NULL;
		CPen pen;

		pen.CreatePen(PS_DASH, 1, RGB(0,0, 255));//����


		pOldPen = pDC->SelectObject(&pen);
		CBrush * pOldBrush = NULL;
		CBrush * pBrush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));//����͸��Ч��
		pOldBrush = pDC->SelectObject(pBrush);
		tt.left = le; tt.top = to; tt.right = ri; tt.bottom = bo;
	    pDC->Rectangle(&tt);
		pDC->SelectObject(pOldPen);
		pen.DeleteObject();
	}
	
}


// CCircleStatusView ���

#ifdef _DEBUG
void CCircleStatusView::AssertValid() const
{
	CView::AssertValid();
}

void CCircleStatusView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCircleStatusDoc* CCircleStatusView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCircleStatusDoc)));
	return (CCircleStatusDoc*)m_pDocument;
}
#endif //_DEBUG


// CCircleStatusView ��Ϣ�������


void CCircleStatusView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCapture();
	CCircleStatusDoc* pDoc = GetDocument();
	if (flag1)
	{
		m_startRect = true;
		m_startPoint = point;
		m_oldPoint = point;
	}
	
	InvalidateRect(NULL, FALSE);
	CView::OnLButtonDown(nFlags, point);
}


void CCircleStatusView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CCircleStatusDoc* pDoc = GetDocument();

	CClientDC dc(this);
	
	
	
	
	if (flag1)
	{
		if (m_startRect == TRUE)
		{
			int color = RGB(red, green, blue);
			CBrush newBrush(color);
			CBrush*oldBrush = dc.SelectObject(&newBrush);
			
			m_oldPoint = point;
			dc.Ellipse(CRect(m_startPoint, point));
			dc.SelectObject(oldBrush);
			red += 32;
			green += 16;
			blue += 8;
		}
		
	}
	
	InvalidateRect(NULL, FALSE);
	CView::OnMouseMove(nFlags, point);
}


void CCircleStatusView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	ReleaseCapture();
	CCircleStatusDoc* pDoc = GetDocument();
	CClientDC dc(this);
	m_startRect = FALSE;
	
	if (flag1)
	{
		dc.Ellipse(CRect(m_startPoint, point));
		m_startRect = false;
	}
	
	CView::OnLButtonUp(nFlags, point);
}


void CCircleStatusView::OnDrawelli()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CRect rect;
	EllDlg dlg;
	
	
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		le=rect.left = dlg.x - dlg.a;
		to=rect.top = dlg.y - dlg.b;
		ri=rect.right = dlg.x + dlg.a;
		bo=rect.bottom = dlg.y + dlg.b;
		dc.Ellipse(&rect);
		
	}
	
	
}


void CCircleStatusView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	s = 1;
	
		InvalidateRect(NULL, FALSE);
	CView::OnLButtonDblClk(nFlags, point);
}


void CCircleStatusView::OnFillcolor()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CRect ret;
	EllDlg dlg;


	int r = dlg.DoModal();
	if (r == IDOK)
	{
		red = dlg.rred; green = dlg.ggreen; blue = dlg.bblue;
		int color = RGB(red, green, blue);
		CBrush newBrush(color);
		CBrush*oldBrush = dc.SelectObject(&newBrush);

		ret.left = le;
		ret.top = to;
		ret.right = ri;
		ret.bottom = bo;
		dc.Ellipse(&ret);
		dc.SelectObject(oldBrush);
	}


}
