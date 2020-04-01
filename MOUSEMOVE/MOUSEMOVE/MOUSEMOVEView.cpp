
// MOUSEMOVEView.cpp : CMOUSEMOVEView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MOUSEMOVE.h"
#endif

#include "MOUSEMOVEDoc.h"
#include "MOUSEMOVEView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMOUSEMOVEView

IMPLEMENT_DYNCREATE(CMOUSEMOVEView, CView)

BEGIN_MESSAGE_MAP(CMOUSEMOVEView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMOUSEMOVEView 构造/析构

CMOUSEMOVEView::CMOUSEMOVEView()
{
	// TODO: 在此处添加构造代码
	num = 0;
	mouse = 0;
	flag = false;
}

CMOUSEMOVEView::~CMOUSEMOVEView()
{
}

BOOL CMOUSEMOVEView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMOUSEMOVEView 绘制

void CMOUSEMOVEView::OnDraw(CDC* pDC)
{
	CMOUSEMOVEDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMOUSEMOVEView 诊断

#ifdef _DEBUG
void CMOUSEMOVEView::AssertValid() const
{
	CView::AssertValid();
}

void CMOUSEMOVEView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMOUSEMOVEDoc* CMOUSEMOVEView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMOUSEMOVEDoc)));
	return (CMOUSEMOVEDoc*)m_pDocument;
}
#endif //_DEBUG


// CMOUSEMOVEView 消息处理程序


void CMOUSEMOVEView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	SetCapture();
	flag = true;
	x1 = point.x;
	y1 = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMOUSEMOVEView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CMOUSEMOVEDoc* pDoc = GetDocument();
	ReleaseCapture();
	flag = false;
	CString m;
	m.Format(L"MOUSEMOVE:%d,发生一次所需像素%d", mouse,num);
	dc.TextOutW(30, 30, m);
	CView::OnLButtonUp(nFlags, point);
}


void CMOUSEMOVEView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	if (flag)
	{
		x2 = x1;
		y2 = y1;
		x1 = point.x;
		y1 = point.y;
		mouse++;
		num = (x2 - x1) + (y2 - y1);
		if (num < 0)
			num -= num;
	}
	




	CView::OnMouseMove(nFlags, point);
}
