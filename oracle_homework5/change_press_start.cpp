// change_press_start.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_press_start.h"
#include "afxdialogex.h"


// change_press_start �Ի���

IMPLEMENT_DYNAMIC(change_press_start, CDialogEx)

change_press_start::change_press_start(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_press_start::IDD, pParent)
	, infor_1(_T(""))
{

}

change_press_start::~change_press_start()
{
}

void change_press_start::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, infor_1);
}


BEGIN_MESSAGE_MAP(change_press_start, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT3, &change_press_start::OnEnChangeEdit3)
	ON_BN_CLICKED(IDOK, &change_press_start::OnBnClickedOk)
END_MESSAGE_MAP()


// change_press_start ��Ϣ�������


void change_press_start::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT3, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}

CString change_press_start::GetInfor()
{
	if (this->isbnok)
	{
		return infor_1;
	}
}

void change_press_start::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
