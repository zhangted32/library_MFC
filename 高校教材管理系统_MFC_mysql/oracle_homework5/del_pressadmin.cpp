// del_pressadmin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "del_pressadmin.h"
#include "afxdialogex.h"


// del_pressadmin �Ի���

IMPLEMENT_DYNAMIC(del_pressadmin, CDialogEx)

del_pressadmin::del_pressadmin(CWnd* pParent /*=NULL*/)
	: CDialogEx(del_pressadmin::IDD, pParent)
	, pressname(_T(""))
{

}

del_pressadmin::~del_pressadmin()
{
}

void del_pressadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, pressname);
}


BEGIN_MESSAGE_MAP(del_pressadmin, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT3, &del_pressadmin::OnEnChangeEdit3)
	ON_BN_CLICKED(IDOK, &del_pressadmin::OnBnClickedOk)
END_MESSAGE_MAP()


// del_pressadmin ��Ϣ�������


void del_pressadmin::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT3, pressname);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void del_pressadmin::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
