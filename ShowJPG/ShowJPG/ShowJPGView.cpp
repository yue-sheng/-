
// ShowJPGView.cpp : CShowJPGView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ShowJPG.h"
#endif

#include "ShowJPGDoc.h"
#include "ShowJPGView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CShowJPGView

IMPLEMENT_DYNCREATE(CShowJPGView, CView)

BEGIN_MESSAGE_MAP(CShowJPGView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CShowJPGView::OnFileOpen)
END_MESSAGE_MAP()

// CShowJPGView 构造/析构

CShowJPGView::CShowJPGView()
{
	// TODO: 在此处添加构造代码

}

CShowJPGView::~CShowJPGView()
{
}

BOOL CShowJPGView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CShowJPGView 绘制

void CShowJPGView::OnDraw(CDC* /*pDC*/)
{
	CShowJPGDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CShowJPGView 诊断

#ifdef _DEBUG
void CShowJPGView::AssertValid() const
{
	CView::AssertValid();
}

void CShowJPGView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CShowJPGDoc* CShowJPGView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CShowJPGDoc)));
	return (CShowJPGDoc*)m_pDocument;
}
#endif //_DEBUG


// CShowJPGView 消息处理程序


void CShowJPGView::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CImage img;
		CString filename = cfd.GetPathName();
		
		img.Load(filename);

		img.Draw(this->GetDC()->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
		//dc.TextOutW(300, 300, fifename);
	}
}
