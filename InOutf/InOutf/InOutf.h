
// InOutf.h : InOutf Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CInOutfApp:
// �йش����ʵ�֣������ InOutf.cpp
//

class CInOutfApp : public CWinApp
{
public:
	CInOutfApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CInOutfApp theApp;
