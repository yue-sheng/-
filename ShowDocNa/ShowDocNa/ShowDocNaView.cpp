
// ShowDocNaView.cpp : CShowDocNaView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ShowDocNa.h"
#endif

#include "ShowDocNaDoc.h"
#include "ShowDocNaView.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CShowDocNaView

IMPLEMENT_DYNCREATE(CShowDocNaView, CView)

BEGIN_MESSAGE_MAP(CShowDocNaView, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_SHOW, &CShowDocNaView::OnShow)
END_MESSAGE_MAP()

// CShowDocNaView 构造/析构

CShowDocNaView::CShowDocNaView()
{
	// TODO: 在此处添加构造代码

}

CShowDocNaView::~CShowDocNaView()
{
}

BOOL CShowDocNaView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CShowDocNaView 绘制

void CShowDocNaView::OnDraw(CDC* /*pDC*/)
{
	CShowDocNaDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CShowDocNaView 诊断

#ifdef _DEBUG
void CShowDocNaView::AssertValid() const
{
	CView::AssertValid();
}

void CShowDocNaView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CShowDocNaDoc* CShowDocNaView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CShowDocNaDoc)));
	return (CShowDocNaDoc*)m_pDocument;
}
#endif //_DEBUG


// CShowDocNaView 消息处理程序


void CShowDocNaView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CFileDialog cd(true);
	int r = cd.DoModal();
	filename = cd.GetPathName();
	
	if (r == IDOK)
	{
		
		dc.TextOutW(200, 200, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void CShowDocNaView::OnShow()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	dlg.edit = filename;
	int t = dlg.DoModal();
	if (t == IDOK)
	{

	}
	
}
