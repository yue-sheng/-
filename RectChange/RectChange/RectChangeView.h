
// RectChangeView.h : CRectChangeView ��Ľӿ�
//

#pragma once


class CRectChangeView : public CView
{
protected: // �������л�����
	CRectChangeView();
	DECLARE_DYNCREATE(CRectChangeView)

// ����
public:
	CRectChangeDoc* GetDocument() const;

// ����
public:
	CRect m_rect;
	int x, y;
	int count,cc;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CRectChangeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // RectChangeView.cpp �еĵ��԰汾
inline CRectChangeDoc* CRectChangeView::GetDocument() const
   { return reinterpret_cast<CRectChangeDoc*>(m_pDocument); }
#endif

