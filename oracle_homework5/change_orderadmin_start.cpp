// change_orderadmin_start.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_orderadmin_start.h"
#include "afxdialogex.h"


// change_orderadmin_start �Ի���

IMPLEMENT_DYNAMIC(change_orderadmin_start, CDialogEx)

change_orderadmin_start::change_orderadmin_start(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_orderadmin_start::IDD, pParent)
	, infor_1(_T(""))
{

}

change_orderadmin_start::~change_orderadmin_start()
{
}

void change_orderadmin_start::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(change_orderadmin_start, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_orderadmin_start::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_orderadmin_start::OnBnClickedOk)
END_MESSAGE_MAP()


// change_orderadmin_start ��Ϣ�������

CString change_orderadmin_start::Getinfor()
{
	if (this->isbnok)
	{
		return infor_1;
	}
}
void change_orderadmin_start::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_orderadmin_start::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
