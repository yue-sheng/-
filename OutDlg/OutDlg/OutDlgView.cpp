
// OutDlgView.cpp : COutDlgView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// COutDlgView ����/����

COutDlgView::COutDlgView()
{
	// TODO: �ڴ˴���ӹ������

}

COutDlgView::~COutDlgView()
{
}

BOOL COutDlgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// COutDlgView ����

void COutDlgView::OnDraw(CDC* /*pDC*/)
{
	COutDlgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// COutDlgView ���

#ifdef _DEBUG
void COutDlgView::AssertValid() const
{
	CView::AssertValid();
}

void COutDlgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

COutDlgDoc* COutDlgView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COutDlgDoc)));
	return (COutDlgDoc*)m_pDocument;
}
#endif //_DEBUG


// COutDlgView ��Ϣ�������


void COutDlgView::OnShowdlg()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		CString s;
		s = "�����˳��Ի���";
		GetDC()->TextOutW(400, 400, s);
	}
}
