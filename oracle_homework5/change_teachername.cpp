// change_teachername.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_teachername.h"
#include "afxdialogex.h"


// change_teachername �Ի���

IMPLEMENT_DYNAMIC(change_teachername, CDialogEx)

change_teachername::change_teachername(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_teachername::IDD, pParent)
	, infor_1(_T(""))
{

}

change_teachername::~change_teachername()
{
}

void change_teachername::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(change_teachername, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_teachername::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_teachername::OnBnClickedOk)
END_MESSAGE_MAP()


// change_teachername ��Ϣ�������


void change_teachername::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_teachername::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
