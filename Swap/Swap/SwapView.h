
// SwapView.h : CSwapView 类的接口
//

#pragma once


class CSwapView : public CView
{
protected: // 仅从序列化创建
	CSwapView();
	DECLARE_DYNCREATE(CSwapView)

// 特性
public:
	CSwapDoc* GetDocument() const;

// 操作
public:
	CString A, B, C;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CSwapView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // SwapView.cpp 中的调试版本
inline CSwapDoc* CSwapView::GetDocument() const
   { return reinterpret_cast<CSwapDoc*>(m_pDocument); }
#endif

