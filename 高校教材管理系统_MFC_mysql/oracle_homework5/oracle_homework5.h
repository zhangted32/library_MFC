
// oracle_homework5.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// Coracle_homework5App: 
// 有关此类的实现，请参阅 oracle_homework5.cpp
//

class Coracle_homework5App : public CWinApp
{
public:
	Coracle_homework5App();
	BOOL init_2();
// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern Coracle_homework5App theApp;