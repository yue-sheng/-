
// timerView.cpp : CtimerView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "timer.h"
#endif

#include "timerDoc.h"
#include "timerView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtimerView

IMPLEMENT_DYNCREATE(CtimerView, CView)

BEGIN_MESSAGE_MAP(CtimerView, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CtimerView 构造/析构

CtimerView::CtimerView()
{
	// TODO: 在此处添加构造代码
	
}

CtimerView::~CtimerView()
{
}

BOOL CtimerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CtimerView 绘制

void CtimerView::OnDraw(CDC* pDC)
{
	CtimerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (pDoc->set)
	{
		
			SetTimer(0, 200, NULL);
			pDoc->set = false;
		
	}
	
		pDC->Ellipse(pDoc->re);
	
	// TODO: 在此处为本机数据添加绘制代码
}


// CtimerView 诊断

#ifdef _DEBUG
void CtimerView::AssertValid() const
{
	CView::AssertValid();
}

void CtimerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CtimerDoc* CtimerView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtimerDoc)));
	return (CtimerDoc*)m_pDocument;
}
#endif //_DEBUG


// CtimerView 消息处理程序


void CtimerView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CtimerDoc* pDoc = GetDocument();
	CRect cr;
	GetClientRect(&cr);
	
	if (pDoc->flag==0&&pDoc->re.bottom < (cr.bottom - cr.top))
	{
		pDoc->re.top += 10;
		pDoc->re.bottom += 10;
	}
	else pDoc->flag += 1;
	if (pDoc->flag >= 1 && (pDoc->re.top>0))
	{

		pDoc->re.top -= 10;
		pDoc->re.bottom -= 10;

	}
	else pDoc->flag = 0;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
