
// CircleStatusView.cpp : CCircleStatusView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CCircleStatusView 构造/析构

CCircleStatusView::CCircleStatusView()
{
	// TODO: 在此处添加构造代码
	flag1 = 1;
	red = 0; green = 1; blue = 0; s = 0;
}

CCircleStatusView::~CCircleStatusView()
{
}

BOOL CCircleStatusView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCircleStatusView 绘制

void CCircleStatusView::OnDraw(CDC* pDC)
{
	CCircleStatusDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if(s)
	{
		CPen * pOldPen = NULL;
		CPen pen;

		pen.CreatePen(PS_DASH, 1, RGB(0,0, 255));//虚线


		pOldPen = pDC->SelectObject(&pen);
		CBrush * pOldBrush = NULL;
		CBrush * pBrush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));//背景透明效果
		pOldBrush = pDC->SelectObject(pBrush);
		tt.left = le; tt.top = to; tt.right = ri; tt.bottom = bo;
	    pDC->Rectangle(&tt);
		pDC->SelectObject(pOldPen);
		pen.DeleteObject();
	}
	
}


// CCircleStatusView 诊断

#ifdef _DEBUG
void CCircleStatusView::AssertValid() const
{
	CView::AssertValid();
}

void CCircleStatusView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCircleStatusDoc* CCircleStatusView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCircleStatusDoc)));
	return (CCircleStatusDoc*)m_pDocument;
}
#endif //_DEBUG


// CCircleStatusView 消息处理程序


void CCircleStatusView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
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
	// TODO: 在此添加消息处理程序代码和/或调用默认值
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
	// TODO: 在此添加消息处理程序代码和/或调用默认值
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
	// TODO: 在此添加命令处理程序代码
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
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	s = 1;
	
		InvalidateRect(NULL, FALSE);
	CView::OnLButtonDblClk(nFlags, point);
}


void CCircleStatusView::OnFillcolor()
{
	// TODO: 在此添加命令处理程序代码
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
