
// ClassExView.h : CClassExView ��Ľӿ�
//

#pragma once


class CClassExView : public CView
{
protected: // �������л�����
	CClassExView();
	DECLARE_DYNCREATE(CClassExView)

// ����
public:
	CClassExDoc* GetDocument() const;
	CImage img;
	int w, h, sx, sy;
// ����
public:
	CArray<CRect, CRect&> ca;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CClassExView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // ClassExView.cpp �еĵ��԰汾
inline CClassExDoc* CClassExView::GetDocument() const
   { return reinterpret_cast<CClassExDoc*>(m_pDocument); }
#endif

