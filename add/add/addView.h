
// addView.h : CaddView ��Ľӿ�
//

#pragma once


class CaddView : public CView
{
protected: // �������л�����
	CaddView();
	DECLARE_DYNCREATE(CaddView)

// ����
public:
	CaddDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CaddView();
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
};

#ifndef _DEBUG  // addView.cpp �еĵ��԰汾
inline CaddDoc* CaddView::GetDocument() const
   { return reinterpret_cast<CaddDoc*>(m_pDocument); }
#endif

