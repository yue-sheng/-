
// threeView.h : CthreeView ��Ľӿ�
//

#pragma once


class CthreeView : public CView
{
protected: // �������л�����
	CthreeView();
	DECLARE_DYNCREATE(CthreeView)

// ����
public:
	CthreeDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CthreeView();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // threeView.cpp �еĵ��԰汾
inline CthreeDoc* CthreeView::GetDocument() const
   { return reinterpret_cast<CthreeDoc*>(m_pDocument); }
#endif

