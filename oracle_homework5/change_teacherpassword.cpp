// change_teacherpassword.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_teacherpassword.h"
#include "afxdialogex.h"


// change_teacherpassword �Ի���

IMPLEMENT_DYNAMIC(change_teacherpassword, CDialogEx)

change_teacherpassword::change_teacherpassword(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_teacherpassword::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
{

}

change_teacherpassword::~change_teacherpassword()
{
}

void change_teacherpassword::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, infor_1);
	DDX_Text(pDX, IDC_EDIT3, infor_2);
}


BEGIN_MESSAGE_MAP(change_teacherpassword, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &change_teacherpassword::OnEnChangeEdit2)
	ON_BN_CLICKED(IDOK, &change_teacherpassword::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT3, &change_teacherpassword::OnEnChangeEdit3)
END_MESSAGE_MAP()


// change_teacherpassword ��Ϣ�������


void change_teacherpassword::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT2, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_teacherpassword::OnBnClickedOk()
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


void change_teacherpassword::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT3,infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
