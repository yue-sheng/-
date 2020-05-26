
// ShowDocNaView.cpp : CShowDocNaView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CShowDocNaView ����/����

CShowDocNaView::CShowDocNaView()
{
	// TODO: �ڴ˴���ӹ������

}

CShowDocNaView::~CShowDocNaView()
{
}

BOOL CShowDocNaView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CShowDocNaView ����

void CShowDocNaView::OnDraw(CDC* /*pDC*/)
{
	CShowDocNaDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CShowDocNaView ���

#ifdef _DEBUG
void CShowDocNaView::AssertValid() const
{
	CView::AssertValid();
}

void CShowDocNaView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CShowDocNaDoc* CShowDocNaView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CShowDocNaDoc)));
	return (CShowDocNaDoc*)m_pDocument;
}
#endif //_DEBUG


// CShowDocNaView ��Ϣ�������


void CShowDocNaView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
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
	// TODO: �ڴ���������������
	MyDlg dlg;
	dlg.edit = filename;
	int t = dlg.DoModal();
	if (t == IDOK)
	{

	}
	
}
