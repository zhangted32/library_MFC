// del_orderadmin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "del_orderadmin.h"
#include "afxdialogex.h"


// del_orderadmin �Ի���

IMPLEMENT_DYNAMIC(del_orderadmin, CDialogEx)

del_orderadmin::del_orderadmin(CWnd* pParent /*=NULL*/)
	: CDialogEx(del_orderadmin::IDD, pParent)
	, infor_1(_T(""))
{

}

del_orderadmin::~del_orderadmin()
{
}

void del_orderadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(del_orderadmin, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &del_orderadmin::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &del_orderadmin::OnBnClickedOk)
END_MESSAGE_MAP()


// del_orderadmin ��Ϣ�������


void del_orderadmin::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void del_orderadmin::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
