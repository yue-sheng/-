
// rectangleView.cpp : CrectangleView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "rectangle.h"
#endif

#include "rectangleDoc.h"
#include "rectangleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CrectangleView

IMPLEMENT_DYNCREATE(CrectangleView, CView)

BEGIN_MESSAGE_MAP(CrectangleView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CrectangleView 构造/析构

CrectangleView::CrectangleView()
{
	// TODO: 在此处添加构造代码

}

CrectangleView::~CrectangleView()
{
}

BOOL CrectangleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CrectangleView 绘制

void CrectangleView::OnDraw(CDC* pDC)
{
	CrectangleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < pDoc->ca.GetSize(); i++)
		pDC->Ellipse(pDoc->ca.GetAt(i));
		

}


// CrectangleView 诊断

#ifdef _DEBUG
void CrectangleView::AssertValid() const
{
	CView::AssertValid();
}

void CrectangleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CrectangleDoc* CrectangleView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CrectangleDoc)));
	return (CrectangleDoc*)m_pDocument;
}
#endif //_DEBUG


// CrectangleView 消息处理程序


void CrectangleView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	
	
	//第二题
	int a = rand() % 50 + 5;//短轴
	int b = rand() % 100 + 1;//长轴
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	
	CrectangleDoc* pDoc = GetDocument();
	pDoc->ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
