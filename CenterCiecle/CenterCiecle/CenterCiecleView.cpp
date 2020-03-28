
// CenterCiecleView.cpp : CCenterCiecleView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CenterCiecle.h"
#endif

#include "CenterCiecleDoc.h"
#include "CenterCiecleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCenterCiecleView

IMPLEMENT_DYNCREATE(CCenterCiecleView, CView)

BEGIN_MESSAGE_MAP(CCenterCiecleView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCenterCiecleView 构造/析构

CCenterCiecleView::CCenterCiecleView()
{
	// TODO: 在此处添加构造代码

}

CCenterCiecleView::~CCenterCiecleView()
{
}

BOOL CCenterCiecleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCenterCiecleView 绘制

void CCenterCiecleView::OnDraw(CDC* /*pDC*/)
{
	CCenterCiecleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCenterCiecleView 诊断

#ifdef _DEBUG
void CCenterCiecleView::AssertValid() const
{
	CView::AssertValid();
}

void CCenterCiecleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCenterCiecleDoc* CCenterCiecleView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCenterCiecleDoc)));
	return (CCenterCiecleDoc*)m_pDocument;
}
#endif //_DEBUG


// CCenterCiecleView 消息处理程序


void CCenterCiecleView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r;
	CRect cr;

	this->GetClientRect(&cr);
	if (cr.Height() > cr.Width()) r = cr.Width() / 2;
	else r = cr.Height() / 2;
	int x = cr.Width() / 2;
	int y = cr.Height() / 2;
	CClientDC dc(this);
	dc.Ellipse(x - r, y - r, x + r, y + r);
	CView::OnLButtonDown(nFlags, point);
}
