
// ThreeMenuView.h : CThreeMenuView 类的接口
//

#pragma once


class CThreeMenuView : public CView
{
protected: // 仅从序列化创建
	CThreeMenuView();
	DECLARE_DYNCREATE(CThreeMenuView)

// 特性
public:
	CThreeMenuDoc* GetDocument() const;

// 操作
public:
	CPoint m_point;
	CPoint cp;
	
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CThreeMenuView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLine();
	afx_msg void OnRectangle();
	afx_msg void OnEllipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ThreeMenuView.cpp 中的调试版本
inline CThreeMenuDoc* CThreeMenuView::GetDocument() const
   { return reinterpret_cast<CThreeMenuDoc*>(m_pDocument); }
#endif

