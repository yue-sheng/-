
// ShowName.h : ShowName Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CShowNameApp:
// �йش����ʵ�֣������ ShowName.cpp
//

class CShowNameApp : public CWinApp
{
public:
	CShowNameApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CShowNameApp theApp;
