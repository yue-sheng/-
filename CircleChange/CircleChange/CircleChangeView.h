
// CircleChangeView.h : CCircleChangeView ��Ľӿ�
//

#pragma once


class CCircleChangeView : public CView
{
protected: // �������л�����
	CCircleChangeView();
	DECLARE_DYNCREATE(CCircleChangeView)

// ����
public:
	CCircleChangeDoc* GetDocument() const;

// ����
public:
	CRect rect;
	int x, y;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCircleChangeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCirclechange();
};

#ifndef _DEBUG  // CircleChangeView.cpp �еĵ��԰汾
inline CCircleChangeDoc* CCircleChangeView::GetDocument() const
   { return reinterpret_cast<CCircleChangeDoc*>(m_pDocument); }
#endif

