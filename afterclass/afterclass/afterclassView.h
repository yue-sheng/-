
// afterclassView.h : CafterclassView ��Ľӿ�
//

#pragma once


class CafterclassView : public CView
{
protected: // �������л�����
	CafterclassView();
	DECLARE_DYNCREATE(CafterclassView)

// ����
public:
	CafterclassDoc* GetDocument() const;

// ����
public:
	CString s1;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CafterclassView();
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

#ifndef _DEBUG  // afterclassView.cpp �еĵ��԰汾
inline CafterclassDoc* CafterclassView::GetDocument() const
   { return reinterpret_cast<CafterclassDoc*>(m_pDocument); }
#endif

