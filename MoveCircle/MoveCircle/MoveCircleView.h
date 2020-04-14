
// MoveCircleView.h : CMoveCircleView 类的接口
//

#pragma once


class CMoveCircleView : public CView
{
protected: // 仅从序列化创建
	CMoveCircleView();
	DECLARE_DYNCREATE(CMoveCircleView)

// 特性
public:
	CMoveCircleDoc* GetDocument() const;

// 操作
public:
	CRect cr;
	bool set;
	int flag;
	int satus;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMoveCircleView();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MoveCircleView.cpp 中的调试版本
inline CMoveCircleDoc* CMoveCircleView::GetDocument() const
   { return reinterpret_cast<CMoveCircleDoc*>(m_pDocument); }
#endif

