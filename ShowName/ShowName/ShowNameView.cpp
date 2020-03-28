
// ShowNameView.cpp : CShowNameView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ShowName.h"
#endif

#include "ShowNameDoc.h"
#include "ShowNameView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CShowNameView

IMPLEMENT_DYNCREATE(CShowNameView, CView)

BEGIN_MESSAGE_MAP(CShowNameView, CView)
	ON_COMMAND(ID_SHOWNAME, &CShowNameView::OnShowname)
END_MESSAGE_MAP()

// CShowNameView ����/����

CShowNameView::CShowNameView()
{
	// TODO: �ڴ˴���ӹ������

}

CShowNameView::~CShowNameView()
{
}

BOOL CShowNameView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CShowNameView ����

void CShowNameView::OnDraw(CDC* /*pDC*/)
{
	CShowNameDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CShowNameView ���

#ifdef _DEBUG
void CShowNameView::AssertValid() const
{
	CView::AssertValid();
}

void CShowNameView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CShowNameDoc* CShowNameView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CShowNameDoc)));
	return (CShowNameDoc*)m_pDocument;
}
#endif //_DEBUG


// CShowNameView ��Ϣ�������


void CShowNameView::OnShowname()
{
	
	// TODO: �ڴ���������������
	CShowNameDoc* pDoc = GetDocument();
	
	CClientDC dc(this);
	dc.TextOutW(200, 200, pDoc->s);

}
