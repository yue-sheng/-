
// addView.cpp : CaddView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "add.h"
#endif

#include "addDoc.h"
#include "addView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CaddView

IMPLEMENT_DYNCREATE(CaddView, CView)

BEGIN_MESSAGE_MAP(CaddView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CaddView 构造/析构

CaddView::CaddView()
{
	// TODO: 在此处添加构造代码

}

CaddView::~CaddView()
{
}

BOOL CaddView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CaddView 绘制

void CaddView::OnDraw(CDC* pDC)
{
	CaddDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CaddView 诊断

#ifdef _DEBUG
void CaddView::AssertValid() const
{
	CView::AssertValid();
}

void CaddView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CaddDoc* CaddView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CaddDoc)));
	return (CaddDoc*)m_pDocument;
}
#endif //_DEBUG


// CaddView 消息处理程序


void CaddView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CaddDoc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(200, 200, pDoc->c);
	CView::OnLButtonDown(nFlags, point);
}
