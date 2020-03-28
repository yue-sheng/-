
// ColorCircleChangeView.cpp : CColorCircleChangeView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ColorCircleChange.h"
#endif

#include "ColorCircleChangeDoc.h"
#include "ColorCircleChangeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CColorCircleChangeView

IMPLEMENT_DYNCREATE(CColorCircleChangeView, CView)

BEGIN_MESSAGE_MAP(CColorCircleChangeView, CView)
	ON_COMMAND(ID_COLORCHANGE, &CColorCircleChangeView::OnColorchange)
END_MESSAGE_MAP()

// CColorCircleChangeView 构造/析构

CColorCircleChangeView::CColorCircleChangeView()
{
	// TODO: 在此处添加构造代码
	x = 707; y = 298;
	red = 0; green = 0; blue = 0;

	rect.left = x - 10; rect.top = y - 10;
	rect.right = x + 10; rect.bottom = y + 10;
}

CColorCircleChangeView::~CColorCircleChangeView()
{
}

BOOL CColorCircleChangeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CColorCircleChangeView 绘制

void CColorCircleChangeView::OnDraw(CDC* pDC)
{
	CColorCircleChangeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(rect);
}


// CColorCircleChangeView 诊断

#ifdef _DEBUG
void CColorCircleChangeView::AssertValid() const
{
	CView::AssertValid();
}

void CColorCircleChangeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CColorCircleChangeDoc* CColorCircleChangeView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CColorCircleChangeDoc)));
	return (CColorCircleChangeDoc*)m_pDocument;
}
#endif //_DEBUG


// CColorCircleChangeView 消息处理程序


void CColorCircleChangeView::OnColorchange()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	for (int i = 0; i<2 * y; i = rect.bottom)
	{

		red += 15;
		green += 10;
		blue += 8;
		color = RGB(red, green, blue);
		rect.left -= 1;
		rect.top -= 1;
		rect.right += 1;
		rect.bottom += 1;
		CBrush newBrush(color);
		CBrush *oldBrush = dc.SelectObject(&newBrush);

		dc.Ellipse(rect);
		dc.SelectObject(oldBrush);


		Invalidate();

	}
}
