
// bitmapView.cpp : CbitmapView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "bitmap.h"
#endif

#include "bitmapDoc.h"
#include "bitmapView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CbitmapView

IMPLEMENT_DYNCREATE(CbitmapView, CView)

BEGIN_MESSAGE_MAP(CbitmapView, CView)
END_MESSAGE_MAP()

// CbitmapView ����/����

CbitmapView::CbitmapView()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CbitmapView::~CbitmapView()
{
}

BOOL CbitmapView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CbitmapView ����

void CbitmapView::OnDraw(CDC* pDC)
{
	CbitmapDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0,m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// CbitmapView ���

#ifdef _DEBUG
void CbitmapView::AssertValid() const
{
	CView::AssertValid();
}

void CbitmapView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CbitmapDoc* CbitmapView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CbitmapDoc)));
	return (CbitmapDoc*)m_pDocument;
}
#endif //_DEBUG


// CbitmapView ��Ϣ�������
