
// ClassExView.h : CClassExView 类的接口
//

#pragma once


class CClassExView : public CView
{
protected: // 仅从序列化创建
	CClassExView();
	DECLARE_DYNCREATE(CClassExView)

// 特性
public:
	CClassExDoc* GetDocument() const;
	CImage img;
	int w, h, sx, sy;
// 操作
public:
	CArray<CRect, CRect&> ca;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CClassExView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // ClassExView.cpp 中的调试版本
inline CClassExDoc* CClassExView::GetDocument() const
   { return reinterpret_cast<CClassExDoc*>(m_pDocument); }
#endif

