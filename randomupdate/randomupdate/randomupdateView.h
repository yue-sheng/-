
// randomupdateView.h : CrandomupdateView 类的接口
//

#pragma once


class CrandomupdateView : public CView
{
protected: // 仅从序列化创建
	CrandomupdateView();
	DECLARE_DYNCREATE(CrandomupdateView)

// 特性
public:
	CrandomupdateDoc* GetDocument() const;

// 操作
public:
	int c ;
	int flag;
	int count ;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CrandomupdateView();
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

#ifndef _DEBUG  // randomupdateView.cpp 中的调试版本
inline CrandomupdateDoc* CrandomupdateView::GetDocument() const
   { return reinterpret_cast<CrandomupdateDoc*>(m_pDocument); }
#endif

