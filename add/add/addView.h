
// addView.h : CaddView 类的接口
//

#pragma once


class CaddView : public CView
{
protected: // 仅从序列化创建
	CaddView();
	DECLARE_DYNCREATE(CaddView)

// 特性
public:
	CaddDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CaddView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // addView.cpp 中的调试版本
inline CaddDoc* CaddView::GetDocument() const
   { return reinterpret_cast<CaddDoc*>(m_pDocument); }
#endif

