
// rectangle.h : rectangle Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CrectangleApp:
// �йش����ʵ�֣������ rectangle.cpp
//

class CrectangleApp : public CWinApp
{
public:
	CrectangleApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CrectangleApp theApp;
