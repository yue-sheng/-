
// MOUSEMOVEView.h : CMOUSEMOVEView ��Ľӿ�
//

#pragma once


class CMOUSEMOVEView : public CView
{
protected: // �������л�����
	CMOUSEMOVEView();
	DECLARE_DYNCREATE(CMOUSEMOVEView)

// ����
public:
	CMOUSEMOVEDoc* GetDocument() const;

// ����
public:
	int x1, y1, x2, y2;
	int num;
	bool flag;
	int mouse;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMOUSEMOVEView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MOUSEMOVEView.cpp �еĵ��԰汾
inline CMOUSEMOVEDoc* CMOUSEMOVEView::GetDocument() const
   { return reinterpret_cast<CMOUSEMOVEDoc*>(m_pDocument); }
#endif

