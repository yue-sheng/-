
// ShowDocNa.h : ShowDocNa Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CShowDocNaApp:
// �йش����ʵ�֣������ ShowDocNa.cpp
//

class CShowDocNaApp : public CWinApp
{
public:
	CShowDocNaApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CShowDocNaApp theApp;
