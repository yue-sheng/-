
// randomView.h : CrandomView ��Ľӿ�
//

#pragma once


class CrandomView : public CView
{
protected: // �������л�����
	CrandomView();
	DECLARE_DYNCREATE(CrandomView)

// ����
public:
	CrandomDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CrandomView();
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

#ifndef _DEBUG  // randomView.cpp �еĵ��԰汾
inline CrandomDoc* CrandomView::GetDocument() const
   { return reinterpret_cast<CrandomDoc*>(m_pDocument); }
#endif

