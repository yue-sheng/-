
// testOneView.h : CtestOneView ��Ľӿ�
//

#pragma once


class CtestOneView : public CView
{
protected: // �������л�����
	CtestOneView();
	DECLARE_DYNCREATE(CtestOneView)

// ����
public:
	CtestOneDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CtestOneView();
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

#ifndef _DEBUG  // testOneView.cpp �еĵ��԰汾
inline CtestOneDoc* CtestOneView::GetDocument() const
   { return reinterpret_cast<CtestOneDoc*>(m_pDocument); }
#endif

