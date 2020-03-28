
// threeView.h : CthreeView 类的接口
//

#pragma once


class CthreeView : public CView
{
protected: // 仅从序列化创建
	CthreeView();
	DECLARE_DYNCREATE(CthreeView)

// 特性
public:
	CthreeDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CthreeView();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // threeView.cpp 中的调试版本
inline CthreeDoc* CthreeView::GetDocument() const
   { return reinterpret_cast<CthreeDoc*>(m_pDocument); }
#endif

