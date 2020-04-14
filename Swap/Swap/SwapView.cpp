
// SwapView.cpp : CSwapView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Swap.h"
#endif

#include "SwapDoc.h"
#include "SwapView.h"
#include"SpDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSwapView

IMPLEMENT_DYNCREATE(CSwapView, CView)

BEGIN_MESSAGE_MAP(CSwapView, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CSwapView 构造/析构

CSwapView::CSwapView()
{
	// TODO: 在此处添加构造代码

}

CSwapView::~CSwapView()
{
}

BOOL CSwapView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CSwapView 绘制

void CSwapView::OnDraw(CDC* /*pDC*/)
{
	CSwapDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CSwapView 诊断

#ifdef _DEBUG
void CSwapView::AssertValid() const
{
	CView::AssertValid();
}

void CSwapView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSwapDoc* CSwapView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSwapDoc)));
	return (CSwapDoc*)m_pDocument;
}
#endif //_DEBUG


// CSwapView 消息处理程序


void CSwapView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	SpDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		
		A = dlg.a;
		B = dlg.b;
		
		
	}
	CView::OnLButtonDblClk(nFlags, point);
}
