
// afterclassView.cpp : CafterclassView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "afterclass.h"
#endif

#include "afterclassDoc.h"
#include "afterclassView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CafterclassView

IMPLEMENT_DYNCREATE(CafterclassView, CView)

BEGIN_MESSAGE_MAP(CafterclassView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CafterclassView 构造/析构

CafterclassView::CafterclassView()
{
	// TODO: 在此处添加构造代码
	s1 = "Yeko";

}

CafterclassView::~CafterclassView()
{
}

BOOL CafterclassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CafterclassView 绘制

void CafterclassView::OnDraw(CDC* /*pDC*/)
{
	CafterclassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CafterclassView 诊断

#ifdef _DEBUG
void CafterclassView::AssertValid() const
{
	CView::AssertValid();
}

void CafterclassView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CafterclassDoc* CafterclassView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CafterclassDoc)));
	return (CafterclassDoc*)m_pDocument;
}
#endif //_DEBUG


// CafterclassView 消息处理程序


void CafterclassView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CafterclassDoc* pDoc = GetDocument();
	CClientDC dc(this);
	CString sz;
	sz = pDoc->s + s1;
	dc.TextOutW(point.x, point.y, sz);
	CView::OnLButtonDown(nFlags, point);
}
