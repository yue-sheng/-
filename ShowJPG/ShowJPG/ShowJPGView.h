
// ShowJPGView.h : CShowJPGView 类的接口
//

#pragma once


class CShowJPGView : public CView
{
protected: // 仅从序列化创建
	CShowJPGView();
	DECLARE_DYNCREATE(CShowJPGView)

// 特性
public:
	CShowJPGDoc* GetDocument() const;

// 操作
public:
	
	
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CShowJPGView();
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

#ifndef _DEBUG  // ShowJPGView.cpp 中的调试版本
inline CShowJPGDoc* CShowJPGView::GetDocument() const
   { return reinterpret_cast<CShowJPGDoc*>(m_pDocument); }
#endif

