// Login.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "Login.h"
#include "afxdialogex.h"
#include "START.h"

// Login �Ի���

IMPLEMENT_DYNAMIC(Login, CDialogEx)

Login::Login(CWnd* pParent /*=NULL*/)
	: CDialogEx(Login::IDD, pParent)
{

}

Login::~Login()
{
}

void Login::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Login, CDialogEx)
	ON_BN_CLICKED(IDOK, &Login::OnBnClickedTurn_start)
END_MESSAGE_MAP()


// Login ��Ϣ�������


void Login::OnBnClickedTurn_start()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	MessageBox(_T("ע��ɹ�"));
	CDialog::EndDialog(0);
	START s;
	s.DoModal();
	
	//CDialogEx::OnOK();
	//CDialogEx::OnCancel();
	
}
