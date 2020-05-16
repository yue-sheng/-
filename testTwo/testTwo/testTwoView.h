
// testTwoView.h : CtestTwoView 类的接口
//

#pragma once


class CtestTwoView : public CView
{
protected: // 仅从序列化创建
	CtestTwoView();
	DECLARE_DYNCREATE(CtestTwoView)

// 特性
public:
	CtestTwoDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CtestTwoView();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // testTwoView.cpp 中的调试版本
inline CtestTwoDoc* CtestTwoView::GetDocument() const
   { return reinterpret_cast<CtestTwoDoc*>(m_pDocument); }
#endif

