
// CalculatorView.h : CCalculatorView 类的接口
//

#pragma once


class CCalculatorView : public CView
{
protected: // 仅从序列化创建
	CCalculatorView();
	DECLARE_DYNCREATE(CCalculatorView)

// 特性
public:
	CCalculatorDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCalculatorView();
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

#ifndef _DEBUG  // CalculatorView.cpp 中的调试版本
inline CCalculatorDoc* CCalculatorView::GetDocument() const
   { return reinterpret_cast<CCalculatorDoc*>(m_pDocument); }
#endif

