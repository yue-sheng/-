
// MoveCircleView.h : CMoveCircleView ��Ľӿ�
//

#pragma once


class CMoveCircleView : public CView
{
protected: // �������л�����
	CMoveCircleView();
	DECLARE_DYNCREATE(CMoveCircleView)

// ����
public:
	CMoveCircleDoc* GetDocument() const;

// ����
public:
	CRect cr;
	bool set;
	int flag;
	int satus;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMoveCircleView();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MoveCircleView.cpp �еĵ��԰汾
inline CMoveCircleDoc* CMoveCircleView::GetDocument() const
   { return reinterpret_cast<CMoveCircleDoc*>(m_pDocument); }
#endif

