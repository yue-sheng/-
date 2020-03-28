
// VKView.cpp : CVKView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "VK.h"
#endif

#include "VKDoc.h"
#include "VKView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVKView

IMPLEMENT_DYNCREATE(CVKView, CView)

BEGIN_MESSAGE_MAP(CVKView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_NCMOUSEMOVE()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CVKView 构造/析构

CVKView::CVKView()
{
	// TODO: 在此处添加构造代码

}

CVKView::~CVKView()
{
}

BOOL CVKView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CVKView 绘制

void CVKView::OnDraw(CDC* pDC)
{
	CVKDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->m_tagRec);
}


// CVKView 诊断

#ifdef _DEBUG
void CVKView::AssertValid() const
{
	CView::AssertValid();
}

void CVKView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVKDoc* CVKView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVKDoc)));
	return (CVKDoc*)m_pDocument;
}
#endif //_DEBUG


// CVKView 消息处理程序


void CVKView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	SetCapture();
	CVKDoc* pDoc = GetDocument();
	pDoc->m_tagRec.left = point.x;
	pDoc->m_tagRec.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CVKView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	ReleaseCapture();
	CVKDoc* pDoc = GetDocument();
	
	pDoc->m_tagRec.right = point.x ;
	pDoc->m_tagRec.bottom = point.y ;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonUp(nFlags, point);
}


void CVKView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("WM_MOUSEMOVE");
	CString cs;
	CString css;
	cs.Format(_T("X=%d    "), point.x);
	css.Format(_T("    Y=%d    "), point.y);
	CClientDC dc(this);
	dc.TextOutW(20, 20, s);

	dc.TextOutW(200, 20, cs);
	dc.TextOutW(300, 20, css);
	CView::OnMouseMove(nFlags, point);
}
