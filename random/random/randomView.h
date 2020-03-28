
// randomView.h : CrandomView 类的接口
//

#pragma once


class CrandomView : public CView
{
protected: // 仅从序列化创建
	CrandomView();
	DECLARE_DYNCREATE(CrandomView)

// 特性
public:
	CrandomDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CrandomView();
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

#ifndef _DEBUG  // randomView.cpp 中的调试版本
inline CrandomDoc* CrandomView::GetDocument() const
   { return reinterpret_cast<CrandomDoc*>(m_pDocument); }
#endif

