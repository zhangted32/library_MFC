// check.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "check.h"
#include "afxdialogex.h"


// check �Ի���

IMPLEMENT_DYNAMIC(check, CDialogEx)

check::check(CWnd* pParent /*=NULL*/)
	: CDialogEx(check::IDD, pParent)
{

}

check::~check()
{
}

void check::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(check, CDialogEx)
	ON_BN_CLICKED(IDOK, &check::OnBnClickedOk)
END_MESSAGE_MAP()


// check ��Ϣ�������


void check::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
