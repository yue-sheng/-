
// CircleChangeView.h : CCircleChangeView 类的接口
//

#pragma once


class CCircleChangeView : public CView
{
protected: // 仅从序列化创建
	CCircleChangeView();
	DECLARE_DYNCREATE(CCircleChangeView)

// 特性
public:
	CCircleChangeDoc* GetDocument() const;

// 操作
public:
	CRect rect;
	int x, y;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCircleChangeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCirclechange();
};

#ifndef _DEBUG  // CircleChangeView.cpp 中的调试版本
inline CCircleChangeDoc* CCircleChangeView::GetDocument() const
   { return reinterpret_cast<CCircleChangeDoc*>(m_pDocument); }
#endif

