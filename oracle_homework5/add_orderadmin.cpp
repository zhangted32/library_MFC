// add_orderadmin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "add_orderadmin.h"
#include "afxdialogex.h"


// add_orderadmin �Ի���

IMPLEMENT_DYNAMIC(add_orderadmin, CDialogEx)

add_orderadmin::add_orderadmin(CWnd* pParent /*=NULL*/)
	: CDialogEx(add_orderadmin::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
{

}

add_orderadmin::~add_orderadmin()
{
}

void add_orderadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
	DDX_Text(pDX, IDC_EDIT4, infor_2);
	DDX_Text(pDX, IDC_EDIT2, infor_3);
	DDX_Text(pDX, IDC_EDIT3, infor_4);
}


BEGIN_MESSAGE_MAP(add_orderadmin, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &add_orderadmin::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT4, &add_orderadmin::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT2, &add_orderadmin::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &add_orderadmin::OnEnChangeEdit3)
	ON_BN_CLICKED(IDOK, &add_orderadmin::OnBnClickedOk)
END_MESSAGE_MAP()


// add_orderadmin ��Ϣ�������


void add_orderadmin::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add_orderadmin::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT4, infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add_orderadmin::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT2, infor_3);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add_orderadmin::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT3, infor_4);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add_orderadmin::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
