// change_pressname.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_pressname.h"
#include "afxdialogex.h"


// change_pressname �Ի���

IMPLEMENT_DYNAMIC(change_pressname, CDialogEx)

change_pressname::change_pressname(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_pressname::IDD, pParent)
	, infor_1(_T(""))
{

}

change_pressname::~change_pressname()
{
}

void change_pressname::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(change_pressname, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_pressname::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_pressname::OnBnClickedOk)
END_MESSAGE_MAP()


// change_pressname ��Ϣ�������


void change_pressname::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_pressname::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
