// change_presspassword.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_presspassword.h"
#include "afxdialogex.h"


// change_presspassword �Ի���

IMPLEMENT_DYNAMIC(change_presspassword, CDialogEx)

change_presspassword::change_presspassword(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_presspassword::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
{

}

change_presspassword::~change_presspassword()
{
}

void change_presspassword::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, infor_1);
	DDX_Text(pDX, IDC_EDIT3, infor_2);
}


BEGIN_MESSAGE_MAP(change_presspassword, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &change_presspassword::OnEnChangeEdit2)
	ON_BN_CLICKED(IDOK, &change_presspassword::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT3, &change_presspassword::OnEnChangeEdit3)
END_MESSAGE_MAP()


// change_presspassword ��Ϣ�������


void change_presspassword::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT2, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_presspassword::OnBnClickedOk()
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


void change_presspassword::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT3, infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
