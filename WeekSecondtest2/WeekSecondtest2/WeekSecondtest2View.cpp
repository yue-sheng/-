
// WeekSecondtest2View.cpp : CWeekSecondtest2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "WeekSecondtest2.h"
#endif

#include "WeekSecondtest2Doc.h"
#include "WeekSecondtest2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeekSecondtest2View

IMPLEMENT_DYNCREATE(CWeekSecondtest2View, CView)

BEGIN_MESSAGE_MAP(CWeekSecondtest2View, CView)
END_MESSAGE_MAP()

// CWeekSecondtest2View 构造/析构

CWeekSecondtest2View::CWeekSecondtest2View()
{
	// TODO: 在此处添加构造代码

}

CWeekSecondtest2View::~CWeekSecondtest2View()
{
}

BOOL CWeekSecondtest2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeekSecondtest2View 绘制

void CWeekSecondtest2View::OnDraw(CDC* pDC)
{
	CWeekSecondtest2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->TextOutW(200, 200, pDoc->s);
	pDC->TextOutW(250, 250, pDoc->C);
}


// CWeekSecondtest2View 诊断

#ifdef _DEBUG
void CWeekSecondtest2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeekSecondtest2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeekSecondtest2Doc* CWeekSecondtest2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeekSecondtest2Doc)));
	return (CWeekSecondtest2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeekSecondtest2View 消息处理程序
