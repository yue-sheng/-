
// CenterCiecleView.h : CCenterCiecleView ��Ľӿ�
//

#pragma once


class CCenterCiecleView : public CView
{
protected: // �������л�����
	CCenterCiecleView();
	DECLARE_DYNCREATE(CCenterCiecleView)

// ����
public:
	CCenterCiecleDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCenterCiecleView();
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

#ifndef _DEBUG  // CenterCiecleView.cpp �еĵ��԰汾
inline CCenterCiecleDoc* CCenterCiecleView::GetDocument() const
   { return reinterpret_cast<CCenterCiecleDoc*>(m_pDocument); }
#endif

