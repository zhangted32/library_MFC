// add_press.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "add_press.h"
#include "afxdialogex.h"


// add_press �Ի���

IMPLEMENT_DYNAMIC(add_press, CDialogEx)

add_press::add_press(CWnd* pParent /*=NULL*/)
	: CDialogEx(add_press::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
	, infor_3(_T(""))
{

}

add_press::~add_press()
{
}

void add_press::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
	DDX_Text(pDX, IDC_EDIT2, infor_2);
	DDX_Text(pDX, IDC_EDIT3, infor_3);
}


BEGIN_MESSAGE_MAP(add_press, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &add_press::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &add_press::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &add_press::OnEnChangeEdit3)
	ON_BN_CLICKED(IDOK, &add_press::OnBnClickedOk)
END_MESSAGE_MAP()


// add_press ��Ϣ�������


void add_press::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add_press::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add_press::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT3, infor_3);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add_press::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
