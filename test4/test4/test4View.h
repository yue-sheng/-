
// test4View.h : Ctest4View ��Ľӿ�
//

#pragma once


class Ctest4View : public CView
{
protected: // �������л�����
	Ctest4View();
	DECLARE_DYNCREATE(Ctest4View)

// ����
public:
	Ctest4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test4View.cpp �еĵ��԰汾
inline Ctest4Doc* Ctest4View::GetDocument() const
   { return reinterpret_cast<Ctest4Doc*>(m_pDocument); }
#endif

