// change_order_start.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_order_start.h"
#include "afxdialogex.h"


// change_order_start �Ի���

IMPLEMENT_DYNAMIC(change_order_start, CDialogEx)

change_order_start::change_order_start(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_order_start::IDD, pParent)
	, infor_1(_T(""))
{

}

change_order_start::~change_order_start()
{
}

void change_order_start::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(change_order_start, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_order_start::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_order_start::OnBnClickedOk)
END_MESSAGE_MAP()


// change_order_start ��Ϣ�������


void change_order_start::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
CString change_order_start::GetInfor()
{
	if (this->isbnok)
	{
		return infor_1;
	}
}

void change_order_start::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
