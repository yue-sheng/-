
// rectangleView.h : CrectangleView ��Ľӿ�
//

#pragma once


class CrectangleView : public CView
{
protected: // �������л�����
	CrectangleView();
	DECLARE_DYNCREATE(CrectangleView)

// ����
public:
	CrectangleDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CrectangleView();
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

#ifndef _DEBUG  // rectangleView.cpp �еĵ��԰汾
inline CrectangleDoc* CrectangleView::GetDocument() const
   { return reinterpret_cast<CrectangleDoc*>(m_pDocument); }
#endif

