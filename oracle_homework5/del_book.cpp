// del_book.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "del_book.h"
#include "afxdialogex.h"


// del_book �Ի���

IMPLEMENT_DYNAMIC(del_book, CDialogEx)

del_book::del_book(CWnd* pParent /*=NULL*/)
	: CDialogEx(del_book::IDD, pParent)
	, infor_1(_T(""))
{

}

del_book::~del_book()
{
}

void del_book::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(del_book, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &del_book::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &del_book::OnBnClickedOk)
END_MESSAGE_MAP()


// del_book ��Ϣ�������


void del_book::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void del_book::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
