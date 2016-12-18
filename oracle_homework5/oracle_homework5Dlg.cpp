
// oracle_homework5Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "oracle_homework5Dlg.h"
#include "afxdialogex.h"
#include "aspect_all_h.h"
#include <string>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

	// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Coracle_homework5Dlg �Ի���



Coracle_homework5Dlg::Coracle_homework5Dlg(CWnd* pParent /*=NULL*/)
: CDialogEx(Coracle_homework5Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

}

void Coracle_homework5Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_list);
	DDX_Control(pDX, IDC_TREE1, m_tree);
}

BEGIN_MESSAGE_MAP(Coracle_homework5Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_LBUTTONDBLCLK()
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE1, &Coracle_homework5Dlg::OnSelchangedTree1)
END_MESSAGE_MAP()


// Coracle_homework5Dlg ��Ϣ�������

void Coracle_homework5Dlg::system_admin()
{
	HTREEITEM hRoot = m_tree.InsertItem(_T("�����б�"), 0, 0);
	m_tree.SetItemState(hRoot, TVIS_BOLD, TVIS_BOLD);

	HTREEITEM hSrc_1 = m_tree.InsertItem(_T("���������Ա"), 0, 0, hRoot);


	m_tree.InsertItem(_T("���ӳ��������Ա"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("ɾ�����������Ա"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("�޸ĳ��������Ա"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("�鿴���������Ա"), 3, 3, hSrc_1);


	HTREEITEM hSrc_2 = m_tree.InsertItem(_T("�̲���������Ա"), 0, 0, hRoot);


	m_tree.InsertItem(_T("���ӽ̲���������Ա"), 3, 3, hSrc_2);
	m_tree.InsertItem(_T("ɾ���̲���������Ա"), 3, 3, hSrc_2);
	m_tree.InsertItem(_T("�޸Ľ̲���������Ա"), 3, 3, hSrc_2);
	m_tree.InsertItem(_T("�鿴�̲���������Ա"), 3, 3, hSrc_2);

	HTREEITEM hSrc_3 = m_tree.InsertItem(_T("�̲Ĺ���Ա"), 0, 0, hRoot);


	m_tree.InsertItem(_T("���ӽ̲Ĺ���Ա"), 3, 3, hSrc_3);
	m_tree.InsertItem(_T("ɾ���̲Ĺ���Ա"), 3, 3, hSrc_3);
	m_tree.InsertItem(_T("�޸Ľ̲Ĺ���Ա"), 3, 3, hSrc_3);
	m_tree.InsertItem(_T("�鿴�̲Ĺ���Ա"), 3, 3, hSrc_3);

	HTREEITEM hSrc_4 = m_tree.InsertItem(_T("��ʦ"), 0, 0, hRoot);


	m_tree.InsertItem(_T("���ӽ�ʦ"), 3, 3, hSrc_4);
	m_tree.InsertItem(_T("ɾ����ʦ"), 3, 3, hSrc_4);
	m_tree.InsertItem(_T("�޸Ľ�ʦ"), 3, 3, hSrc_4);
	m_tree.InsertItem(_T("�鿴��ʦ"), 3, 3, hSrc_4);


	HTREEITEM hSrc_5 = m_tree.InsertItem(_T("�޸���Ϣ"), 0, 0, hRoot);


	m_tree.InsertItem(_T("�޸�����"), 3, 3, hSrc_5);
	m_tree.InsertItem(_T("�޸��û���"), 3, 3, hSrc_5);

}

BOOL Coracle_homework5Dlg::OnInitDialog()
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

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
	
	//m_list.InsertItem(3, _T("C++"));
	//m_list.SetItemText(3, 1, _T("4"));
	//m_list.SetItemText(3, 2, _T("3"));
	//	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE

	
		this->system_admin();
	
	/*
	HICON hIcon[3];      // ͼ��������
	HTREEITEM hRoot;     // ���ĸ��ڵ�ľ��
	HTREEITEM hCataItem; // �ɱ�ʾ��һ����ڵ�ľ��
	HTREEITEM hArtItem;  // �ɱ�ʾ��һ���½ڵ�ľ��

	// ��������ͼ�꣬�������ǵľ�����浽����
	//hIcon[0] = theApp.LoadIcon(IDI_WEB_ICON);
	// hIcon[1] = theApp.LoadIcon(IDI_CATALOG_ICON);
	// hIcon[2] = theApp.LoadIcon(IDI_ARTICLE_ICON);

	// ����ͼ������ CImageList ����
	// m_imageList.Create(32, 32, ILC_COLOR32, 3, 3);
	// ������ͼ����ӵ�ͼ������
	for (int i = 0; i<3; i++)
	{
	// m_imageList.Add(hIcon[i]);
	}

	// Ϊ���οؼ�����ͼ������
	m_tree.SetImageList(NULL, TVSIL_NORMAL);

	// ������ڵ�
	hRoot = m_tree.InsertItem(_T("������"), 0, 0);
	// �ڸ��ڵ��²����ӽڵ�
	hCataItem = m_tree.InsertItem(_T("IT ������"), 1, 1, hRoot, TVI_LAST);
	// Ϊ��IT ���������ڵ���Ӹ��ӵı�����ݣ�����껮���ýڵ�ʱ��ʾ
	m_tree.SetItemData(hCataItem, 1);
	// �ڡ�IT ���������ڵ��²����ӽڵ�
	hArtItem = m_tree.InsertItem(_T("�ٶ����� 1"), 2, 2, hCataItem, TVI_LAST);
	// Ϊ���ٶ����� 1���ڵ���Ӹ��ӵı�����ݣ�����껮���ýڵ�ʱ��ʾ
	m_tree.SetItemData(hArtItem, 2);
	// �ڡ�IT ���������ڵ��²�����һ�ӽڵ�
	hArtItem = m_tree.InsertItem(_T("�ȸ����� 2"), 2, 2, hCataItem, TVI_LAST);
	// Ϊ���ȸ����� 2���ڵ���Ӹ��ӵı�����ݣ�����껮���ýڵ�ʱ��ʾ
	m_tree.SetItemData(hArtItem, 3);
	// �ڸ��ڵ��²���ڶ����ӽڵ�
	hCataItem = m_tree.InsertItem(_T("��������"), 1, 1, hRoot, TVI_LAST);
	// Ϊ����������ڵ���Ӹ��ӵı�����ݣ�����껮���ýڵ�ʱ��ʾ
	m_tree.SetItemData(hCataItem, 4);
	// �ڡ���������ڵ��²����ӽڵ�
	hArtItem = m_tree.InsertItem(_T("�����ֻ����� 1"), 2, 2, hCataItem, TVI_LAST);
	// Ϊ�������ֻ����� 1���ڵ���Ӹ��ӵı�����ݣ�����껮���ýڵ�ʱ��ʾ
	m_tree.SetItemData(hArtItem, 5);
	// �ڡ���������ڵ��²�����һ�ӽڵ�
	hArtItem = m_tree.InsertItem(_T("ƽ��������� 2"), 2, 2, hCataItem, TVI_LAST);
	// Ϊ��ƽ��������� 2���ڵ���Ӹ��ӵı�����ݣ�����껮���ýڵ�ʱ��ʾ
	m_tree.SetItemData(hArtItem, 6);
	// �ڸ��ڵ��²���������ӽڵ�
	hCataItem = m_tree.InsertItem(_T("�������"), 1, 1, hRoot, TVI_LAST);
	// Ϊ������������ڵ���Ӹ��ӵı�����ݣ�����껮���ýڵ�ʱ��ʾ
	m_tree.SetItemData(hCataItem, 7);
	// �ڡ�����������ڵ��²����ӽڵ�
	hArtItem = m_tree.InsertItem(_T("C++�������ϵ�� 1 "), 2, 2, hCataItem, TVI_LAST);
	// Ϊ��C++�������ϵ�� 1���ڵ���Ӹ��ӵı�����ݣ�����껮���ýڵ�ʱ�� ʾ
	m_tree.SetItemData(hArtItem, 8);
	// �ڡ�����������ڵ��²�����һ�ӽڵ�
	hArtItem = m_tree.InsertItem(_T("VS2010/MFC ������� 2 "), 2, 2, hCataItem, TVI_LAST);
	// Ϊ��VS2010/MFC ������� 2���ڵ���Ӹ��ӵı�����ݣ�����껮���ýڵ� ʱ��ʾ
	m_tree.SetItemData(hArtItem, 9);
	// �ڸ��ڵ��²�����ĸ��ӽڵ�
	hCataItem = m_tree.InsertItem(_T("��������"), 1, 1, hRoot, TVI_LAST);
	// Ϊ���������С��ڵ���Ӹ��ӵı�����ݣ�����껮���ýڵ�ʱ��ʾ
	m_tree.SetItemData(hCataItem, 10);
	// �ڡ��������С��ڵ��²����ӽڵ�
	hArtItem = m_tree.InsertItem(_T("������������ 1"), 2, 2, hCataItem, TVI_LAST);
	// Ϊ�������������� 1���ڵ���Ӹ��ӵı�����ݣ�����껮���ýڵ�ʱ��ʾ
	m_tree.SetItemData(hArtItem, 11);
	// �ڡ��������С��ڵ��²�����һ�ӽڵ�
	hArtItem = m_tree.InsertItem(_T("IT Ц�� 2"), 2, 2, hCataItem, TVI_LAST);
	// Ϊ��IT Ц�� 2���ڵ���Ӹ��ӵı�����ݣ�����껮���ýڵ�ʱ��ʾ
	m_tree.SetItemData(hArtItem, 12);
	*/
	return TRUE;
}

void Coracle_homework5Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void Coracle_homework5Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR Coracle_homework5Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void Coracle_homework5Dlg::OnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult)//ϵͳ����Ա��������οؼ���ѡ��
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
	HTREEITEM selItem;
	//���ѡ����
	selItem = m_tree.GetSelectedItem();
	//��ѡ�����ֵת��ΪDWORDֵ��Ҳ����������m_tree.SetItemData�������趨�����ֵ
	/*DWORD data = m_tree.GetItemData(selItem);
	CString inputData;
	inputData.Format("ѡ�����ĿΪ:%d", data);
	AfxMessageBox(inputData);*/

	mysql_library_init(NULL, 0, 0);
	MYSQL mysql;
	mysql_init(&mysql);
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gb2312");
	if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "lovewho?1314", "test", 0, NULL, CLIENT_MULTI_STATEMENTS))//�������ݿ�
	{
		AfxMessageBox(_T("not to connect mysql"));
		return;
	}

	CString str;
	USES_CONVERSION;
	str = m_tree.GetItemText(selItem);
	if (judge == 1)///Ϊϵͳ����Ա
	{
		if (str == "���ӳ��������Ա")
		{
			str = "";
			add_pressadmin run;
			run.DoModal();
			
			

			CString str;
			//str.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.pressadmin_turename, run.pressadmin_name, run.pressadmin_pwd, run.pressadmin_phone,3));
			str += "insert into user values ('" ;
			str += run.pressadmin_turename;
			str += "','";
			str += run.pressadmin_name;
			str += "','";
			str += run.pressadmin_pwd;
			str += "','";
			str += run.pressadmin_phone;
			str += "',";
			str += "3)";
			string s_copy = T2A(str);
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());
			//UpdateData(false);
			//Invalidate();
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "ɾ�����������Ա")
		{
			
			del_pressadmin run;
			run.DoModal();
			str = "";

			CString str_1;
			str_1 += "delete from user where username='";
			str_1 += run.pressname;
			str_1 += "'";
			
			string s_copy = T2A(str_1);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());

			}
			
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);

		}
		if (str == "�޸ĳ��������Ա")
		{
			change_pressadmin run;
			run.DoModal();
			str = "";
			/*

			CString str,str1;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.wanttochange_name,run.wanttochangepwd));
			str += "delete  from user where username='";
			str += run.infor_1;
			str += "'";
			//str1.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_1,run.infor_2,run.infor_3,run.infor_4));
			str1 += "insert into user values ('";
			str1 += run.infor_2;
			str1 += "','";
			str1 += run.infor_3;
			str1 += "','";
			str1 += run.infor_4;
			str1 += "','";
			str1 += run.infor_5;
			str1 += "',";
			str1 += "3)";
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
			str = "";


		}
		if (str == "�鿴���������Ա")
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
			mysql_query(&mysql, "select * from view3");          //ִ��SQL���
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
		if (str == "���ӽ̲���������Ա")
		{
			add_orderadmin run;
			run.DoModal();
			str = "";
			
			CString str;
			//str.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_1, run.infor_2, run.infor_3, run.infor_4,4));
			str += "insert into user values ('";
			str += run.infor_1;
			str += "','";
			str += run.infor_2;
			str += "','";
			str += run.infor_3;
			str += "','";
			str += run.infor_4;
			str += "',";
			str += "4)";
			string s_copy = T2A(str);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);

		}
		if (str == "ɾ���̲���������Ա")
		{

			del_orderadmin run;
			run.DoModal();
			str = "";
			

			CString str;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.infor_2, run.infor_3));
			str += "delete  from user where username='";
			str += run.infor_1;
			str += "'";
			string s_copy = T2A(str);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "�޸Ľ̲���������Ա")
		{

			change_orderadmin run;
			run.DoModal();
			str = "";
			
			/*

			CString str, str1;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.infor_1, run.infor_2));
			str += "delete  from user where username='";
			str += run.infor_1;
			str += "'";

			str1 += "insert into user values ('";
			str1 += run.infor_2;
			str1 += "','";
			str1 += run.infor_3;
			str1 += "','";
			str1 += run.infor_4;
			str1 += "','";
			str1 += run.infor_5;
			str1 += "',";
			str1 += "4)";
			string s_copy = T2A(str);
			string s1_copy = T2A(str1);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
				mysql_query(&mysql, s1_copy.c_str());
			}
			/*/
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
			
		}
		if (str == "�鿴�̲���������Ա")
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
			mysql_query(&mysql, "select * from view4");          //ִ��SQL���
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
		if (str == "���ӽ̲Ĺ���Ա")
		{
			add_librarian run;
			run.DoModal();
			str = "";
			

			CString str;
			//str.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_1, run.infor_2, run.infor_3, run.infor_4,2));
			str += "insert into user values ('";
			str += run.infor_1;
			str += "','";
			str += run.infor_2;
			str += "','";
			str += run.infor_3;
			str += "','";
			str += run.infor_4;
			str += "',";
			str += "2)";

			string s_copy = T2A(str);
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "ɾ���̲Ĺ���Ա")
		{

			del_librarian run;
			run.DoModal();
			str = "";
			

			CString str;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.infor_2, run.infor_3));
			str += "delete  from user where username='";
			str += run.infor_1;
			str += "'";
			string s_copy = T2A(str);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "�޸Ľ̲Ĺ���Ա")
		{

			change_librarian run;
			run.DoModal();
			str = "";
			/*
			CString str, str1;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.infor_1, run.infor_2));
			str += "delete  from user where username='";
			str += run.infor_1;
			str += "'";
			//str1.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_3, run.infor_4, run.infor_5, run.infor_6, 2));
			str1 += "insert into user values ('";
			str1 += run.infor_2;
			str1 += "','";
			str1 += run.infor_3;
			str1 += "','";
			str1 += run.infor_4;
			str1 += "','";
			str1 += run.infor_5;
			str1 += "',";
			str1 += "2)";
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
		if (str == "�鿴�̲Ĺ���Ա")
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
			mysql_query(&mysql, "select * from view2");          //ִ��SQL���
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

		if (str == "���ӽ�ʦ")
		{
			add_teacher run;
			run.DoModal();
			str = "";
			


			CString str;
			//str.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_1, run.infor_2, run.infor_3, run.infor_4, 5));
			str += "insert into user values ('";
			str += run.infor_1;
			str += "','";
			str += run.infor_2;
			str += "','";
			str += run.infor_3;
			str += "','";
			str += run.infor_4;
			str += "',";
			str += "5)";
			string s_copy = T2A(str);
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "ɾ����ʦ")
		{

			del_teacher run;
			run.DoModal();
			str = "";
			

			CString str;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.infor_2, run.infor_3));
			str += "delete  from user where username='";
			str += run.infor_2;
			str += "'";
			string s_copy = T2A(str);
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);

		}
		///�޸�����///ϵͳ����Ա�޸Ľ�ʦ�޷��򿪡�
		if (str == "�޸Ľ�ʦ")
		{

			change_teacher run;
			run.DoModal();
			str = "";
			/*
			CString str, str1;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.infor_1, run.infor_2));
			str += "delete  from user where username='";
			str += run.infor_1;
			str += "'";

			//str1.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_3, run.infor_4, run.infor_5, run.infor_6, 5));
			str1 += "insert into user values ('";
			str1+= run.infor_2;
			str1 += "','";
			str1 += run.infor_3;
			str1 += "','";
			str1 += run.infor_4;
			str1 += "','";
			str1+= run.infor_5;
			str1 += "',";
			str1 += "5)";
			string s_copy = T2A(str);
			string s1_copy = T2A(str1);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
				mysql_query(&mysql, s1_copy.c_str());
			}

			*/
			selItem = m_tree.GetParentItem(selItem);//ѡ����˸��ڵ�
			m_tree.SelectItem(selItem);

		}
		if (str == "�鿴��ʦ")
		{
			int nCols = m_list.GetHeaderCtrl()->GetItemCount();
			for (int j = 0; j < nCols; j++)
			{
				m_list.DeleteColumn(0);
			}
			m_list.DeleteAllItems();//ɾ����

			str = "";
			
			CRect rect;
			// ��ȡ��������б���ͼ�ؼ���λ�úʹ�С    
			m_list.GetClientRect(&rect);

			// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����    
			m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
			mysql_query(&mysql, "select * from view5");          //ִ��SQL���
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
		if (str == "�޸��û���")
		{

			change_sysname run;
			run.DoModal();
			str = "";
		

			CString str;
			//str.Format(_T("update user set username='%s' where username='%s' and userpassword='%s'"),run.infor_1,str_start_name,str_start_pwd);
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
				s_1=T2A( run.infor_1);
				strcpy_s(str_start_name, s_1.size() + 1, s_1.c_str());
				
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);

		}
		if (str == "�޸�����")
		{

			change_syspassword run;
			run.DoModal();
			str = "";
			

			CString str;
			//str.Format(_T("update user set userpassword='%s' where username='%s'and userpassword='%s'"),run.infor_1, str_start_name, str_start_pwd);
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
	}

	return;
}
