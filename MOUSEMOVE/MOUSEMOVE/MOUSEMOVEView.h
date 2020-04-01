
// MOUSEMOVEView.h : CMOUSEMOVEView 类的接口
//

#pragma once


class CMOUSEMOVEView : public CView
{
protected: // 仅从序列化创建
	CMOUSEMOVEView();
	DECLARE_DYNCREATE(CMOUSEMOVEView)

// 特性
public:
	CMOUSEMOVEDoc* GetDocument() const;

// 操作
public:
	int x1, y1, x2, y2;
	int num;
	bool flag;
	int mouse;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMOUSEMOVEView();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MOUSEMOVEView.cpp 中的调试版本
inline CMOUSEMOVEDoc* CMOUSEMOVEView::GetDocument() const
   { return reinterpret_cast<CMOUSEMOVEDoc*>(m_pDocument); }
#endif

