
// ColorCircleChangeView.h : CColorCircleChangeView 类的接口
//

#pragma once


class CColorCircleChangeView : public CView
{
protected: // 仅从序列化创建
	CColorCircleChangeView();
	DECLARE_DYNCREATE(CColorCircleChangeView)

// 特性
public:
	CColorCircleChangeDoc* GetDocument() const;

// 操作
public:
	CRect rect;
	int x, y;
	int red, green, blue, color;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CColorCircleChangeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnColorchange();
};

#ifndef _DEBUG  // ColorCircleChangeView.cpp 中的调试版本
inline CColorCircleChangeDoc* CColorCircleChangeView::GetDocument() const
   { return reinterpret_cast<CColorCircleChangeDoc*>(m_pDocument); }
#endif

