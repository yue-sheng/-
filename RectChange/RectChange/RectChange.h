
// RectChange.h : RectChange Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CRectChangeApp:
// �йش����ʵ�֣������ RectChange.cpp
//

class CRectChangeApp : public CWinApp
{
public:
	CRectChangeApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CRectChangeApp theApp;
