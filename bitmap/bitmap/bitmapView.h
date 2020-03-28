
// bitmapView.h : CbitmapView 类的接口
//

#pragma once


class CbitmapView : public CView
{
protected: // 仅从序列化创建
	CbitmapView();
	DECLARE_DYNCREATE(CbitmapView)

// 特性
public:
	CbitmapDoc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CbitmapView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // bitmapView.cpp 中的调试版本
inline CbitmapDoc* CbitmapView::GetDocument() const
   { return reinterpret_cast<CbitmapDoc*>(m_pDocument); }
#endif

