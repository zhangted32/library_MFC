// orderadmin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "orderadmin.h"
#include "afxdialogex.h"
#include "aspect_all_h.h"
#include <string>
using namespace std;

// orderadmin �Ի���

IMPLEMENT_DYNAMIC(orderadmin, CDialogEx)

orderadmin::orderadmin(CWnd* pParent /*=NULL*/)
	: CDialogEx(orderadmin::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

orderadmin::~orderadmin()
{
}

void orderadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TREE1, m_tree);
	DDX_Control(pDX, IDC_LIST1, m_list);
}


BEGIN_MESSAGE_MAP(orderadmin, CDialogEx)
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE1, &orderadmin::OnSelchangedorderadminTree1)
	ON_NOTIFY(NM_RCLICK, IDC_LIST1, &orderadmin::OnRclickList1)
END_MESSAGE_MAP()


// orderadmin ��Ϣ�������
BOOL orderadmin::OnInitDialog()
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
	HTREEITEM hSrc_1 = m_tree.InsertItem(_T("�̲Ķ�������"), 0, 0, hRoot);


	m_tree.InsertItem(_T("���ӽ̲Ķ���"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("ɾ���̲Ķ���"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("�޸Ľ̲Ķ���"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("�鿴�̲Ķ���"), 3, 3, hSrc_1);


	HTREEITEM hSrc_2 = m_tree.InsertItem(_T("�����̲Ķ���"), 0, 0, hRoot);

	m_tree.InsertItem(_T("������"), 3, 3, hSrc_2);
	m_tree.InsertItem(_T("δ����"), 3, 3, hSrc_2);



	HTREEITEM hSrc_3 = m_tree.InsertItem(_T("�鿴�̲�"), 0, 0, hRoot);

	m_tree.InsertItem(_T("�鿴�̲�"), 3, 3, hSrc_3);


	HTREEITEM hSrc_4 = m_tree.InsertItem(_T("�޸���Ϣ"), 0, 0, hRoot);


	m_tree.InsertItem(_T("�޸�����"), 3, 3, hSrc_4);
	m_tree.InsertItem(_T("�޸��û���"), 3, 3, hSrc_4);
	return true;
}

void orderadmin::OnSelchangedorderadminTree1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;

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

	HTREEITEM selItem;
	selItem = m_tree.GetSelectedItem();
	CString str;
	str = m_tree.GetItemText(selItem);
	
	if (judge == 4)//Ϊ�̲���������Ա
	{
		if (str == "���ӽ̲Ķ���")
		{
			add_order run;
			run.DoModal();
			str = "";

			CString str;
			//str.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_1, run.infor_2, run.infor_3, run.infor_4,4));
			str += "insert into book_order values (";
			str += "1,'";
			str += run.infor_1;
			str += "','";
			str += run.infor_2;
			str += "','";
			str += run.infor_3;
			str += "','";
			str += run.infor_4;
			str += "','";
			str += run.infor_5;
			str += "',";
			str += run.infor_6;
			str += ",";
			str += run.infor_7;
			str += ",0,'";
			str += run.infor_8;
			str += "')";
			string s_copy = T2A(str);//cstring תstring
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());



			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "ɾ���̲Ķ���")
		{

			del_order run;
			run.DoModal();
			str = "";
			CString str1;
			str += "delete from book_order where id=";
			str += run.infor_1;
			string s_copy = T2A(str);
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());

			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);

		}
		if (str == "�޸Ľ̲Ķ���")
		{

			change_order run;
			run.DoModal();
			str = "";
			/*
			CString str1;
			str += "delete   from book_order where id=";
			str += run.infor_1;

			//str.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_1, run.infor_2, run.infor_3, run.infor_4, 5));
			str1 += "insert into book_order values (";
			str1 += "1,'";
			str1 += run.infor_2;
			str1 += "','";
			str1 += run.infor_3;
			str1 += "','";
			str1 += run.infor_4;
			str1 += "','";
			str1 += run.infor_5;
			str1 += "','";
			str1 += run.infor_6;
			str1 += "',";
			str1 += run.infor_7;
			str1 += ",";
			str1 += run.infor_8;
			str1 += ",0,'";
			str1 += run.infor_9;
			str1 += "')";
			
			string s_copy = T2A(str);
			string s1_copy = T2A(str1);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
				mysql_query(&mysql, s1_copy.c_str());
			}
			*/
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "�鿴�̲Ķ���")
		{
			int nCols = m_list.GetHeaderCtrl()->GetItemCount();
			for (int j = 0; j < nCols; j++)
			{
				m_list.DeleteColumn(0);
			}
			m_list.DeleteAllItems();
			str = "";

			CRect rect;
			// ��ȡ��������б���ͼ�ؼ���λ�úʹ�С    
			m_list.GetClientRect(&rect);

			// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����    
			m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
			mysql_query(&mysql, "select * from book_order ");          //ִ��SQL���
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
		if (str == "������")
		{
			int nCols = m_list.GetHeaderCtrl()->GetItemCount();
			for (int j = 0; j < nCols; j++)
			{
				m_list.DeleteColumn(0);
			}
			m_list.DeleteAllItems();
			str = "";

			CRect rect;
			// ��ȡ��������б���ͼ�ؼ���λ�úʹ�С    
			m_list.GetClientRect(&rect);

			// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����    
			m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
			mysql_query(&mysql, "select * from book_order where book_order_check=1");          //ִ��SQL���
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

		if (str == "δ����")
		{
			int nCols = m_list.GetHeaderCtrl()->GetItemCount();
			for (int j = 0; j < nCols; j++)
			{
				m_list.DeleteColumn(0);
			}
			m_list.DeleteAllItems();
			str = "";

			CRect rect;
			// ��ȡ��������б���ͼ�ؼ���λ�úʹ�С    
			m_list.GetClientRect(&rect);

			// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����    
			m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
			mysql_query(&mysql, "select * from book_order where book_order_check=0");          //ִ��SQL���
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
		if (str == "�޸�����")
		{

			change_orderadminpassword run;
			run.DoModal();
			str = "";

			CString str;
			//str.Format(_T("update user set userpassword='%s' where username='%s' and userpassword='%s'"),
				//run.infor_1, str_start_name, str_start_pwd);
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

			change_orderadminname run;
			run.DoModal();
			str = "";

			CString str;
			//str.Format(_T("update user set username='%s' where username='%s' and userpassword='%s'"), 
			//	run.infor_1, str_start_name, str_start_pwd);
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
}


void orderadmin::OnRclickList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
	mysql_library_init(NULL, 0, 0);
	MYSQL mysql;
	mysql_init(&mysql);
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gb2312");
	if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "lovewho?1314", "test", 0, NULL, CLIENT_MULTI_STATEMENTS))//�������ݿ�
	{
		AfxMessageBox(_T("not to connect mysql"));
		return;
	}
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
	if (pNMListView->iItem != -1)
	{
		int i = pNMListView->iItem;
		if (m_list.GetItemText(i, 8) == "1" || m_list.GetItemText(i, 4) == "1")
		{
			return;
		}
		check run;
		run.DoModal();
		//MessageBox(m_list.GetItemText(i, 0));
		//MessageBox(m_list.GetItemText(i, 4));

		USES_CONVERSION;

		CString str;
		str = "";
		//str.Format(_T("update book_order set book_order_check=1 where id=%d"),m_list.GetItemText(i,0));
		str += "update book_order set book_order_check=1 where id=";
		str += m_list.GetItemText(i, 0);
		string s_copy = T2A(str);
		if (run.isbnok)
		{
			mysql_query(&mysql, s_copy.c_str());
		}
		/*
		int i = pNMListView->iItem;
		int j = pNMListView->iSubItem;
		CString str;
		str.Format(_T("%d,%d"), i, j);
		MessageBox(str);
		MessageBox(m_list.GetItemText(i, j));
		*/
	}

}
