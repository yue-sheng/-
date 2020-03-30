
// jpgIDView.cpp : CjpgIDView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CjpgIDView ����/����

CjpgIDView::CjpgIDView()
{
	// TODO: �ڴ˴���ӹ������

}

CjpgIDView::~CjpgIDView()
{
}

BOOL CjpgIDView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CjpgIDView ����

void CjpgIDView::OnDraw(CDC* /*pDC*/)
{
	CjpgIDDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CjpgIDView ���

#ifdef _DEBUG
void CjpgIDView::AssertValid() const
{
	CView::AssertValid();
}

void CjpgIDView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CjpgIDDoc* CjpgIDView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CjpgIDDoc)));
	return (CjpgIDDoc*)m_pDocument;
}
#endif //_DEBUG


// CjpgIDView ��Ϣ�������


void CjpgIDView::OnFileOpen()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
		if (r == IDOK)
		{
			CString fifename = cfd.GetPathName();
				dc.TextOutW(300, 300, fifename);
		}
}
