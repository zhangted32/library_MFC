// change_librarianname.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_librarianname.h"
#include "afxdialogex.h"


// change_librarianname �Ի���

IMPLEMENT_DYNAMIC(change_librarianname, CDialogEx)

change_librarianname::change_librarianname(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_librarianname::IDD, pParent)
	, infor_1(_T(""))
{

}

change_librarianname::~change_librarianname()
{
}

void change_librarianname::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(change_librarianname, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_librarianname::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_librarianname::OnBnClickedOk)
END_MESSAGE_MAP()


// change_librarianname ��Ϣ�������


void change_librarianname::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_librarianname::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
