
// CircleStatusView.h : CCircleStatusView 类的接口
//

#pragma once


class CCircleStatusView : public CView
{
protected: // 仅从序列化创建
	CCircleStatusView();
	DECLARE_DYNCREATE(CCircleStatusView)

// 特性
public:
	CCircleStatusDoc* GetDocument() const;

// 操作
public:
	CRect rect;
	CRect tt;
	int flag1, le, ri, to, bo;
	bool m_startRect;
	CPoint m_startPoint, m_oldPoint;
	int	red, green, blue;
	int s;
	bool s1;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCircleStatusView();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnDrawelli();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnFillcolor();
};

#ifndef _DEBUG  // CircleStatusView.cpp 中的调试版本
inline CCircleStatusDoc* CCircleStatusView::GetDocument() const
   { return reinterpret_cast<CCircleStatusDoc*>(m_pDocument); }
#endif

