
// ColorCircleChange.h : ColorCircleChange Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CColorCircleChangeApp:
// �йش����ʵ�֣������ ColorCircleChange.cpp
//

class CColorCircleChangeApp : public CWinApp
{
public:
	CColorCircleChangeApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CColorCircleChangeApp theApp;
