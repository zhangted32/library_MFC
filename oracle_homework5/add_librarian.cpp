// add_librarian.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "add_librarian.h"
#include "afxdialogex.h"


// add_librarian �Ի���

IMPLEMENT_DYNAMIC(add_librarian, CDialogEx)

add_librarian::add_librarian(CWnd* pParent /*=NULL*/)
	: CDialogEx(add_librarian::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
{

}

add_librarian::~add_librarian()
{
}

void add_librarian::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
	DDX_Text(pDX, IDC_EDIT4, infor_2);
	DDX_Text(pDX, IDC_EDIT2, infor_3);
	DDX_Text(pDX, IDC_EDIT3, infor_4);
}


BEGIN_MESSAGE_MAP(add_librarian, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &add_librarian::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT4, &add_librarian::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT2, &add_librarian::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &add_librarian::OnEnChangeEdit3)
	ON_BN_CLICKED(IDOK, &add_librarian::OnBnClickedOk)
END_MESSAGE_MAP()


// add_librarian ��Ϣ�������


void add_librarian::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add_librarian::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT4, infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add_librarian::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT2, infor_3);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add_librarian::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT3, infor_4);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add_librarian::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok=1;
	CDialogEx::OnOK();
}
