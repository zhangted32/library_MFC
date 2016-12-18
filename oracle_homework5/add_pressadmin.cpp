// add_pressadmin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "add_pressadmin.h"
#include "afxdialogex.h"


// add_pressadmin �Ի���

IMPLEMENT_DYNAMIC(add_pressadmin, CDialogEx)

add_pressadmin::add_pressadmin(CWnd* pParent /*=NULL*/)
	: CDialogEx(add_pressadmin::IDD, pParent)
	, pressadmin_turename(_T(""))
	, pressadmin_name(_T(""))
	, pressadmin_pwd(_T(""))
	, pressadmin_phone(_T(""))
{

}

add_pressadmin::~add_pressadmin()
{
}

void add_pressadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, pressadmin_turename);
	DDX_Text(pDX, IDC_EDIT3, pressadmin_name);
	DDX_Text(pDX, IDC_EDIT2, pressadmin_pwd);
	DDX_Text(pDX, IDC_EDIT5, pressadmin_phone);
}


BEGIN_MESSAGE_MAP(add_pressadmin, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &add_pressadmin::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT3, &add_pressadmin::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT2, &add_pressadmin::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT5, &add_pressadmin::OnEnChangeEdit5)
	ON_BN_CLICKED(IDOK, &add_pressadmin::OnBnClickedOk)
END_MESSAGE_MAP()


// add_pressadmin ��Ϣ�������


void add_pressadmin::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	GetDlgItemText(IDC_EDIT1, pressadmin_turename);
}


void add_pressadmin::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	GetDlgItemText(IDC_EDIT3, pressadmin_turename);
}


void add_pressadmin::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT2, pressadmin_turename);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add_pressadmin::OnEnChangeEdit5()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT5, pressadmin_turename);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add_pressadmin::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = true;
	CDialogEx::OnOK();
}
