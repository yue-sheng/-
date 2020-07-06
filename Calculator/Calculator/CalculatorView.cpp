
// CalculatorView.cpp : CCalculatorView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Calculator.h"
#endif

#include "CalculatorDoc.h"
#include "CalculatorView.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCalculatorView

IMPLEMENT_DYNCREATE(CCalculatorView, CView)

BEGIN_MESSAGE_MAP(CCalculatorView, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CCalculatorView 构造/析构

CCalculatorView::CCalculatorView()
{
	// TODO: 在此处添加构造代码

}

CCalculatorView::~CCalculatorView()
{
}

BOOL CCalculatorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCalculatorView 绘制

void CCalculatorView::OnDraw(CDC* /*pDC*/)
{
	CCalculatorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCalculatorView 诊断

#ifdef _DEBUG
void CCalculatorView::AssertValid() const
{
	CView::AssertValid();
}

void CCalculatorView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCalculatorDoc* CCalculatorView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCalculatorDoc)));
	return (CCalculatorDoc*)m_pDocument;
}
#endif //_DEBUG


// CCalculatorView 消息处理程序


void CCalculatorView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	MyDlg0 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		
	}
	CView::OnLButtonDblClk(nFlags, point);
}
