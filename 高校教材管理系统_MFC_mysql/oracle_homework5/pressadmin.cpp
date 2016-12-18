// pressadmin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "pressadmin.h"
#include "afxdialogex.h"
#include "aspect_all_h.h"
#include <string>
using namespace std;

// pressadmin �Ի���

IMPLEMENT_DYNAMIC(pressadmin, CDialogEx)

pressadmin::pressadmin(CWnd* pParent /*=NULL*/)
	: CDialogEx(pressadmin::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

pressadmin::~pressadmin()
{
}

void pressadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TREE1, m_tree);
	DDX_Control(pDX, IDC_LIST1, m_list);
}


BEGIN_MESSAGE_MAP(pressadmin, CDialogEx)
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE1, &pressadmin::OnTvnSelchangedTree1)
END_MESSAGE_MAP()


// pressadmin ��Ϣ�������


void pressadmin::OnTvnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult)//���������Ա���οؼ�
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



	HTREEITEM selItem;
	selItem = m_tree.GetSelectedItem();
	CString str;
	str = m_tree.GetItemText(selItem);
	USES_CONVERSION;
	
	if (judge == 3)//Ϊ���������Ա
	{
		if (str == "���ӳ�����")
		{
			add_press run;
			run.DoModal();
			str = "";

			CString str;
			//str.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.pressadmin_turename, run.pressadmin_name, run.pressadmin_pwd, run.pressadmin_phone,3));
			str += "insert into press values ('";
			str +=  run.infor_1;
			str += "','";
			str += run.infor_2;
			str += "','";
			str += run.infor_3;
			str += "')";
			string s_copy = T2A(str);
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());

			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "ɾ��������")
		{

			del_press run;
			run.DoModal();
			str = "";

			CString str;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'",run.pressadmin_name,run.pressadmin_pwd));
			str += "delete  from press where p_name='";
			str += run.infor_1;
			str += "'";

			string s_copy = T2A(str);
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());

			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "�޸ĳ�����")
		{

			change_press run;
			run.DoModal();
			str = "";
			/*
			CString str, str1;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.wanttochange_name,run.wanttochangepwd));
			str += "delete  from press where pressname='";
			str += run.infor_1;
			str += "'";

			//str1.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_1,run.infor_2,run.infor_3,run.infor_4));
			str1 += "insert into press values ('";
			str1 += run.infor_2;
			str1 += "','";
			str1 += run.infor_3;
			str1 += "','";
			str1 += run.infor_4;
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
		if (str == "�鿴������")
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
			mysql_query(&mysql, "select * from press");          //ִ��SQL���
			//mysql_query(&mysql, "insert into press values('�������ӿƼ���ѧ������', '789987', '����') ");
			MYSQL_RES *result = mysql_store_result(&mysql);
			int filedcount = mysql_num_fields(result);//��ȡ�ֶ���
			MYSQL_ROW row = NULL;//��¼
			MYSQL_FIELD * filed = NULL;//�ֶ�
			static int row_judge = 0;

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
			row_judge = 0;
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "�޸�����")
		{

			change_presspassword run;
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

			change_pressname run;
			run.DoModal();
			str = "";

			CString str;
			//str.Format(_T("update user set userpassword='%s' where username='%s' and userpassword='%s'"), run.infor_1, str_start_name, str_start_pwd);
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
	
}

BOOL pressadmin::OnInitDialog()
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
	HTREEITEM hSrc_1 = m_tree.InsertItem(_T("���������"), 0, 0, hRoot);


	m_tree.InsertItem(_T("���ӳ�����"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("ɾ��������"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("�޸ĳ�����"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("�鿴������"), 3, 3, hSrc_1);


	HTREEITEM hSrc_2 = m_tree.InsertItem(_T("�޸���Ϣ"), 0, 0, hRoot);


	m_tree.InsertItem(_T("�޸�����"), 3, 3, hSrc_2);
	m_tree.InsertItem(_T("�޸��û���"), 3, 3, hSrc_2);
	return true;
}
