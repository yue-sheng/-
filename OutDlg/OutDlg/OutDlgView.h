
// OutDlgView.h : COutDlgView ��Ľӿ�
//

#pragma once


class COutDlgView : public CView
{
protected: // �������л�����
	COutDlgView();
	DECLARE_DYNCREATE(COutDlgView)

// ����
public:
	COutDlgDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~COutDlgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowdlg();
};

#ifndef _DEBUG  // OutDlgView.cpp �еĵ��԰汾
inline COutDlgDoc* COutDlgView::GetDocument() const
   { return reinterpret_cast<COutDlgDoc*>(m_pDocument); }
#endif

