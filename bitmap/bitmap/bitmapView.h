
// bitmapView.h : CbitmapView ��Ľӿ�
//

#pragma once


class CbitmapView : public CView
{
protected: // �������л�����
	CbitmapView();
	DECLARE_DYNCREATE(CbitmapView)

// ����
public:
	CbitmapDoc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CbitmapView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // bitmapView.cpp �еĵ��԰汾
inline CbitmapDoc* CbitmapView::GetDocument() const
   { return reinterpret_cast<CbitmapDoc*>(m_pDocument); }
#endif

