// del_order.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "del_order.h"
#include "afxdialogex.h"


// del_order �Ի���

IMPLEMENT_DYNAMIC(del_order, CDialogEx)

del_order::del_order(CWnd* pParent /*=NULL*/)
	: CDialogEx(del_order::IDD, pParent)
	, infor_1(_T(""))
{

}

del_order::~del_order()
{
}

void del_order::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(del_order, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &del_order::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &del_order::OnBnClickedOk)
END_MESSAGE_MAP()


// del_order ��Ϣ�������


void del_order::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void del_order::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
