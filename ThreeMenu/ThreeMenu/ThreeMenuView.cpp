
// ThreeMenuView.cpp : CThreeMenuView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ThreeMenu.h"
#endif

#include "ThreeMenuDoc.h"
#include "ThreeMenuView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CThreeMenuView

IMPLEMENT_DYNCREATE(CThreeMenuView, CView)

BEGIN_MESSAGE_MAP(CThreeMenuView, CView)
	ON_COMMAND(ID_LINE, &CThreeMenuView::OnLine)
	ON_COMMAND(ID_RECTANGLE, &CThreeMenuView::OnRectangle)
	ON_COMMAND(ID_ELLIPSE, &CThreeMenuView::OnEllipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CThreeMenuView ����/����

CThreeMenuView::CThreeMenuView()
{
	// TODO: �ڴ˴���ӹ������
	
}

CThreeMenuView::~CThreeMenuView()
{
}

BOOL CThreeMenuView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CThreeMenuView ����

void CThreeMenuView::OnDraw(CDC* pDC)
{
	CThreeMenuDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if(pDoc->flag==1)
	{
		pDC->MoveTo(m_point);
		pDC->LineTo(cp);
	}
	else if(pDoc->flag==2)
	pDC->Rectangle(pDoc->m_tagRec);
	else if(pDoc->flag==3)
	pDC->Ellipse(pDoc->m_tagRec);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CThreeMenuView ���

#ifdef _DEBUG
void CThreeMenuView::AssertValid() const
{
	CView::AssertValid();
}

void CThreeMenuView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CThreeMenuDoc* CThreeMenuView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CThreeMenuDoc)));
	return (CThreeMenuDoc*)m_pDocument;
}
#endif //_DEBUG


// CThreeMenuView ��Ϣ�������


void CThreeMenuView::OnLine()
{
	// TODO: �ڴ���������������
	CThreeMenuDoc* pDoc = GetDocument();
	
	pDoc->flag = 1;
	
}


void CThreeMenuView::OnRectangle()
{
	// TODO: �ڴ���������������
	CThreeMenuDoc* pDoc = GetDocument();
	
	pDoc->flag = 2;
	
}


void CThreeMenuView::OnEllipse()
{
	// TODO: �ڴ���������������
	CThreeMenuDoc* pDoc = GetDocument();
	
	pDoc->flag = 3;
	
}


void CThreeMenuView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCapture();
	
	CThreeMenuDoc* pDoc = GetDocument();
	CPoint cp(point.x, point.y);
	if(pDoc->flag==1)
	{ 
		m_point = cp;
		
		pDoc->set = true;
	}
	
	pDoc->m_tagRec.left = point.x;
   	pDoc->m_tagRec.top = point.y;

	CView::OnLButtonDown(nFlags, point);
	
}


void CThreeMenuView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	ReleaseCapture();
	CThreeMenuDoc* pDoc = GetDocument();
	CPoint cp1(point.x, point.y);
	CClientDC dc(this);
	if (pDoc->flag == 1)
	{
		pDoc->set = false;
		cp = point;
		dc.MoveTo(m_point);
		
	}
	
	
	pDoc->m_tagRec.right = point.x;
	pDoc->m_tagRec.bottom = point.y;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonUp(nFlags, point);
}


void CThreeMenuView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CThreeMenuDoc* pDoc = GetDocument();
	CClientDC dc(this);
	if(pDoc->flag==1)
	{
		if (pDoc->set)
		{
			dc.MoveTo(m_point);
			
		}
	}
		
	
	CView::OnMouseMove(nFlags, point);
}
