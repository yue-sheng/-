
// WeekSecondtest2View.h : CWeekSecondtest2View ��Ľӿ�
//

#pragma once


class CWeekSecondtest2View : public CView
{
protected: // �������л�����
	CWeekSecondtest2View();
	DECLARE_DYNCREATE(CWeekSecondtest2View)

// ����
public:
	CWeekSecondtest2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeekSecondtest2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // WeekSecondtest2View.cpp �еĵ��԰汾
inline CWeekSecondtest2Doc* CWeekSecondtest2View::GetDocument() const
   { return reinterpret_cast<CWeekSecondtest2Doc*>(m_pDocument); }
#endif

