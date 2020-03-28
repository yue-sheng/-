
// CircleChangeView.cpp : CCircleChangeView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CircleChange.h"
#endif

#include "CircleChangeDoc.h"
#include "CircleChangeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCircleChangeView

IMPLEMENT_DYNCREATE(CCircleChangeView, CView)

BEGIN_MESSAGE_MAP(CCircleChangeView, CView)
	ON_COMMAND(CIRCLECHANGE, &CCircleChangeView::OnCirclechange)
END_MESSAGE_MAP()

// CCircleChangeView 构造/析构

CCircleChangeView::CCircleChangeView()
{
	// TODO: 在此处添加构造代码
	x = 707; y = 298;
	rect.left = x - 10; rect.top = y - 10;
	rect.right = x + 10; rect.bottom = y + 10;
}

CCircleChangeView::~CCircleChangeView()
{
}

BOOL CCircleChangeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCircleChangeView 绘制

void CCircleChangeView::OnDraw(CDC* pDC)
{
	CCircleChangeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCircleChangeView 诊断

#ifdef _DEBUG
void CCircleChangeView::AssertValid() const
{
	CView::AssertValid();
}

void CCircleChangeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCircleChangeDoc* CCircleChangeView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCircleChangeDoc)));
	return (CCircleChangeDoc*)m_pDocument;
}
#endif //_DEBUG


// CCircleChangeView 消息处理程序


void CCircleChangeView::OnCirclechange()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	for (int i = 0; i<2 * y; i = rect.bottom)
	{

		rect.left -= 1;
		rect.top -= 1;
		rect.right += 1;
		rect.bottom += 1;


		Invalidate();
		dc.Ellipse(rect);
	}
}
