
// WeekSecondtest2.h : WeekSecondtest2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeekSecondtest2App:
// �йش����ʵ�֣������ WeekSecondtest2.cpp
//

class CWeekSecondtest2App : public CWinApp
{
public:
	CWeekSecondtest2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeekSecondtest2App theApp;
