// change_book_start.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_book_start.h"
#include "afxdialogex.h"


// change_book_start �Ի���

IMPLEMENT_DYNAMIC(change_book_start, CDialogEx)

change_book_start::change_book_start(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_book_start::IDD, pParent)
	, infor_1(_T(""))
{

}

change_book_start::~change_book_start()
{
}

void change_book_start::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT9, infor_1);
}


BEGIN_MESSAGE_MAP(change_book_start, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT9, &change_book_start::OnEnChangeEdit9)
	ON_BN_CLICKED(IDOK, &change_book_start::OnBnClickedOk)
END_MESSAGE_MAP()


// change_book_start ��Ϣ�������


void change_book_start::OnEnChangeEdit9()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT9, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}

CString change_book_start::GetInfor()
{
	if (this->isbnok)
	{
		return infor_1;
	}
}
void change_book_start::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok=1;
	CDialogEx::OnOK();
}
