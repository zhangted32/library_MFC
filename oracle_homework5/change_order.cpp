// change_order.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_order.h"
#include "afxdialogex.h"
#include "aspect_all_h.h"

// change_order �Ի���

IMPLEMENT_DYNAMIC(change_order, CDialogEx)

change_order::change_order(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_order::IDD, pParent)
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
	, infor_5(_T(""))
	, infor_6(_T(""))
	, infor_7(_T(""))
	, infor_8(_T(""))
	, infor_9(_T(""))
{

}

change_order::~change_order()
{
}

void change_order::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, infor_2);
	DDX_Text(pDX, IDC_EDIT3, infor_3);
	DDX_Text(pDX, IDC_EDIT6, infor_4);
	DDX_Text(pDX, IDC_EDIT7, infor_5);
	DDX_Text(pDX, IDC_EDIT8, infor_6);
	DDX_Text(pDX, IDC_EDIT9, infor_7);
	DDX_Text(pDX, IDC_EDIT10, infor_8);
	DDX_Text(pDX, IDC_EDIT11, infor_9);
}


BEGIN_MESSAGE_MAP(change_order, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_EN_CHANGE(IDC_EDIT2, &change_order::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &change_order::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT6, &change_order::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT7, &change_order::OnEnChangeEdit7)
	ON_EN_CHANGE(IDC_EDIT8, &change_order::OnEnChangeEdit8)
	ON_EN_CHANGE(IDC_EDIT9, &change_order::OnEnChangeEdit9)
	ON_EN_CHANGE(IDC_EDIT10, &change_order::OnEnChangeEdit10)
	ON_BN_CLICKED(IDOK, &change_order::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT11, &change_order::OnEnChangeEdit11)
END_MESSAGE_MAP()


// change_order ��Ϣ�������


HBRUSH change_order::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  �ڴ˸��� DC ���κ�����

	// TODO:  ���Ĭ�ϵĲ������軭�ʣ��򷵻���һ������
	if (pWnd->GetDlgCtrlID() == IDC_STATIC)
	{
		pDC->SetTextColor(RGB(0, 0, 0));
	}
	return hbr;
}




void change_order::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT3, infor_3);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT6, infor_4);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnEnChangeEdit7()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT7, infor_5);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnEnChangeEdit8()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT8, infor_6);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnEnChangeEdit9()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT9, infor_7);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnEnChangeEdit10()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT10, infor_8);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnBnClickedOk()
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
	
	if (infor_2 != infor_21)//�޸ĵ���isbn
	{
		CString s;
		s += "update book_order set isbn='";
		s += infor_2;
		s += "' where id=";
		s += infor_1;
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_3 != infor_31)//�޸�book_name

	{
		CString s;
		s += "update book_order set book_name='";
		s += infor_3;
		s += "' where id=";
		s += infor_1;
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_4 != infor_41)//book_edition
	{
		CString s;
		s += "update book_order set book_edition='";
		s += infor_4;
		s += "' where id=";
		s += infor_1;
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_5 != infor_51)//press
	{
		CString s;
		s += "update book_order set press='";
		s += infor_5;
		s += "' where id=";
		s += infor_1;
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_6 != infor_61)//book_author
	{
		CString s;
		s += "update book_order set book_author='";
		s += infor_6;
		s += "' where id=";
		s += infor_1;
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_7 != infor_71)//book_price
	{
		CString s;
		s += "update book_order set book_price=";
		s += infor_7;
		s += " where id=";
		s += infor_1;
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_8 != infor_81)//book_number
	{
		CString s;
		s += "update book_order set book_number=";
		s += infor_8;
		s += " where id=";
		s += infor_1;
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_9 != infor_91)//book_order_name
	{
		CString s;
		s += "update book_order set book_order_name='";
		s += infor_9;
		s += "'where id=";
		s += infor_1;
		
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	MessageBox(_T("�޸ĳɹ�"));
	CDialogEx::OnOK();
}


void change_order::OnEnChangeEdit11()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT11, infor_9);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


BOOL change_order::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	change_order_start run;
		run.DoModal();
	
	if (run.isbnok)
	{

		infor_1 = run.GetInfor();
		if (infor_1 == "")
		{
			AfxMessageBox(_T("������Ҫ�޸ĵĶ���id"));
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
			str_run += "select * from book_order where id=";
			str_run += infor_1;
			USES_CONVERSION;
			string s_turn;
			s_turn = T2A(str_run);
			mysql_query(&mysql, s_turn.c_str());          //ִ��SQL���
			//mysql_query(&mysql, "insert into press values('�������ӿƼ���ѧ������', '789987', '����') ");
			MYSQL_RES *result = mysql_store_result(&mysql);
			if (result->row_count == 0)
			{
				AfxMessageBox(_T("��������ȷ�Ķ���id"));
				CDialogEx::OnCancel();
				return false;
			}
			int filedcount = mysql_num_fields(result);//��ȡ�ֶ���
			MYSQL_ROW row = NULL;//��¼
			MYSQL_FIELD * filed = NULL;//�ֶ�
			int row_judge = 0;
			row = mysql_fetch_row(result);
			infor_21 = row[1];//isbn
			infor_31 = row[2];//bname
			infor_41 = row[3];//banci
			infor_51 = row[4];//chubanshe
			infor_61 = row[5];//zuozhe
			infor_71 = row[6];//jiage
			infor_81 = row[7];//shulaing
			infor_91 = row[9];//dinggouren
			SetDlgItemText(IDC_EDIT2, infor_21);
			SetDlgItemText(IDC_EDIT3, infor_31);
			SetDlgItemText(IDC_EDIT6, infor_41);///
			SetDlgItemText(IDC_EDIT7, infor_51);
			SetDlgItemText(IDC_EDIT8, infor_61);
			SetDlgItemText(IDC_EDIT9, infor_71);
			SetDlgItemText(IDC_EDIT10, infor_81);
			SetDlgItemText(IDC_EDIT11, infor_91);

		}
	}
	else
	{
		CDialogEx::OnCancel();
		return false;
	}

	  // return TRUE unless you set the focus to a control
	// �쳣:  OCX ����ҳӦ���� FALSE
}
