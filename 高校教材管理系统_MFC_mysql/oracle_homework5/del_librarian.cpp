// del_librarian.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "del_librarian.h"
#include "afxdialogex.h"


// del_librarian �Ի���

IMPLEMENT_DYNAMIC(del_librarian, CDialogEx)

del_librarian::del_librarian(CWnd* pParent /*=NULL*/)
	: CDialogEx(del_librarian::IDD, pParent)
	, infor_1(_T(""))
{

}

del_librarian::~del_librarian()
{
}

void del_librarian::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(del_librarian, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &del_librarian::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &del_librarian::OnBnClickedOk)
END_MESSAGE_MAP()


// del_librarian ��Ϣ�������


void del_librarian::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void del_librarian::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
