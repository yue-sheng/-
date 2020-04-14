
// AddDlgView.h : CAddDlgView 类的接口
//

#pragma once


class CAddDlgView : public CView
{
protected: // 仅从序列化创建
	CAddDlgView();
	DECLARE_DYNCREATE(CAddDlgView)

// 特性
public:
	CAddDlgDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CAddDlgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnAdd();
};

#ifndef _DEBUG  // AddDlgView.cpp 中的调试版本
inline CAddDlgDoc* CAddDlgView::GetDocument() const
   { return reinterpret_cast<CAddDlgDoc*>(m_pDocument); }
#endif

