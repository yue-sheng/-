
// SwapView.h : CSwapView ��Ľӿ�
//

#pragma once


class CSwapView : public CView
{
protected: // �������л�����
	CSwapView();
	DECLARE_DYNCREATE(CSwapView)

// ����
public:
	CSwapDoc* GetDocument() const;

// ����
public:
	CString A, B, C;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CSwapView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // SwapView.cpp �еĵ��԰汾
inline CSwapDoc* CSwapView::GetDocument() const
   { return reinterpret_cast<CSwapDoc*>(m_pDocument); }
#endif

