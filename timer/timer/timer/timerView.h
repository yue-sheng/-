
// timerView.h : CtimerView ��Ľӿ�
//

#pragma once


class CtimerView : public CView
{
protected: // �������л�����
	CtimerView();
	DECLARE_DYNCREATE(CtimerView)

// ����
public:
	CtimerDoc* GetDocument() const;

// ����
public:
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CtimerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // timerView.cpp �еĵ��԰汾
inline CtimerDoc* CtimerView::GetDocument() const
   { return reinterpret_cast<CtimerDoc*>(m_pDocument); }
#endif

