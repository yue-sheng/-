
// class1View.cpp : Cclass1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "class1.h"
#endif

#include "class1Doc.h"
#include "class1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cclass1View

IMPLEMENT_DYNCREATE(Cclass1View, CView)

BEGIN_MESSAGE_MAP(Cclass1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_RBUTTONDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cclass1View 构造/析构

Cclass1View::Cclass1View()
{
	// TODO: 在此处添加构造代码

}

Cclass1View::~Cclass1View()
{
}

BOOL Cclass1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cclass1View 绘制

void Cclass1View::OnDraw(CDC* pDC)
{
	Cclass1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
}


// Cclass1View 诊断

#ifdef _DEBUG
void Cclass1View::AssertValid() const
{
	CView::AssertValid();
}

void Cclass1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cclass1Doc* Cclass1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cclass1Doc)));
	return (Cclass1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cclass1View 消息处理程序

void Cclass1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cclass1Doc* pDoc2 = GetDocument();
	pDoc2->count++;
	CView::OnLButtonDown(nFlags, point);
}


void Cclass1View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cclass1Doc* pDoc1 = GetDocument();
	CString D;
	D.Format(_T("count的值(%d)"),pDoc1->count );
	CClientDC dc(this);
	dc.TextOutW(200, 200, D);
	CView::OnRButtonDown(nFlags, point);
}


