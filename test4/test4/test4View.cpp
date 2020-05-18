
// test4View.cpp : Ctest4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test4.h"
#endif

#include "test4Doc.h"
#include "test4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest4View

IMPLEMENT_DYNCREATE(Ctest4View, CView)

BEGIN_MESSAGE_MAP(Ctest4View, CView)
END_MESSAGE_MAP()

// Ctest4View 构造/析构

Ctest4View::Ctest4View()
{
	// TODO: 在此处添加构造代码

}

Ctest4View::~Ctest4View()
{
}

BOOL Ctest4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest4View 绘制

void Ctest4View::OnDraw(CDC* pDC)
{
	Ctest4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect ct;
	GetClientRect(&ct);
	int	red = 100, green =0 , blue = 0;
	int color = RGB(red, green, blue);
	CBrush newBrush(color);
	CBrush*oldBrush = pDC->SelectObject(&newBrush);
	pDC->Ellipse(&ct);
	pDC->SelectObject(oldBrush);



}


// Ctest4View 诊断

#ifdef _DEBUG
void Ctest4View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest4Doc* Ctest4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest4Doc)));
	return (Ctest4Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest4View 消息处理程序
