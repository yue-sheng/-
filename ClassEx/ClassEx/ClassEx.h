
// ClassEx.h : ClassEx Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CClassExApp:
// �йش����ʵ�֣������ ClassEx.cpp
//

class CClassExApp : public CWinApp
{
public:
	CClassExApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CClassExApp theApp;
