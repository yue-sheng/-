
// testTwoView.h : CtestTwoView ��Ľӿ�
//

#pragma once


class CtestTwoView : public CView
{
protected: // �������л�����
	CtestTwoView();
	DECLARE_DYNCREATE(CtestTwoView)

// ����
public:
	CtestTwoDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CtestTwoView();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // testTwoView.cpp �еĵ��԰汾
inline CtestTwoDoc* CtestTwoView::GetDocument() const
   { return reinterpret_cast<CtestTwoDoc*>(m_pDocument); }
#endif

