
// AddDlgView.h : CAddDlgView ��Ľӿ�
//

#pragma once


class CAddDlgView : public CView
{
protected: // �������л�����
	CAddDlgView();
	DECLARE_DYNCREATE(CAddDlgView)

// ����
public:
	CAddDlgDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CAddDlgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnAdd();
};

#ifndef _DEBUG  // AddDlgView.cpp �еĵ��԰汾
inline CAddDlgDoc* CAddDlgView::GetDocument() const
   { return reinterpret_cast<CAddDlgDoc*>(m_pDocument); }
#endif

