
// ShowDocNaView.h : CShowDocNaView 类的接口
//

#pragma once


class CShowDocNaView : public CView
{
protected: // 仅从序列化创建
	CShowDocNaView();
	DECLARE_DYNCREATE(CShowDocNaView)

// 特性
public:
	CShowDocNaDoc* GetDocument() const;

// 操作
public:
	CString filename;
	
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CShowDocNaView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnShow();
};

#ifndef _DEBUG  // ShowDocNaView.cpp 中的调试版本
inline CShowDocNaDoc* CShowDocNaView::GetDocument() const
   { return reinterpret_cast<CShowDocNaDoc*>(m_pDocument); }
#endif

