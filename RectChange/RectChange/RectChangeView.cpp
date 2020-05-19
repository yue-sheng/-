
// RectChangeView.cpp : CRectChangeView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "RectChange.h"
#endif

#include "RectChangeDoc.h"
#include "RectChangeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRectChangeView

IMPLEMENT_DYNCREATE(CRectChangeView, CView)

BEGIN_MESSAGE_MAP(CRectChangeView, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CRectChangeView 构造/析构

CRectChangeView::CRectChangeView()
{
	// TODO: 在此处添加构造代码
	count = 1;
	cc = 1;
	m_rect.left = 650; m_rect.top =250; m_rect.right = 700; m_rect.bottom =300;
}

CRectChangeView::~CRectChangeView()
{
}

BOOL CRectChangeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式
	
	return CView::PreCreateWindow(cs);
}

// CRectChangeView 绘制

void CRectChangeView::OnDraw(CDC* pDC)
{
	CRectChangeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 在此处为本机数据添加绘制代码

	
	
	pDC->Rectangle(m_rect);

}


// CRectChangeView 诊断

#ifdef _DEBUG
void CRectChangeView::AssertValid() const
{
	CView::AssertValid();
}

void CRectChangeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRectChangeDoc* CRectChangeView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRectChangeDoc)));
	return (CRectChangeDoc*)m_pDocument;
}
#endif //_DEBUG


// CRectChangeView 消息处理程序


void CRectChangeView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (m_rect.left > 0)
		{
			m_rect.left -= 5;
			m_rect.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (m_rect.right <= (clientRec.right- clientRec.left))
		{
			m_rect.left += 5;
			m_rect.right += 5;
		}
		break;
	case VK_UP:
		if (m_rect.top > 0)
		{
			m_rect.top -= 5;
			m_rect.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (m_rect.bottom<=(clientRec.bottom- clientRec.top))
		{
			m_rect.top += 5;
			m_rect.bottom += 5;
		}
		break;
	case VK_END:
		if (m_rect.left > 0|| m_rect.top > 0)
		{  
			m_rect.left += 5 ;
			m_rect.right +=5 * count;
			m_rect.top += 5 ;
			m_rect.bottom += 5 * count;
		}
		count +=1;
		break;
	
	case VK_HOME:
		if ((m_rect.right - m_rect.left != 0) || (m_rect.bottom - m_rect.top != 0))
		{
			if (m_rect.right > 0 || m_rect.bottom <= (clientRec.bottom - clientRec.top))
			{
				m_rect.left -= 1;
				m_rect.right -= 1 * cc;
				m_rect.top -= 1;
				m_rect.bottom -= 1 * cc;
			}
		}
		cc += 1;
		break;
}
	InvalidateRect(NULL, TRUE);

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CRectChangeView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	m_rect.left = 650; m_rect.top = 250; m_rect.right = 700; m_rect.bottom = 300;

	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
