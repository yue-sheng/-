
// CircleStatus.h : CircleStatus Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCircleStatusApp:
// �йش����ʵ�֣������ CircleStatus.cpp
//

class CCircleStatusApp : public CWinApp
{
public:
	CCircleStatusApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCircleStatusApp theApp;
