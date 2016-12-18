// change_press.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_press.h"
#include "afxdialogex.h"
#include "aspect_all_h.h"

// change_press �Ի���

IMPLEMENT_DYNAMIC(change_press, CDialogEx)

change_press::change_press(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_press::IDD, pParent)
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
{

}

change_press::~change_press()
{
}

void change_press::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_2);
	DDX_Text(pDX, IDC_EDIT2, infor_3);
	DDX_Text(pDX, IDC_EDIT4, infor_4);
}


BEGIN_MESSAGE_MAP(change_press, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_press::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &change_press::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT4, &change_press::OnEnChangeEdit4)
	ON_BN_CLICKED(IDOK, &change_press::OnBnClickedOk)
END_MESSAGE_MAP()


// change_press ��Ϣ�������




void change_press::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_press::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT2, infor_3);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_press::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT4, infor_4);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_press::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;

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
	if (infor_2 != infor_21)//�޸ĵ���mingcheng
	{
		CString s;
		s += "update press set p_name='";
		s += infor_2;
		s += "' where p_name='";
		s += infor_1;
		s += "'";
		infor_1 = infor_2;
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_3 != infor_31)//�޸ĵ���p_phone
	{
		CString s;
		s += "update press set p_phone='";
		s += infor_3;
		s += "' where p_name='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_4 != infor_41)//�޸�p_address

	{
		CString s;
		s += "update press set p_address='";
		s += infor_4;
		s += "' where p_name='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	
	MessageBox(_T("�޸ĳɹ�"));
	CDialogEx::OnOK();
}


BOOL change_press::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	change_press_start run;
		run.DoModal();
	
	if (run.isbnok)
	{

		infor_1 = run.GetInfor();
		if (infor_1 == "")
		{
			AfxMessageBox(_T("������Ҫ�޸ĵĳ���������"));
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
			str_run += "select * from press where p_name='";
			str_run += infor_1;
			str_run += "'";
			USES_CONVERSION;
			string s_turn;
			s_turn = T2A(str_run);
			mysql_query(&mysql, s_turn.c_str());          //ִ��SQL���
			//mysql_query(&mysql, "insert into press values('�������ӿƼ���ѧ������', '789987', '����') ");
			MYSQL_RES *result = mysql_store_result(&mysql);
			if (result->row_count == 0)
			{
				AfxMessageBox(_T("��������ȷ�ĳ���������"));
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
			//infor_51 = row[3];

			SetDlgItemText(IDC_EDIT1, infor_21);
			SetDlgItemText(IDC_EDIT2, infor_31);
			SetDlgItemText(IDC_EDIT4, infor_41);
			//SetDlgItemText(IDC_EDIT6, infor_51);

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
