
// MoveCircle.h : MoveCircle Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMoveCircleApp:
// �йش����ʵ�֣������ MoveCircle.cpp
//

class CMoveCircleApp : public CWinApp
{
public:
	CMoveCircleApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMoveCircleApp theApp;
