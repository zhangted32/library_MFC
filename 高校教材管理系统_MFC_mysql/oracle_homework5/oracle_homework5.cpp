
// oracle_homework5.cpp : ����Ӧ�ó��������Ϊ��
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "oracle_homework5Dlg.h"
#include "aspect_all_h.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Coracle_homework5App

BEGIN_MESSAGE_MAP(Coracle_homework5App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// Coracle_homework5App ����

Coracle_homework5App::Coracle_homework5App()
{
	// ֧����������������
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO:  �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� Coracle_homework5App ����

Coracle_homework5App theApp;


// Coracle_homework5App ��ʼ��
BOOL Coracle_homework5App::init_2()
{
	START init_start;
	init_start.DoModal();
	if (init_start.isBnOk)
	{
		return true;
	}
	else
	{
		return false;
	}
}

BOOL Coracle_homework5App::InitInstance()
{
	// ���һ�������� Windows XP �ϵ�Ӧ�ó����嵥ָ��Ҫ
	// ʹ�� ComCtl32.dll �汾 6 ����߰汾�����ÿ��ӻ���ʽ��
	//����Ҫ InitCommonControlsEx()��  ���򣬽��޷��������ڡ�
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// ��������Ϊ��������Ҫ��Ӧ�ó�����ʹ�õ�
	// �����ؼ��ࡣ
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();
	//���ݿ�����
	
	///
	BOOL init_2_result = this->init_2();///��ʼ����
	if (!init_2_result)
		return false;

	AfxEnableControlContainer();

	// ���� shell ���������Է��Ի������
	// �κ� shell ����ͼ�ؼ��� shell �б���ͼ�ؼ���
	CShellManager *pShellManager = new CShellManager;

	// ���Windows Native���Ӿ����������Ա��� MFC �ؼ�����������
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));

	// ��׼��ʼ��
	// ���δʹ����Щ���ܲ�ϣ����С
	// ���տ�ִ���ļ��Ĵ�С����Ӧ�Ƴ�����
	// ����Ҫ���ض���ʼ������
	// �������ڴ洢���õ�ע�����
	// TODO:  Ӧ�ʵ��޸ĸ��ַ�����
	// �����޸�Ϊ��˾����֯��
	SetRegistryKey(_T("Ӧ�ó��������ɵı���Ӧ�ó���"));

	
	
	if (judge == 1)//ϵͳ����Ա 1
	{
		Coracle_homework5Dlg start;
		start.DoModal();
	}
	if (judge == 2)//�̲Ĺ���Ա  2
	{
		librarian start;
		start.DoModal();
	}
	if (judge == 3) ///���������Ա  3
	{
		pressadmin start;
		start.DoModal();
	}
	if (judge == 4)//�̲���������Ա 4
	{
		orderadmin start;
		start.DoModal();
	}
	if (judge == 5)//��ʦ  5
	{
		teacher start;
		start.DoModal();
	}
	/*
	Coracle_homework5Dlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO:  �ڴ˷��ô����ʱ��
		//  ��ȷ�������رնԻ���Ĵ���
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO:  �ڴ˷��ô����ʱ��
		//  ��ȡ�������رնԻ���Ĵ���
	}
	else if (nResponse == -1)
	{
		TRACE(traceAppMsg, 0, "����: �Ի��򴴽�ʧ�ܣ�Ӧ�ó���������ֹ��\n");
		TRACE(traceAppMsg, 0, "����: ������ڶԻ�����ʹ�� MFC �ؼ������޷� #define _AFX_NO_MFC_CONTROLS_IN_DIALOGS��\n");
	}
	*/
	// ɾ�����洴���� shell ��������
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// ���ڶԻ����ѹرգ����Խ����� FALSE �Ա��˳�Ӧ�ó���
	//  ����������Ӧ�ó������Ϣ�á�
	return FALSE;
}

