
// bitmapView.cpp : CbitmapView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "bitmap.h"
#endif

#include "bitmapDoc.h"
#include "bitmapView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CbitmapView

IMPLEMENT_DYNCREATE(CbitmapView, CView)

BEGIN_MESSAGE_MAP(CbitmapView, CView)
END_MESSAGE_MAP()

// CbitmapView 构造/析构

CbitmapView::CbitmapView()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CbitmapView::~CbitmapView()
{
}

BOOL CbitmapView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CbitmapView 绘制

void CbitmapView::OnDraw(CDC* pDC)
{
	CbitmapDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0,m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// CbitmapView 诊断

#ifdef _DEBUG
void CbitmapView::AssertValid() const
{
	CView::AssertValid();
}

void CbitmapView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CbitmapDoc* CbitmapView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CbitmapDoc)));
	return (CbitmapDoc*)m_pDocument;
}
#endif //_DEBUG


// CbitmapView 消息处理程序
