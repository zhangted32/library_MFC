// change_orderadminname.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_orderadminname.h"
#include "afxdialogex.h"


// change_orderadminname �Ի���

IMPLEMENT_DYNAMIC(change_orderadminname, CDialogEx)

change_orderadminname::change_orderadminname(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_orderadminname::IDD, pParent)
	, infor_1(_T(""))
{

}

change_orderadminname::~change_orderadminname()
{
}

void change_orderadminname::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(change_orderadminname, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_orderadminname::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_orderadminname::OnBnClickedOk)
END_MESSAGE_MAP()


// change_orderadminname ��Ϣ�������


void change_orderadminname::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_orderadminname::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
