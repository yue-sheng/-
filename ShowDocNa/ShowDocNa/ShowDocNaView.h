
// ShowDocNaView.h : CShowDocNaView ��Ľӿ�
//

#pragma once


class CShowDocNaView : public CView
{
protected: // �������л�����
	CShowDocNaView();
	DECLARE_DYNCREATE(CShowDocNaView)

// ����
public:
	CShowDocNaDoc* GetDocument() const;

// ����
public:
	CString filename;
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CShowDocNaView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnShow();
};

#ifndef _DEBUG  // ShowDocNaView.cpp �еĵ��԰汾
inline CShowDocNaDoc* CShowDocNaView::GetDocument() const
   { return reinterpret_cast<CShowDocNaDoc*>(m_pDocument); }
#endif

