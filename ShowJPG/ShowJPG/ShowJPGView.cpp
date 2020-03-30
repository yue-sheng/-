
// ShowJPGView.cpp : CShowJPGView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ShowJPG.h"
#endif

#include "ShowJPGDoc.h"
#include "ShowJPGView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CShowJPGView

IMPLEMENT_DYNCREATE(CShowJPGView, CView)

BEGIN_MESSAGE_MAP(CShowJPGView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CShowJPGView::OnFileOpen)
END_MESSAGE_MAP()

// CShowJPGView ����/����

CShowJPGView::CShowJPGView()
{
	// TODO: �ڴ˴���ӹ������

}

CShowJPGView::~CShowJPGView()
{
}

BOOL CShowJPGView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CShowJPGView ����

void CShowJPGView::OnDraw(CDC* /*pDC*/)
{
	CShowJPGDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CShowJPGView ���

#ifdef _DEBUG
void CShowJPGView::AssertValid() const
{
	CView::AssertValid();
}

void CShowJPGView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CShowJPGDoc* CShowJPGView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CShowJPGDoc)));
	return (CShowJPGDoc*)m_pDocument;
}
#endif //_DEBUG


// CShowJPGView ��Ϣ�������


void CShowJPGView::OnFileOpen()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CImage img;
		CString filename = cfd.GetPathName();
		
		img.Load(filename);

		img.Draw(this->GetDC()->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
		//dc.TextOutW(300, 300, fifename);
	}
}
