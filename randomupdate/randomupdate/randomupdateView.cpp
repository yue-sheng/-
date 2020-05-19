
// randomupdateView.cpp : CrandomupdateView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "randomupdate.h"
#endif

#include "randomupdateDoc.h"
#include "randomupdateView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CrandomupdateView

IMPLEMENT_DYNCREATE(CrandomupdateView, CView)

BEGIN_MESSAGE_MAP(CrandomupdateView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CrandomupdateView 构造/析构

CrandomupdateView::CrandomupdateView()
{
	// TODO: 在此处添加构造代码
	c = 0;
	count = 1;
	flag = 0;
}

CrandomupdateView::~CrandomupdateView()
{
}

BOOL CrandomupdateView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CrandomupdateView 绘制

void CrandomupdateView::OnDraw(CDC* pDC)
{
	CrandomupdateDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CrandomupdateView 诊断

#ifdef _DEBUG
void CrandomupdateView::AssertValid() const
{
	CView::AssertValid();
}

void CrandomupdateView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CrandomupdateDoc* CrandomupdateView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CrandomupdateDoc)));
	return (CrandomupdateDoc*)m_pDocument;
}
#endif //_DEBUG


// CrandomupdateView 消息处理程序


void CrandomupdateView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 1)
	{
		count += 1; count = count % 4 ;
		if (count == 0)
			count = 4;
	}

	CrandomupdateDoc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect rect(30, 45, 250, 200);
	dc.Rectangle(&rect);
	CRect ran(300, 45, 600, 200);
	dc.Rectangle(&ran);
	CRect redt(700, 45, 800, 200);
	dc.Rectangle(&redt);
	CRect rect1(850, 45, 950, 200);
	dc.Rectangle(&rect1);



	int a = rand() % 50 + 5;
	int b = rand() % 100 + 6;
	int d = a;
	int e = b;
	
	pDoc->A.Format(_T("%d"), d);
	pDoc->B.Format(_T("%d"), e);
	

	GetClientRect(&ran);
	GetClientRect(&redt);
	GetClientRect(&rect);

	if (point.x<250 && point.x>30 && point.y<200 && point.y>45)
		dc.TextOutW(point.x, point.y, pDoc->A);
	else if (point.x<600 && point.x>300 && point.y<200 && point.y>45)
		dc.TextOutW(point.x, point.y, pDoc->B);
	else if (point.x < 950 && point.x>850 && point.y < 200 && point.y>45)
	{
		flag == 0;
		switch (count)
		{
		case 1:dc.TextOutW(point.x, point.y, pDoc->add);
			c = d + e;
			break;
		case 2:dc.TextOutW(point.x, point.y, pDoc->del);
			c = d - e;
			break;
		case 3:dc.TextOutW(point.x, point.y, pDoc->mul);
			c = d*e;
			break;
		case 4:dc.TextOutW(point.x, point.y, pDoc->div);
			c = d / e;
			break;
		}
		flag = 1;
	}
	else if (point.x < 800 && point.x>700 && point.y < 200 && point.y>45)
	{
		
		pDoc->C.Format(_T("%d"), c);
		dc.TextOutW(point.x, point.y, pDoc->C);
	}
	else dc.TextOutW(point.x, point.y, pDoc->warn);
	CView::OnLButtonDown(nFlags, point);
}
