// change_sysname.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_sysname.h"
#include "afxdialogex.h"


// change_sysname �Ի���

IMPLEMENT_DYNAMIC(change_sysname, CDialogEx)

change_sysname::change_sysname(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_sysname::IDD, pParent)
	, infor_1(_T(""))
{

}

change_sysname::~change_sysname()
{
}

void change_sysname::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(change_sysname, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_sysname::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_sysname::OnBnClickedOk)
END_MESSAGE_MAP()


// change_sysname ��Ϣ�������


void change_sysname::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_sysname::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
