// change_pressadmin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_pressadmin.h"
#include "afxdialogex.h"
#include "aspect_all_h.h"


// change_pressadmin �Ի���

IMPLEMENT_DYNAMIC(change_pressadmin, CDialogEx)

change_pressadmin::change_pressadmin(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_pressadmin::IDD, pParent)
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
	, infor_5(_T(""))
{
	
}

change_pressadmin::~change_pressadmin()
{
}

void change_pressadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, infor_2);
	DDX_Text(pDX, IDC_EDIT3, infor_3);
	DDX_Text(pDX, IDC_EDIT5, infor_4);
	DDX_Text(pDX, IDC_EDIT6, infor_5);
}


BEGIN_MESSAGE_MAP(change_pressadmin, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &change_pressadmin::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &change_pressadmin::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT5, &change_pressadmin::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT6, &change_pressadmin::OnEnChangeEdit6)
	ON_BN_CLICKED(IDOK, &change_pressadmin::OnBnClickedOk)
END_MESSAGE_MAP()


// change_pressadmin ��Ϣ�������


void change_pressadmin::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	//GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_pressadmin::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	//SetDlgItemText(IDC_EDIT2, infor_21);
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_pressadmin::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	//SetDlgItemText(IDC_EDIT3, infor_31);
	GetDlgItemText(IDC_EDIT3, infor_3);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_pressadmin::OnEnChangeEdit5()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	//SetDlgItemText(IDC_EDIT5, infor_41);
	GetDlgItemText(IDC_EDIT5, infor_4);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_pressadmin::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	//SetDlgItemText(IDC_EDIT6, infor_51);
	GetDlgItemText(IDC_EDIT6, infor_5);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_pressadmin::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	mysql_library_init(NULL, 0, 0);
	MYSQL mysql;
	mysql_init(&mysql);
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gb2312");
	if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "lovewho?1314", "test", 0, NULL, CLIENT_MULTI_STATEMENTS))//�������ݿ�
	{
		AfxMessageBox(_T("not to connect mysql"));
		return;
	}
	USES_CONVERSION;
	this->isbnok = 1;
	if (infor_3 != infor_31)//�޸ĵ����û���
	{
		CString s;
		s += "update user set username='";
		s += infor_3;
		s += "' where username='";
		s += infor_1;
		s += "'";
		infor_1 = infor_3;//���û��������޸�
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_2 != infor_21)//�޸ĵ���userturename
	{
		CString s;
		s += "update user set userturename='";
		s += infor_2;
		s += "' where username='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	
	if (infor_4 != infor_41)//�޸�����

	{
		CString s;
		s += "update user set userpassword='";
		s += infor_4;
		s += "' where username='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_5 != infor_51)//userphone
	{
		CString s;
		s += "update user set userphone='";
		s += infor_5;
		s += "' where username='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	MessageBox(_T("�޸ĳɹ�"));
	CDialogEx::OnOK();
}


BOOL change_pressadmin::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	change_pressadmin_start run;
		run.DoModal();
	if (run.isbnok)
	{

		infor_1 = run.GetInfor();
		if (infor_1 == "")
		{
			AfxMessageBox(_T("������Ҫ�޸ĵ�ְ����"));
			CDialogEx::OnCancel();
			return false;
		}
		else
		{
			mysql_library_init(NULL, 0, 0);
			MYSQL mysql;
			mysql_init(&mysql);
			mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gb2312");
			if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "lovewho?1314", "test", 0, NULL, CLIENT_MULTI_STATEMENTS))//�������ݿ�
			{
				AfxMessageBox(_T("not to connect mysql"));
				return false;
			}
			CString str_run;
			str_run += "select * from user where username='";
			str_run += infor_1;
			str_run += "' and userflag=3";
			USES_CONVERSION;
			string s_turn;
			s_turn = T2A(str_run);
			mysql_query(&mysql, s_turn.c_str());          //ִ��SQL���
			//mysql_query(&mysql, "insert into press values('�������ӿƼ���ѧ������', '789987', '����') ");
			MYSQL_RES *result = mysql_store_result(&mysql);
			if (result->row_count == 0)
			{
				AfxMessageBox(_T("��������ȷ��ְ����"));
				CDialogEx::OnCancel();
				return false;
			}
			int filedcount = mysql_num_fields(result);//��ȡ�ֶ���
			MYSQL_ROW row = NULL;//��¼
			MYSQL_FIELD * filed = NULL;//�ֶ�
			int row_judge = 0;
			row = mysql_fetch_row(result);
			infor_21 = row[0];
			infor_31 = row[1];
			infor_41 = row[2];
			infor_51 = row[3];
			
			SetDlgItemText(IDC_EDIT2,infor_21);
			SetDlgItemText(IDC_EDIT3, infor_31);
			SetDlgItemText(IDC_EDIT5, infor_41);
			SetDlgItemText(IDC_EDIT6, infor_51);
			
		}
	}
	else
	{
		CDialogEx::OnCancel();
		return false;
	}

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣:  OCX ����ҳӦ���� FALSE
}
