
// RectChangeView.cpp : CRectChangeView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "RectChange.h"
#endif

#include "RectChangeDoc.h"
#include "RectChangeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRectChangeView

IMPLEMENT_DYNCREATE(CRectChangeView, CView)

BEGIN_MESSAGE_MAP(CRectChangeView, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CRectChangeView ����/����

CRectChangeView::CRectChangeView()
{
	// TODO: �ڴ˴���ӹ������
	count = 1;
	cc = 1;
	m_rect.left = 650; m_rect.top =250; m_rect.right = 700; m_rect.bottom =300;
}

CRectChangeView::~CRectChangeView()
{
}

BOOL CRectChangeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ
	
	return CView::PreCreateWindow(cs);
}

// CRectChangeView ����

void CRectChangeView::OnDraw(CDC* pDC)
{
	CRectChangeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

	
	
	pDC->Rectangle(m_rect);

}


// CRectChangeView ���

#ifdef _DEBUG
void CRectChangeView::AssertValid() const
{
	CView::AssertValid();
}

void CRectChangeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRectChangeDoc* CRectChangeView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRectChangeDoc)));
	return (CRectChangeDoc*)m_pDocument;
}
#endif //_DEBUG


// CRectChangeView ��Ϣ�������


void CRectChangeView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (m_rect.left > 0)
		{
			m_rect.left -= 5;
			m_rect.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (m_rect.right <= (clientRec.right- clientRec.left))
		{
			m_rect.left += 5;
			m_rect.right += 5;
		}
		break;
	case VK_UP:
		if (m_rect.top > 0)
		{
			m_rect.top -= 5;
			m_rect.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (m_rect.bottom<=(clientRec.bottom- clientRec.top))
		{
			m_rect.top += 5;
			m_rect.bottom += 5;
		}
		break;
	case VK_END:
		if (m_rect.left > 0|| m_rect.top > 0)
		{  
			m_rect.left += 5 ;
			m_rect.right +=5 * count;
			m_rect.top += 5 ;
			m_rect.bottom += 5 * count;
		}
		count +=1;
		break;
	
	case VK_HOME:
		if ((m_rect.right - m_rect.left != 0) || (m_rect.bottom - m_rect.top != 0))
		{
			if (m_rect.right > 0 || m_rect.bottom <= (clientRec.bottom - clientRec.top))
			{
				m_rect.left -= 1;
				m_rect.right -= 1 * cc;
				m_rect.top -= 1;
				m_rect.bottom -= 1 * cc;
			}
		}
		cc += 1;
		break;
}
	InvalidateRect(NULL, TRUE);

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CRectChangeView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	m_rect.left = 650; m_rect.top = 250; m_rect.right = 700; m_rect.bottom = 300;

	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
