
// AddDlgView.cpp : CAddDlgView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "AddDlg.h"
#endif

#include "AddDlgDoc.h"
#include "AddDlgView.h"
#include"AddDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAddDlgView

IMPLEMENT_DYNCREATE(CAddDlgView, CView)

BEGIN_MESSAGE_MAP(CAddDlgView, CView)
	ON_COMMAND(ID_ADD, &CAddDlgView::OnAdd)
END_MESSAGE_MAP()

// CAddDlgView 构造/析构

CAddDlgView::CAddDlgView()
{
	// TODO: 在此处添加构造代码

}

CAddDlgView::~CAddDlgView()
{
}

BOOL CAddDlgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CAddDlgView 绘制

void CAddDlgView::OnDraw(CDC* /*pDC*/)
{
	CAddDlgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CAddDlgView 诊断

#ifdef _DEBUG
void CAddDlgView::AssertValid() const
{
	CView::AssertValid();
}

void CAddDlgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAddDlgDoc* CAddDlgView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAddDlgDoc)));
	return (CAddDlgDoc*)m_pDocument;
}
#endif //_DEBUG


// CAddDlgView 消息处理程序


void CAddDlgView::OnAdd()
{
	// TODO: 在此添加命令处理程序代码
	AddDialog dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		int A, B, C;
		A = dlg.a;
		B = dlg.b;

	}
}
