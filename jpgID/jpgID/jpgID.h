
// jpgID.h : jpgID Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CjpgIDApp:
// �йش����ʵ�֣������ jpgID.cpp
//

class CjpgIDApp : public CWinApp
{
public:
	CjpgIDApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CjpgIDApp theApp;
