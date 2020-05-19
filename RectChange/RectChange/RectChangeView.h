
// RectChangeView.h : CRectChangeView 类的接口
//

#pragma once


class CRectChangeView : public CView
{
protected: // 仅从序列化创建
	CRectChangeView();
	DECLARE_DYNCREATE(CRectChangeView)

// 特性
public:
	CRectChangeDoc* GetDocument() const;

// 操作
public:
	CRect m_rect;
	int x, y;
	int count,cc;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CRectChangeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // RectChangeView.cpp 中的调试版本
inline CRectChangeDoc* CRectChangeView::GetDocument() const
   { return reinterpret_cast<CRectChangeDoc*>(m_pDocument); }
#endif

