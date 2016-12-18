// teacher.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "teacher.h"
#include "afxdialogex.h"
#include "aspect_all_h.h"
#include <string>
#include <sstream>
using namespace std;
// teacher �Ի���

IMPLEMENT_DYNAMIC(teacher, CDialogEx)

teacher::teacher(CWnd* pParent /*=NULL*/)
	: CDialogEx(teacher::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

teacher::~teacher()
{
}

void teacher::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TREE1, m_tree);
	DDX_Control(pDX, IDC_LIST1, m_list);
}


BEGIN_MESSAGE_MAP(teacher, CDialogEx)
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE1, &teacher::OnSelchangedteacherTree1)
END_MESSAGE_MAP()


// teacher ��Ϣ�������


BOOL teacher::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��
	


	HTREEITEM hRoot = m_tree.InsertItem(_T("�����б�"), 0, 0);
	m_tree.SetItemState(hRoot, TVIS_BOLD, TVIS_BOLD);
	HTREEITEM hSrc_1 = m_tree.InsertItem(_T("�̲�"), 0, 0, hRoot);

	m_tree.InsertItem(_T("�鿴�̲�"), 3, 3, hSrc_1);


	HTREEITEM hSrc_2 = m_tree.InsertItem(_T("�������"), 0, 0, hRoot);


	m_tree.InsertItem(_T("�鿴ȡ����Ϣ"), 3, 3, hSrc_2);
	m_tree.InsertItem(_T("�鿴������Ϣ"), 3, 3, hSrc_2);


	HTREEITEM hSrc_3 = m_tree.InsertItem(_T("�����̲�"), 0, 0, hRoot);


	m_tree.InsertItem(_T("����"), 3, 3, hSrc_3);



	HTREEITEM hSrc_4 = m_tree.InsertItem(_T("�޸���Ϣ"), 0, 0, hRoot);


	m_tree.InsertItem(_T("�޸�����"), 3, 3, hSrc_4);
	m_tree.InsertItem(_T("�޸��û���"), 3, 3, hSrc_4);
	return true;
}

void teacher::OnSelchangedteacherTree1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
	USES_CONVERSION;

	mysql_library_init(NULL, 0, 0);
	MYSQL mysql;
	mysql_init(&mysql);
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gb2312");
	if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "lovewho?1314", "test", 0, NULL, CLIENT_MULTI_STATEMENTS))//�������ݿ�
	{
		AfxMessageBox(_T("not to connect mysql"));
		return;
	}
	HTREEITEM selItem;
	//���ѡ����
	selItem = m_tree.GetSelectedItem();
	//��ѡ�����ֵת��ΪDWORDֵ��Ҳ����������m_tree.SetItemData�������趨�����ֵ
	/*DWORD data = m_tree.GetItemData(selItem);
	CString inputData;
	inputData.Format("ѡ�����ĿΪ:%d", data);
	AfxMessageBox(inputData);*/
	CString str;
	str = m_tree.GetItemText(selItem);
	if (str == "�޸�����")
	{

		change_teacherpassword run;
		run.DoModal();
		str = "";

		CString str;
		//str.Format(_T("update user set userpassword='%s' where username='%s' and userpassword='%s'"), run.infor_1, str_start_name, str_start_pwd);
		str += "update user set userpassword = '";
		str += run.infor_1;
		str += "' where username='";
		str += str_start_name;
		str += "' and userpassword='";
		str += str_start_pwd;
		str += "'";
		string s_copy = T2A(str);
		if (run.isbnok)
		{
			mysql_query(&mysql, s_copy.c_str());
			AfxMessageBox(_T("�޸ĳɹ�"));
			string s_1;
			s_1 = T2A(run.infor_1);
			strcpy_s(str_start_pwd, s_1.size() + 1, s_1.c_str());

		}

		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}
	if (str == "�޸��û���")
	{

		change_teachername run;
		run.DoModal();
		str = "";

		CString str;
		//str.Format(_T("update user set username='%s' where username='%s' and userpassword='%s'"), run.infor_1, str_start_name, str_start_pwd);
		str += "update user set username = '";
		str += run.infor_1;
		str += "' where username='";
		str += str_start_name;
		str += "' and userpassword='";
		str += str_start_pwd;
		str += "'";
		string s_copy = T2A(str);
		if (run.isbnok)
		{
			mysql_query(&mysql, s_copy.c_str());
			AfxMessageBox(_T("�޸ĳɹ�"));
			string s_1;
			s_1 = T2A(run.infor_1);
			strcpy_s(str_start_name, s_1.size() + 1, s_1.c_str());

		}

		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}
	if (str == "�鿴�̲�")
	{
		int nCols = m_list.GetHeaderCtrl()->GetItemCount();
		for (int j = 0; j < nCols; j++)
		{
			m_list.DeleteColumn(0);
		}
		m_list.DeleteAllItems();//ɾ��������



		str = "";

		CRect rect;
		// ��ȡ��������б���ͼ�ؼ���λ�úʹ�С    
		m_list.GetClientRect(&rect);

		// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����    
		m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		mysql_query(&mysql, "select * from book");          //ִ��SQL���
		//mysql_query(&mysql, "insert into press values('�������ӿƼ���ѧ������', '789987', '����') ");
		MYSQL_RES *result = mysql_store_result(&mysql);
		int filedcount = mysql_num_fields(result);//��ȡ�ֶ���
		MYSQL_ROW row = NULL;//��¼
		MYSQL_FIELD * filed = NULL;//�ֶ�
		int row_judge = 0;

		while (row = mysql_fetch_row(result))
		{
			if (row_judge == 0)
			{
				for (int i = 0; i < filedcount; i++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					//m_list.InsertItem(i, str_2);
				}
			}

			for (int i = 0, j = 0; j < filedcount; i++, j++)
			{
				filed = mysql_fetch_field_direct(result, i);
				CString str_1, str_2;
				str_1 = filed->name;
				str_2 = row[i];
				//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
				if (j == 0)
					m_list.InsertItem(row_judge, str_2);
				else
					m_list.SetItemText(row_judge, j, str_2);

			}
			row_judge++;
		}
		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}

	if (str == "�鿴ȡ����Ϣ")
	{
		int nCols = m_list.GetHeaderCtrl()->GetItemCount();
		for (int j = 0; j < nCols; j++)
		{
			m_list.DeleteColumn(0);
		}
		m_list.DeleteAllItems();//ɾ��������
		str = "";

		CRect rect;
		// ��ȡ��������б���ͼ�ؼ���λ�úʹ�С    
		m_list.GetClientRect(&rect);

		// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����    
		m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		CString str_1;
		str_1 += "select *from view_teacher_Look_book_take where take_name='";
		str_1 += str_start_name;
		str_1 += "'";
		string s_copy = T2A(str_1);
		mysql_query(&mysql, s_copy.c_str());          //ִ��SQL���
		//mysql_query(&mysql, "insert into press values('�������ӿƼ���ѧ������', '789987', '����') ");
		MYSQL_RES *result = mysql_store_result(&mysql);
		
		int filedcount = mysql_num_fields(result);//��ȡ�ֶ���

		MYSQL_ROW row = NULL;//��¼
		MYSQL_FIELD * filed = NULL;//�ֶ�
		int row_judge = 0;

		while (row = mysql_fetch_row(result))
		{
			if (row_judge == 0)
			{
				for (int i = 0; i < filedcount; i++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					//m_list.InsertItem(i, str_2);
				}
			}

			for (int i = 0, j = 0; j < filedcount; i++, j++)
			{
				filed = mysql_fetch_field_direct(result, i);
				CString str_1, str_2;
				str_1 = filed->name;
				str_2 = row[i];
				//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
				if (j == 0)
					m_list.InsertItem(row_judge, str_2);
				else
					m_list.SetItemText(row_judge, j, str_2);

			}
			row_judge++;
		}
		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}

	if (str == "�鿴������Ϣ")
	{
		int nCols = m_list.GetHeaderCtrl()->GetItemCount();
		for (int j = 0; j < nCols; j++)
		{
			m_list.DeleteColumn(0);
		}
		m_list.DeleteAllItems();//ɾ��������
		str = "";

		CRect rect;
		// ��ȡ��������б���ͼ�ؼ���λ�úʹ�С    
		m_list.GetClientRect(&rect);

		// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����    
		m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		CString str_1;
		str_1 += "select *from view_teacher_Look_book_order where order_name='";
		str_1 += str_start_name;
		str_1 += "'";
		string s_copy = T2A(str_1);
		mysql_query(&mysql, s_copy.c_str());           //ִ��SQL���
		//mysql_query(&mysql, "insert into press values('�������ӿƼ���ѧ������', '789987', '����') ");
		MYSQL_RES *result = mysql_store_result(&mysql);
		int filedcount = mysql_num_fields(result);//��ȡ�ֶ���
		MYSQL_ROW row = NULL;//��¼
		MYSQL_FIELD * filed = NULL;//�ֶ�
		int row_judge = 0;

		while (row = mysql_fetch_row(result))
		{
			if (row_judge == 0)
			{
				for (int i = 0; i < filedcount; i++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					//m_list.InsertItem(i, str_2);
				}
			}

			for (int i = 0, j = 0; j < filedcount; i++, j++)
			{
				filed = mysql_fetch_field_direct(result, i);
				CString str_1, str_2;
				str_1 = filed->name;
				str_2 = row[i];
				//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
				if (j == 0)
					m_list.InsertItem(row_judge, str_2);
				else
					m_list.SetItemText(row_judge, j, str_2);

			}
			row_judge++;
		}
		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}


	if (str == "�鿴����")
	{
		int nCols = m_list.GetHeaderCtrl()->GetItemCount();
		for (int j = 0; j < nCols; j++)
		{
			m_list.DeleteColumn(0);
		}
		m_list.DeleteAllItems();//ɾ��������



		str = "";

		CRect rect;
		// ��ȡ��������б���ͼ�ؼ���λ�úʹ�С    
		m_list.GetClientRect(&rect);

		// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����    
		m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		mysql_query(&mysql, "select * from book_order");          //ִ��SQL���
		//mysql_query(&mysql, "insert into press values('�������ӿƼ���ѧ������', '789987', '����') ");
		MYSQL_RES *result = mysql_store_result(&mysql);
		int filedcount = mysql_num_fields(result);//��ȡ�ֶ���
		MYSQL_ROW row = NULL;//��¼
		MYSQL_FIELD * filed = NULL;//�ֶ�
		int row_judge = 0;

		while (row = mysql_fetch_row(result))
		{
			if (row_judge == 0)
			{
				for (int i = 0; i < filedcount; i++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					//m_list.InsertItem(i, str_2);
				}
			}

			for (int i = 0, j = 0; j < filedcount; i++, j++)
			{
				filed = mysql_fetch_field_direct(result, i);
				CString str_1, str_2;
				str_1 = filed->name;
				str_2 = row[i];
				//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
				if (j == 0)
					m_list.InsertItem(row_judge, str_2);
				else
					m_list.SetItemText(row_judge, j, str_2);

			}
			row_judge++;
		}
		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}
	
	if (str == "����")
	{
		teacher_order_book run;
		run.DoModal();
		str = "";

		CString str_1, str_2;
		
		//���붩�鵥
		str_1 += "insert into book_order values (";
		str_1 += "1,'";//id
		str_1 += run.infor_1;
		str_1 += "','";
		str_1 += run.infor_2;//
		str_1 += "','";
		str_1 += run.infor_3;
		str_1 += "','";
		str_1 += run.infor_4;
		str_1 += "','";
		str_1 += run.infor_5;
		str_1 += "',";
		str_1 += run.infor_6;
		str_1 += ",";
		str_1 += run.infor_7;//
		str_1 += ",0,'";
		str_1 += str_start_name;
		str_1 += "')";
		//����ȡ�鵥
		str_2 += "insert into book_take values (";
		str_2 += "1,'";
		str_2 += run.infor_1;
		str_2 += "','";
		str_2 += str_start_name;
		str_2 += "',";
		str_2 += run.infor_7;
		str_2 += ",0)";
		
		//�жϽ̲Ŀ���û�д���
		CString str_judge;
		str_judge += "select * from book where ISBN='";
		str_judge += run.infor_1;
		str_judge += "'";
		string str_judge_copy = T2A(str_judge);
		mysql_query(&mysql, str_judge_copy.c_str());
		MYSQL_RES *result = mysql_store_result(&mysql);
		if (result->row_count == 0)
		{
			if (run.isbnok)
			{
				AfxMessageBox(_T("�̲Ŀ���û�д���,�����й���"));
				string s_copy = T2A(str_1);
				mysql_query(&mysql, s_copy.c_str());
				AfxMessageBox(_T("����ɹ�"));
			}
		}
		else
		{
			MYSQL_ROW row = NULL;
			row = mysql_fetch_row(result);
			int num_judge = atol(row[6]);
			string s_turn;
			s_turn = T2A(run.infor_7);
			int num_teacher_write = atol(s_turn.c_str());
			if (num_teacher_write > num_judge)
			{
				AfxMessageBox(_T("�̲Ŀ��д�����������,�����й���"));
				str_1 = "";
				run.infor_7 = "";
				int num_1;
				num_1 = num_teacher_write - num_judge;
				CString s;
				s.Format(_T("%d"), num_1);

				run.infor_7+=s;
				str_1 += "insert into book_order values (";
				str_1 += "1,'";
				str_1 += run.infor_1;
				str_1 += "','";
				str_1 += run.infor_2;//
				str_1 += "','";
				str_1 += run.infor_3;
				str_1 += "','";
				str_1 += run.infor_4;
				str_1 += "','";
				str_1 += run.infor_5;
				str_1 += "',";
				str_1 += run.infor_6;
				str_1 += ",";
				str_1 += run.infor_7;//
				str_1 += ",0,'";
				str_1 += str_start_name;
				str_1 += "')";

				///qushu
				str_2 = "";
				str_2 += "insert into book_take values (";
				str_2 += "1,'";
				str_2 += run.infor_1;
				str_2 += "','";
				str_2 += str_start_name;
				str_2 += "',";
				str_2 += row[6];
				str_2 += ",0)";
				if (run.isbnok)
				{
					string s_copy = T2A(str_1);
					string s_2_copy = T2A(str_2);
					mysql_query(&mysql, s_copy.c_str());
					mysql_query(&mysql, s_2_copy.c_str());
					AfxMessageBox(_T("����ɹ�"));
				}
			}
			else
			{
				if (run.isbnok)
				{
					string s_2_copy = T2A(str_2);
					mysql_query(&mysql, s_2_copy.c_str());
					AfxMessageBox(_T("ȡ��ɹ�"));
				}
			}
		}
		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}
}



