
// WeekSecondtest1.h : WeekSecondtest1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeekSecondtest1App:
// �йش����ʵ�֣������ WeekSecondtest1.cpp
//

class CWeekSecondtest1App : public CWinApp
{
public:
	CWeekSecondtest1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeekSecondtest1App theApp;
