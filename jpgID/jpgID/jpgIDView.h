
// jpgIDView.h : CjpgIDView ��Ľӿ�
//

#pragma once


class CjpgIDView : public CView
{
protected: // �������л�����
	CjpgIDView();
	DECLARE_DYNCREATE(CjpgIDView)

// ����
public:
	CjpgIDDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CjpgIDView();
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

#ifndef _DEBUG  // jpgIDView.cpp �еĵ��԰汾
inline CjpgIDDoc* CjpgIDView::GetDocument() const
   { return reinterpret_cast<CjpgIDDoc*>(m_pDocument); }
#endif

