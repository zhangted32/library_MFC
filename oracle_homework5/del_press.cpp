// del_press.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "del_press.h"
#include "afxdialogex.h"


// del_press �Ի���

IMPLEMENT_DYNAMIC(del_press, CDialogEx)

del_press::del_press(CWnd* pParent /*=NULL*/)
	: CDialogEx(del_press::IDD, pParent)
	, infor_1(_T(""))
{

}

del_press::~del_press()
{
}

void del_press::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(del_press, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &del_press::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &del_press::OnBnClickedOk)
END_MESSAGE_MAP()


// del_press ��Ϣ�������


void del_press::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void del_press::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
