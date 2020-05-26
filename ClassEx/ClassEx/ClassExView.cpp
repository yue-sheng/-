
// ClassExView.cpp : CClassExView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ClassEx.h"
#endif

#include "ClassExDoc.h"
#include "ClassExView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CClassExView

IMPLEMENT_DYNCREATE(CClassExView, CView)

BEGIN_MESSAGE_MAP(CClassExView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CClassExView::OnFileOpen)
END_MESSAGE_MAP()

// CClassExView 构造/析构

CClassExView::CClassExView()
{
	// TODO: 在此处添加构造代码

}

CClassExView::~CClassExView()
{
}

BOOL CClassExView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CClassExView 绘制

void CClassExView::OnDraw(CDC* pDC)
{
	CClassExDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i<ca.GetSize(); i++)
		img.Draw(pDC->m_hDC, sx, sy, w, h);
}


// CClassExView 诊断

#ifdef _DEBUG
void CClassExView::AssertValid() const
{
	CView::AssertValid();
}

void CClassExView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CClassExDoc* CClassExView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CClassExDoc)));
	return (CClassExDoc*)m_pDocument;
}
#endif //_DEBUG


// CClassExView 消息处理程序


void CClassExView::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码

	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		
		
		CString filename = cfd.GetPathName();
		{
			
			CRect rect;
			img.Load(filename);
			GetClientRect(&rect);
			float rect_ratio = 1.0*rect.Width() / rect.Height();
			float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
			if (rect_ratio > img_ratio)
			{
				h = rect.Height();
				w = img_ratio*h;
				sx = (rect.Width() - w) / 2;
				sy = 0;
			}
			else
			{
				w = rect.Width();
				h = w / img_ratio;
				sx = 0;
				sy = (rect.Height() - h) / 2;
			}
			ca.Add(rect);
		}
		this->Invalidate();
		
		
	
	}

}
