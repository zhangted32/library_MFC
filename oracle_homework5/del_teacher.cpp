// del_teacher.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "del_teacher.h"
#include "afxdialogex.h"


// del_teacher �Ի���

IMPLEMENT_DYNAMIC(del_teacher, CDialogEx)

del_teacher::del_teacher(CWnd* pParent /*=NULL*/)
	: CDialogEx(del_teacher::IDD, pParent)
	, infor_2(_T(""))
	
{

}

del_teacher::~del_teacher()
{
}

void del_teacher::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT4, infor_2);
}


BEGIN_MESSAGE_MAP(del_teacher, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT4, &del_teacher::OnEnChangeEdit4)
	ON_BN_CLICKED(IDOK, &del_teacher::OnBnClickedOk)
END_MESSAGE_MAP()


// del_teacher ��Ϣ�������


void del_teacher::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT4, infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}




void del_teacher::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
