
// VKView.cpp : CVKView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "VK.h"
#endif

#include "VKDoc.h"
#include "VKView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVKView

IMPLEMENT_DYNCREATE(CVKView, CView)

BEGIN_MESSAGE_MAP(CVKView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_NCMOUSEMOVE()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CVKView ����/����

CVKView::CVKView()
{
	// TODO: �ڴ˴���ӹ������

}

CVKView::~CVKView()
{
}

BOOL CVKView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CVKView ����

void CVKView::OnDraw(CDC* pDC)
{
	CVKDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->m_tagRec);
}


// CVKView ���

#ifdef _DEBUG
void CVKView::AssertValid() const
{
	CView::AssertValid();
}

void CVKView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVKDoc* CVKView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVKDoc)));
	return (CVKDoc*)m_pDocument;
}
#endif //_DEBUG


// CVKView ��Ϣ�������


void CVKView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCapture();
	CVKDoc* pDoc = GetDocument();
	pDoc->m_tagRec.left = point.x;
	pDoc->m_tagRec.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CVKView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	ReleaseCapture();
	CVKDoc* pDoc = GetDocument();
	
	pDoc->m_tagRec.right = point.x ;
	pDoc->m_tagRec.bottom = point.y ;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonUp(nFlags, point);
}


void CVKView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s = _T("WM_MOUSEMOVE");
	CString cs;
	CString css;
	cs.Format(_T("X=%d    "), point.x);
	css.Format(_T("    Y=%d    "), point.y);
	CClientDC dc(this);
	dc.TextOutW(20, 20, s);

	dc.TextOutW(200, 20, cs);
	dc.TextOutW(300, 20, css);
	CView::OnMouseMove(nFlags, point);
}
