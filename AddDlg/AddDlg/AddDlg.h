
// AddDlg.h : AddDlg Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CAddDlgApp:
// �йش����ʵ�֣������ AddDlg.cpp
//

class CAddDlgApp : public CWinApp
{
public:
	CAddDlgApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAddDlgApp theApp;