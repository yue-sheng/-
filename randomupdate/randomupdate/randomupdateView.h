
// randomupdateView.h : CrandomupdateView ��Ľӿ�
//

#pragma once


class CrandomupdateView : public CView
{
protected: // �������л�����
	CrandomupdateView();
	DECLARE_DYNCREATE(CrandomupdateView)

// ����
public:
	CrandomupdateDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CrandomupdateView();
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

#ifndef _DEBUG  // randomupdateView.cpp �еĵ��԰汾
inline CrandomupdateDoc* CrandomupdateView::GetDocument() const
   { return reinterpret_cast<CrandomupdateDoc*>(m_pDocument); }
#endif

