
// InOutfView.h : CInOutfView ��Ľӿ�
//

#pragma once


class CInOutfView : public CView
{
protected: // �������л�����
	CInOutfView();
	DECLARE_DYNCREATE(CInOutfView)

// ����
public:
	CInOutfDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CInOutfView();
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
	afx_msg void OnFileSaveAs();
};

#ifndef _DEBUG  // InOutfView.cpp �еĵ��԰汾
inline CInOutfDoc* CInOutfView::GetDocument() const
   { return reinterpret_cast<CInOutfDoc*>(m_pDocument); }
#endif

