// change_pressadmin_start.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_pressadmin_start.h"
#include "afxdialogex.h"


// change_pressadmin_start �Ի���

IMPLEMENT_DYNAMIC(change_pressadmin_start, CDialogEx)

change_pressadmin_start::change_pressadmin_start(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_pressadmin_start::IDD, pParent)
	, infor_1(_T(""))
{

}

change_pressadmin_start::~change_pressadmin_start()
{
}

void change_pressadmin_start::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(change_pressadmin_start, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_pressadmin_start::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_pressadmin_start::OnBnClickedOk)
END_MESSAGE_MAP()


// change_pressadmin_start ��Ϣ�������


void change_pressadmin_start::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}

CString change_pressadmin_start::GetInfor()
{
	if (this->isbnok)
	{
		return infor_1;
	}
}

void change_pressadmin_start::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
