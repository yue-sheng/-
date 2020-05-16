
// testOneView.cpp : CtestOneView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "testOne.h"
#endif

#include "testOneDoc.h"
#include "testOneView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtestOneView

IMPLEMENT_DYNCREATE(CtestOneView, CView)

BEGIN_MESSAGE_MAP(CtestOneView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CtestOneView 构造/析构

CtestOneView::CtestOneView()
{
	// TODO: 在此处添加构造代码

}

CtestOneView::~CtestOneView()
{
}

BOOL CtestOneView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CtestOneView 绘制

void CtestOneView::OnDraw(CDC* pDC)
{
	CtestOneDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CtestOneView 诊断

#ifdef _DEBUG
void CtestOneView::AssertValid() const
{
	CView::AssertValid();
}

void CtestOneView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CtestOneDoc* CtestOneView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtestOneDoc)));
	return (CtestOneDoc*)m_pDocument;
}
#endif //_DEBUG


// CtestOneView 消息处理程序


void CtestOneView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CtestOneDoc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, pDoc->sName);

	CView::OnLButtonDown(nFlags, point);
}
