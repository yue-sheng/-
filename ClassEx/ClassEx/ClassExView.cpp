
// ClassExView.cpp : CClassExView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ClassEx.h"
#endif

#include "ClassExDoc.h"
#include "ClassExView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CClassExView

IMPLEMENT_DYNCREATE(CClassExView, CView)

BEGIN_MESSAGE_MAP(CClassExView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CClassExView::OnFileOpen)
END_MESSAGE_MAP()

// CClassExView ����/����

CClassExView::CClassExView()
{
	// TODO: �ڴ˴���ӹ������

}

CClassExView::~CClassExView()
{
}

BOOL CClassExView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CClassExView ����

void CClassExView::OnDraw(CDC* pDC)
{
	CClassExDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i<ca.GetSize(); i++)
		img.Draw(pDC->m_hDC, sx, sy, w, h);
}


// CClassExView ���

#ifdef _DEBUG
void CClassExView::AssertValid() const
{
	CView::AssertValid();
}

void CClassExView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CClassExDoc* CClassExView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CClassExDoc)));
	return (CClassExDoc*)m_pDocument;
}
#endif //_DEBUG


// CClassExView ��Ϣ�������


void CClassExView::OnFileOpen()
{
	// TODO: �ڴ���������������

	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		
		
		CString filename = cfd.GetPathName();
		{
			
			CRect rect;
			img.Load(filename);
			GetClientRect(&rect);
			float rect_ratio = 1.0*rect.Width() / rect.Height();
			float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
			if (rect_ratio > img_ratio)
			{
				h = rect.Height();
				w = img_ratio*h;
				sx = (rect.Width() - w) / 2;
				sy = 0;
			}
			else
			{
				w = rect.Width();
				h = w / img_ratio;
				sx = 0;
				sy = (rect.Height() - h) / 2;
			}
			ca.Add(rect);
		}
		this->Invalidate();
		
		
	
	}

}
