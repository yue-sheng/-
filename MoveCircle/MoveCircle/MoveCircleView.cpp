
// MoveCircleView.cpp : CMoveCircleView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CMoveCircleView 构造/析构

CMoveCircleView::CMoveCircleView()
{
	// TODO: 在此处添加构造代码
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
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMoveCircleView 绘制

void CMoveCircleView::OnDraw(CDC* pDC)
{
	CMoveCircleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	if (set)
	{
		SetTimer(0, 200, NULL);
		set = false;
	}
	pDC->Ellipse(cr);
}


// CMoveCircleView 诊断

#ifdef _DEBUG
void CMoveCircleView::AssertValid() const
{
	CView::AssertValid();
}

void CMoveCircleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMoveCircleDoc* CMoveCircleView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMoveCircleDoc)));
	return (CMoveCircleDoc*)m_pDocument;
}
#endif //_DEBUG


// CMoveCircleView 消息处理程序


void CMoveCircleView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	satus = 1;
	
	CView::OnLButtonDown(nFlags, point);
}


void CMoveCircleView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	satus = 0;
	CView::OnLButtonDblClk(nFlags, point);
}


void CMoveCircleView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
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
