
// MOUSEMOVE.h : MOUSEMOVE Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMOUSEMOVEApp:
// �йش����ʵ�֣������ MOUSEMOVE.cpp
//

class CMOUSEMOVEApp : public CWinApp
{
public:
	CMOUSEMOVEApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMOUSEMOVEApp theApp;
