
// OutDlgView.cpp : COutDlgView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "OutDlg.h"
#endif

#include "OutDlgDoc.h"
#include "OutDlgView.h"
#include"MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COutDlgView

IMPLEMENT_DYNCREATE(COutDlgView, CView)

BEGIN_MESSAGE_MAP(COutDlgView, CView)
	ON_COMMAND(ID_SHOWDLG, &COutDlgView::OnShowdlg)
END_MESSAGE_MAP()

// COutDlgView 构造/析构

COutDlgView::COutDlgView()
{
	// TODO: 在此处添加构造代码

}

COutDlgView::~COutDlgView()
{
}

BOOL COutDlgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// COutDlgView 绘制

void COutDlgView::OnDraw(CDC* /*pDC*/)
{
	COutDlgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// COutDlgView 诊断

#ifdef _DEBUG
void COutDlgView::AssertValid() const
{
	CView::AssertValid();
}

void COutDlgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

COutDlgDoc* COutDlgView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COutDlgDoc)));
	return (COutDlgDoc*)m_pDocument;
}
#endif //_DEBUG


// COutDlgView 消息处理程序


void COutDlgView::OnShowdlg()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		CString s;
		s = "你已退出对话框";
		GetDC()->TextOutW(400, 400, s);
	}
}
