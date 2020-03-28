
// ShowNameView.h : CShowNameView 类的接口
//

#pragma once


class CShowNameView : public CView
{
protected: // 仅从序列化创建
	CShowNameView();
	DECLARE_DYNCREATE(CShowNameView)

// 特性
public:
	CShowNameDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CShowNameView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // ShowNameView.cpp 中的调试版本
inline CShowNameDoc* CShowNameView::GetDocument() const
   { return reinterpret_cast<CShowNameDoc*>(m_pDocument); }
#endif

