// change_orderadminpassword.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_orderadminpassword.h"
#include "afxdialogex.h"


// change_orderadminpassword �Ի���

IMPLEMENT_DYNAMIC(change_orderadminpassword, CDialogEx)

change_orderadminpassword::change_orderadminpassword(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_orderadminpassword::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
{

}

change_orderadminpassword::~change_orderadminpassword()
{
}

void change_orderadminpassword::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, infor_1);
	DDX_Text(pDX, IDC_EDIT3, infor_2);
}


BEGIN_MESSAGE_MAP(change_orderadminpassword, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &change_orderadminpassword::OnEnChangeEdit2)
	ON_BN_CLICKED(IDOK, &change_orderadminpassword::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT3, &change_orderadminpassword::OnEnChangeEdit3)
END_MESSAGE_MAP()


// change_orderadminpassword ��Ϣ�������


void change_orderadminpassword::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT2, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_orderadminpassword::OnBnClickedOk()
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


void change_orderadminpassword::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT4, infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
