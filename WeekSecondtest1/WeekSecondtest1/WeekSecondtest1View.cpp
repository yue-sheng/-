
// WeekSecondtest1View.cpp : CWeekSecondtest1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "WeekSecondtest1.h"
#endif

#include "WeekSecondtest1Doc.h"
#include "WeekSecondtest1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeekSecondtest1View

IMPLEMENT_DYNCREATE(CWeekSecondtest1View, CView)

BEGIN_MESSAGE_MAP(CWeekSecondtest1View, CView)
END_MESSAGE_MAP()

// CWeekSecondtest1View 构造/析构

CWeekSecondtest1View::CWeekSecondtest1View()
{
	// TODO: 在此处添加构造代码

}

CWeekSecondtest1View::~CWeekSecondtest1View()
{
}

BOOL CWeekSecondtest1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeekSecondtest1View 绘制

void CWeekSecondtest1View::OnDraw(CDC* pDC)
{
	CWeekSecondtest1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	CString C;
	int c;
	c = 100;
	s = _T("我是石胜玲");
	C.Format(_T("%d"), c);
	pDC->TextOutW(200,200,s);
	pDC->TextOutW(250, 250, C);
}


// CWeekSecondtest1View 诊断

#ifdef _DEBUG
void CWeekSecondtest1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeekSecondtest1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeekSecondtest1Doc* CWeekSecondtest1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeekSecondtest1Doc)));
	return (CWeekSecondtest1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeekSecondtest1View 消息处理程序
