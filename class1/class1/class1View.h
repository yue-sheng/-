
// class1View.h : Cclass1View 类的接口
//

#pragma once


class Cclass1View : public CView
{
protected: // 仅从序列化创建
	Cclass1View();
	DECLARE_DYNCREATE(Cclass1View)

// 特性
public:
	Cclass1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cclass1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // class1View.cpp 中的调试版本
inline Cclass1Doc* Cclass1View::GetDocument() const
   { return reinterpret_cast<Cclass1Doc*>(m_pDocument); }
#endif

