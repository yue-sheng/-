
// threeView.cpp : CthreeView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "three.h"
#endif

#include "threeDoc.h"
#include "threeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CthreeView

IMPLEMENT_DYNCREATE(CthreeView, CView)

BEGIN_MESSAGE_MAP(CthreeView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CthreeView 构造/析构

CthreeView::CthreeView()
{
	// TODO: 在此处添加构造代码

}

CthreeView::~CthreeView()
{
}

BOOL CthreeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CthreeView 绘制

void CthreeView::OnDraw(CDC* /*pDC*/)
{
	CthreeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 在此处为本机数据添加绘制代码
}


// CthreeView 诊断

#ifdef _DEBUG
void CthreeView::AssertValid() const
{
	CView::AssertValid();
}

void CthreeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CthreeDoc* CthreeView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CthreeDoc)));
	return (CthreeDoc*)m_pDocument;
}
#endif //_DEBUG


// CthreeView 消息处理程序


void CthreeView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CthreeDoc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(200, 200, pDoc->c);

	CView::OnLButtonDown(nFlags, point);
}


void CthreeView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	
	CthreeDoc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(200, 300, pDoc->s);

	CView::OnLButtonUp(nFlags, point);
}
