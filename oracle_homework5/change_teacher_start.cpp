// change_teacher_start.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_teacher_start.h"
#include "afxdialogex.h"


// change_teacher_start �Ի���

IMPLEMENT_DYNAMIC(change_teacher_start, CDialogEx)

change_teacher_start::change_teacher_start(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_teacher_start::IDD, pParent)
	, infor_1(_T(""))
{

}

change_teacher_start::~change_teacher_start()
{
}

void change_teacher_start::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(change_teacher_start, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_teacher_start::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_teacher_start::OnBnClickedOk)
END_MESSAGE_MAP()


// change_teacher_start ��Ϣ�������


void change_teacher_start::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}

CString change_teacher_start::GetInfor()
{
	if (this->isbnok)
	{
		return infor_1;
	}
}
void change_teacher_start::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
