
// jpgIDView.cpp : CjpgIDView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "jpgID.h"
#endif

#include "jpgIDDoc.h"
#include "jpgIDView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CjpgIDView

IMPLEMENT_DYNCREATE(CjpgIDView, CView)

BEGIN_MESSAGE_MAP(CjpgIDView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CjpgIDView::OnFileOpen)
END_MESSAGE_MAP()

// CjpgIDView 构造/析构

CjpgIDView::CjpgIDView()
{
	// TODO: 在此处添加构造代码

}

CjpgIDView::~CjpgIDView()
{
}

BOOL CjpgIDView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CjpgIDView 绘制

void CjpgIDView::OnDraw(CDC* /*pDC*/)
{
	CjpgIDDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CjpgIDView 诊断

#ifdef _DEBUG
void CjpgIDView::AssertValid() const
{
	CView::AssertValid();
}

void CjpgIDView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CjpgIDDoc* CjpgIDView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CjpgIDDoc)));
	return (CjpgIDDoc*)m_pDocument;
}
#endif //_DEBUG


// CjpgIDView 消息处理程序


void CjpgIDView::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
		if (r == IDOK)
		{
			CString fifename = cfd.GetPathName();
				dc.TextOutW(300, 300, fifename);
		}
}
