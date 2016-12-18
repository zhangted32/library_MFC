// change_librarianpassword.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_librarianpassword.h"
#include "afxdialogex.h"


// change_librarianpassword �Ի���

IMPLEMENT_DYNAMIC(change_librarianpassword, CDialogEx)

change_librarianpassword::change_librarianpassword(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_librarianpassword::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
{

}

change_librarianpassword::~change_librarianpassword()
{
}

void change_librarianpassword::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
	DDX_Text(pDX, IDC_EDIT2, infor_2);
}


BEGIN_MESSAGE_MAP(change_librarianpassword, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_librarianpassword::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_librarianpassword::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT2, &change_librarianpassword::OnEnChangeEdit2)
END_MESSAGE_MAP()


// change_librarianpassword ��Ϣ�������


void change_librarianpassword::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_librarianpassword::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	if (infor_1 == infor_2)
	{
		//AfxMessageBox(_T("������ͬ�޸ĳɹ���"));
		this->isbnok = 1;
		CDialogEx::OnOK();

	}
	else
	{
		AfxMessageBox(_T("���벻һ���޸�ʧ�ܣ�"));
		CDialogEx::OnCancel();
	}
}


void change_librarianpassword::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
