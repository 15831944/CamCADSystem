// CamCADSystem.h : CamCADSystem Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCamCADSystemApp:
// �йش����ʵ�֣������ CamCADSystem.cpp
//

class CCamCADSystemApp : public CWinApp
{
public:
	CCamCADSystemApp();


// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCamCADSystemApp theApp;