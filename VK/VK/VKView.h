
// VKView.h : CVKView ��Ľӿ�
//

#pragma once


class CVKView : public CView
{
protected: // �������л�����
	CVKView();
	DECLARE_DYNCREATE(CVKView)

// ����
public:
	CVKDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CVKView();
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
	
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // VKView.cpp �еĵ��԰汾
inline CVKDoc* CVKView::GetDocument() const
   { return reinterpret_cast<CVKDoc*>(m_pDocument); }
#endif

