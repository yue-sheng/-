
// InOutfView.cpp : CInOutfView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "InOutf.h"
#endif

#include "InOutfDoc.h"
#include "InOutfView.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CInOutfView

IMPLEMENT_DYNCREATE(CInOutfView, CView)

BEGIN_MESSAGE_MAP(CInOutfView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CInOutfView::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &CInOutfView::OnFileSaveAs)
END_MESSAGE_MAP()

// CInOutfView 构造/析构

CInOutfView::CInOutfView()
{
	// TODO: 在此处添加构造代码

}

CInOutfView::~CInOutfView()
{
}

BOOL CInOutfView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CInOutfView 绘制

void CInOutfView::OnDraw(CDC* /*pDC*/)
{
	CInOutfDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CInOutfView 诊断

#ifdef _DEBUG
void CInOutfView::AssertValid() const
{
	CView::AssertValid();
}

void CInOutfView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CInOutfDoc* CInOutfView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CInOutfDoc)));
	return (CInOutfDoc*)m_pDocument;
}
#endif //_DEBUG


// CInOutfView 消息处理程序


void CInOutfView::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cdf(true);
	int r = cdf.DoModal();
	if (r == IDOK)
	{
		CString filename = cdf.GetPathName();
		ifstream ifs(filename);
		string s;
		int x = 20; int y = 10;
		while (ifs >> s)
		{
			y += 30;
		}
	}
}


void CInOutfView::OnFileSaveAs()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cdf(false);
	int r = cdf.DoModal();
	if (r == IDOK)
	{
		ofstream ofs(cdf.GetPathName());
		//ofs << "OK" << endl;
		CString s = cdf.GetPathName();
		ofs << CT2A(s.GetString()) << endl;
	}
}
