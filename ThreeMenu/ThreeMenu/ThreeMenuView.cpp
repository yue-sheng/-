
// ThreeMenuView.cpp : CThreeMenuView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ThreeMenu.h"
#endif

#include "ThreeMenuDoc.h"
#include "ThreeMenuView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CThreeMenuView

IMPLEMENT_DYNCREATE(CThreeMenuView, CView)

BEGIN_MESSAGE_MAP(CThreeMenuView, CView)
	ON_COMMAND(ID_LINE, &CThreeMenuView::OnLine)
	ON_COMMAND(ID_RECTANGLE, &CThreeMenuView::OnRectangle)
	ON_COMMAND(ID_ELLIPSE, &CThreeMenuView::OnEllipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CThreeMenuView 构造/析构

CThreeMenuView::CThreeMenuView()
{
	// TODO: 在此处添加构造代码
	
}

CThreeMenuView::~CThreeMenuView()
{
}

BOOL CThreeMenuView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CThreeMenuView 绘制

void CThreeMenuView::OnDraw(CDC* pDC)
{
	CThreeMenuDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if(pDoc->flag==1)
	{
		pDC->MoveTo(m_point);
		pDC->LineTo(cp);
	}
	else if(pDoc->flag==2)
	pDC->Rectangle(pDoc->m_tagRec);
	else if(pDoc->flag==3)
	pDC->Ellipse(pDoc->m_tagRec);
	// TODO: 在此处为本机数据添加绘制代码
}


// CThreeMenuView 诊断

#ifdef _DEBUG
void CThreeMenuView::AssertValid() const
{
	CView::AssertValid();
}

void CThreeMenuView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CThreeMenuDoc* CThreeMenuView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CThreeMenuDoc)));
	return (CThreeMenuDoc*)m_pDocument;
}
#endif //_DEBUG


// CThreeMenuView 消息处理程序


void CThreeMenuView::OnLine()
{
	// TODO: 在此添加命令处理程序代码
	CThreeMenuDoc* pDoc = GetDocument();
	
	pDoc->flag = 1;
	
}


void CThreeMenuView::OnRectangle()
{
	// TODO: 在此添加命令处理程序代码
	CThreeMenuDoc* pDoc = GetDocument();
	
	pDoc->flag = 2;
	
}


void CThreeMenuView::OnEllipse()
{
	// TODO: 在此添加命令处理程序代码
	CThreeMenuDoc* pDoc = GetDocument();
	
	pDoc->flag = 3;
	
}


void CThreeMenuView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	SetCapture();
	
	CThreeMenuDoc* pDoc = GetDocument();
	CPoint cp(point.x, point.y);
	if(pDoc->flag==1)
	{ 
		m_point = cp;
		
		pDoc->set = true;
	}
	
	pDoc->m_tagRec.left = point.x;
   	pDoc->m_tagRec.top = point.y;

	CView::OnLButtonDown(nFlags, point);
	
}


void CThreeMenuView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	ReleaseCapture();
	CThreeMenuDoc* pDoc = GetDocument();
	CPoint cp1(point.x, point.y);
	CClientDC dc(this);
	if (pDoc->flag == 1)
	{
		pDoc->set = false;
		cp = point;
		dc.MoveTo(m_point);
		
	}
	
	
	pDoc->m_tagRec.right = point.x;
	pDoc->m_tagRec.bottom = point.y;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonUp(nFlags, point);
}


void CThreeMenuView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CThreeMenuDoc* pDoc = GetDocument();
	CClientDC dc(this);
	if(pDoc->flag==1)
	{
		if (pDoc->set)
		{
			dc.MoveTo(m_point);
			
		}
	}
		
	
	CView::OnMouseMove(nFlags, point);
}
