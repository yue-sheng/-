
// testTwoView.cpp : CtestTwoView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "testTwo.h"
#endif

#include "testTwoDoc.h"
#include "testTwoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtestTwoView

IMPLEMENT_DYNCREATE(CtestTwoView, CView)

BEGIN_MESSAGE_MAP(CtestTwoView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CtestTwoView 构造/析构

CtestTwoView::CtestTwoView()
{
	// TODO: 在此处添加构造代码

}

CtestTwoView::~CtestTwoView()
{
}

BOOL CtestTwoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CtestTwoView 绘制

void CtestTwoView::OnDraw(CDC* /*pDC*/)
{
	CtestTwoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CtestTwoView 诊断

#ifdef _DEBUG
void CtestTwoView::AssertValid() const
{
	CView::AssertValid();
}

void CtestTwoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CtestTwoDoc* CtestTwoView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtestTwoDoc)));
	return (CtestTwoDoc*)m_pDocument;
}
#endif //_DEBUG


// CtestTwoView 消息处理程序


void CtestTwoView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CtestTwoDoc* pDoc = GetDocument();
	pDoc->count += 1;
	CView::OnLButtonDown(nFlags, point);
}


void CtestTwoView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CtestTwoDoc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("%d"), pDoc->count);
	dc.TextOutW(point.x, point.y, s);
	CView::OnRButtonDown(nFlags, point);
}
