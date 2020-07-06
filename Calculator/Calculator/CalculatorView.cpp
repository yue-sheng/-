
// CalculatorView.cpp : CCalculatorView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Calculator.h"
#endif

#include "CalculatorDoc.h"
#include "CalculatorView.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCalculatorView

IMPLEMENT_DYNCREATE(CCalculatorView, CView)

BEGIN_MESSAGE_MAP(CCalculatorView, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CCalculatorView ����/����

CCalculatorView::CCalculatorView()
{
	// TODO: �ڴ˴���ӹ������

}

CCalculatorView::~CCalculatorView()
{
}

BOOL CCalculatorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCalculatorView ����

void CCalculatorView::OnDraw(CDC* /*pDC*/)
{
	CCalculatorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCalculatorView ���

#ifdef _DEBUG
void CCalculatorView::AssertValid() const
{
	CView::AssertValid();
}

void CCalculatorView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCalculatorDoc* CCalculatorView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCalculatorDoc)));
	return (CCalculatorDoc*)m_pDocument;
}
#endif //_DEBUG


// CCalculatorView ��Ϣ�������


void CCalculatorView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDlg0 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		
	}
	CView::OnLButtonDblClk(nFlags, point);
}
