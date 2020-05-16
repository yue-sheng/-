
// afterclassView.h : CafterclassView 类的接口
//

#pragma once


class CafterclassView : public CView
{
protected: // 仅从序列化创建
	CafterclassView();
	DECLARE_DYNCREATE(CafterclassView)

// 特性
public:
	CafterclassDoc* GetDocument() const;

// 操作
public:
	CString s1;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CafterclassView();
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

#ifndef _DEBUG  // afterclassView.cpp 中的调试版本
inline CafterclassDoc* CafterclassView::GetDocument() const
   { return reinterpret_cast<CafterclassDoc*>(m_pDocument); }
#endif

