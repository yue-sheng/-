
// CenterCiecle.h : CenterCiecle Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCenterCiecleApp:
// �йش����ʵ�֣������ CenterCiecle.cpp
//

class CCenterCiecleApp : public CWinApp
{
public:
	CCenterCiecleApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCenterCiecleApp theApp;
