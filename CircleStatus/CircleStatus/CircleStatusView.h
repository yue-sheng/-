
// CircleStatusView.h : CCircleStatusView ��Ľӿ�
//

#pragma once


class CCircleStatusView : public CView
{
protected: // �������л�����
	CCircleStatusView();
	DECLARE_DYNCREATE(CCircleStatusView)

// ����
public:
	CCircleStatusDoc* GetDocument() const;

// ����
public:
	CRect rect;
	CRect tt;
	int flag1, le, ri, to, bo;
	bool m_startRect;
	CPoint m_startPoint, m_oldPoint;
	int	red, green, blue;
	int s;
	bool s1;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCircleStatusView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnDrawelli();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnFillcolor();
};

#ifndef _DEBUG  // CircleStatusView.cpp �еĵ��԰汾
inline CCircleStatusDoc* CCircleStatusView::GetDocument() const
   { return reinterpret_cast<CCircleStatusDoc*>(m_pDocument); }
#endif

