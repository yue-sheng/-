
// ShowJPG.h : ShowJPG Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CShowJPGApp:
// �йش����ʵ�֣������ ShowJPG.cpp
//

class CShowJPGApp : public CWinApp
{
public:
	CShowJPGApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CShowJPGApp theApp;
