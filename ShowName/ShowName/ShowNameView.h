
// ShowNameView.h : CShowNameView ��Ľӿ�
//

#pragma once


class CShowNameView : public CView
{
protected: // �������л�����
	CShowNameView();
	DECLARE_DYNCREATE(CShowNameView)

// ����
public:
	CShowNameDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CShowNameView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // ShowNameView.cpp �еĵ��԰汾
inline CShowNameDoc* CShowNameView::GetDocument() const
   { return reinterpret_cast<CShowNameDoc*>(m_pDocument); }
#endif

