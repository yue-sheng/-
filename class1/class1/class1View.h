
// class1View.h : Cclass1View ��Ľӿ�
//

#pragma once


class Cclass1View : public CView
{
protected: // �������л�����
	Cclass1View();
	DECLARE_DYNCREATE(Cclass1View)

// ����
public:
	Cclass1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cclass1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // class1View.cpp �еĵ��԰汾
inline Cclass1Doc* Cclass1View::GetDocument() const
   { return reinterpret_cast<Cclass1Doc*>(m_pDocument); }
#endif

