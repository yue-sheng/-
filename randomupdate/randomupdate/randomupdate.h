
// randomupdate.h : randomupdate Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CrandomupdateApp:
// �йش����ʵ�֣������ randomupdate.cpp
//

class CrandomupdateApp : public CWinApp
{
public:
	CrandomupdateApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CrandomupdateApp theApp;