
// WeekSecondtest1View.h : CWeekSecondtest1View ��Ľӿ�
//

#pragma once


class CWeekSecondtest1View : public CView
{
protected: // �������л�����
	CWeekSecondtest1View();
	DECLARE_DYNCREATE(CWeekSecondtest1View)

// ����
public:
	CWeekSecondtest1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeekSecondtest1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // WeekSecondtest1View.cpp �еĵ��԰汾
inline CWeekSecondtest1Doc* CWeekSecondtest1View::GetDocument() const
   { return reinterpret_cast<CWeekSecondtest1Doc*>(m_pDocument); }
#endif

