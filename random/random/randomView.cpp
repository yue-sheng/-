
// randomView.cpp : CrandomView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "random.h"
#endif

#include "randomDoc.h"
#include "randomView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CrandomView

IMPLEMENT_DYNCREATE(CrandomView, CView)

BEGIN_MESSAGE_MAP(CrandomView, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CrandomView 构造/析构

CrandomView::CrandomView()
{
	// TODO: 在此处添加构造代码

}

CrandomView::~CrandomView()
{
}

BOOL CrandomView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CrandomView 绘制

void CrandomView::OnDraw(CDC* pDC)
{
	CrandomDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 在此处为本机数据添加绘制代码
}


// CrandomView 诊断

#ifdef _DEBUG
void CrandomView::AssertValid() const
{
	CView::AssertValid();
}

void CrandomView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CrandomDoc* CrandomView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CrandomDoc)));
	return (CrandomDoc*)m_pDocument;
}
#endif //_DEBUG


// CrandomView 消息处理程序




void CrandomView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CrandomDoc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect rect(30, 45, 250, 200);
	dc.Rectangle(&rect);
	CRect ran(300, 45, 600, 200);
	dc.Rectangle(&ran);
	CRect redt(700, 45, 800, 200);
	dc.Rectangle(&redt);

	int a = rand() % 50 + 5;
	int b = rand() % 100 + 6;
	int c;
	c = a + b;
	pDoc->A.Format(_T("%d"), a);
	pDoc->B.Format(_T("%d"), b);
	pDoc->C.Format(_T("%d"), c);

	GetClientRect(&ran);
	GetClientRect(&redt);
	GetClientRect(&rect);

	if(point.x<250&&point.x>30&&point.y<200&&point.y>45)
	dc.TextOutW(point.x, point.y, pDoc->A);
	else if (point.x<600 && point.x>300 && point.y<200 && point.y>45)
	dc.TextOutW(point.x, point.y, pDoc->B);
     else if (point.x<800 && point.x>700 && point.y<200 && point.y>45)
	dc.TextOutW(point.x, point.y, pDoc->C);
	 else dc.TextOutW(point.x, point.y, pDoc->warn);
	CView::OnLButtonDown(nFlags, point);
}
