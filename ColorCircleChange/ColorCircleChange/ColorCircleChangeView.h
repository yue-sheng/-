
// ColorCircleChangeView.h : CColorCircleChangeView ��Ľӿ�
//

#pragma once


class CColorCircleChangeView : public CView
{
protected: // �������л�����
	CColorCircleChangeView();
	DECLARE_DYNCREATE(CColorCircleChangeView)

// ����
public:
	CColorCircleChangeDoc* GetDocument() const;

// ����
public:
	CRect rect;
	int x, y;
	int red, green, blue, color;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CColorCircleChangeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnColorchange();
};

#ifndef _DEBUG  // ColorCircleChangeView.cpp �еĵ��԰汾
inline CColorCircleChangeDoc* CColorCircleChangeView::GetDocument() const
   { return reinterpret_cast<CColorCircleChangeDoc*>(m_pDocument); }
#endif

