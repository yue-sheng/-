
// UsingView.cpp : CUsingView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Using.h"
#endif

#include "UsingDoc.h"
#include "UsingView.h"
#include"w32.h"
#include "DState.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CUsingView

IMPLEMENT_DYNCREATE(CUsingView, CView)

BEGIN_MESSAGE_MAP(CUsingView, CView)
END_MESSAGE_MAP()

// CUsingView ����/����

CUsingView::CUsingView()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingView::~CUsingView()
{
}

BOOL CUsingView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingView ����

void CUsingView::OnDraw(CDC* pDC)
{
	CUsingDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	s = CString(pchar());
	pDC->TextOutW(200, 200, s);

	CString s1;
	F1 cs;
	s1.Format(_T("%d,��̬���еĵ�����ȡֵ"), cs.GetA());
	pDC->TextOutW(500, 500, s1);

	CString ss;
	ss.Format(_T("%d,��̬���ȡ��ֵ"), GetInt());
	pDC->TextOutW(400, 300, ss);

	CDState ds;
	CString d;
	d.Format(_T("%d����̬���еĵ�����ȡֵ"), ds.GetS());
	pDC->TextOutW(100, 100, d);

}


// CUsingView ���

#ifdef _DEBUG
void CUsingView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingDoc* CUsingView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingDoc)));
	return (CUsingDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingView ��Ϣ�������
