
// oracle_homework5.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Coracle_homework5App: 
// �йش����ʵ�֣������ oracle_homework5.cpp
//

class Coracle_homework5App : public CWinApp
{
public:
	Coracle_homework5App();
	BOOL init_2();
// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Coracle_homework5App theApp;