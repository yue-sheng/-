
// CircleChange.h : CircleChange Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCircleChangeApp:
// �йش����ʵ�֣������ CircleChange.cpp
//

class CCircleChangeApp : public CWinApp
{
public:
	CCircleChangeApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCircleChangeApp theApp;
