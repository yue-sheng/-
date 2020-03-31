
// ThreeMenuView.h : CThreeMenuView ��Ľӿ�
//

#pragma once


class CThreeMenuView : public CView
{
protected: // �������л�����
	CThreeMenuView();
	DECLARE_DYNCREATE(CThreeMenuView)

// ����
public:
	CThreeMenuDoc* GetDocument() const;

// ����
public:
	CPoint m_point;
	CPoint cp;
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CThreeMenuView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLine();
	afx_msg void OnRectangle();
	afx_msg void OnEllipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ThreeMenuView.cpp �еĵ��԰汾
inline CThreeMenuDoc* CThreeMenuView::GetDocument() const
   { return reinterpret_cast<CThreeMenuDoc*>(m_pDocument); }
#endif

