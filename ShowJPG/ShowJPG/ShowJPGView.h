
// ShowJPGView.h : CShowJPGView ��Ľӿ�
//

#pragma once


class CShowJPGView : public CView
{
protected: // �������л�����
	CShowJPGView();
	DECLARE_DYNCREATE(CShowJPGView)

// ����
public:
	CShowJPGDoc* GetDocument() const;

// ����
public:
	
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CShowJPGView();
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

#ifndef _DEBUG  // ShowJPGView.cpp �еĵ��԰汾
inline CShowJPGDoc* CShowJPGView::GetDocument() const
   { return reinterpret_cast<CShowJPGDoc*>(m_pDocument); }
#endif

