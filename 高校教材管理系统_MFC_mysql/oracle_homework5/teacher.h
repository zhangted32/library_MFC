#pragma once
#include "afxcmn.h"


// teacher �Ի���

class teacher : public CDialogEx
{
	DECLARE_DYNAMIC(teacher)

public:
	teacher(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~teacher();

// �Ի�������
	enum { IDD = IDD_teacher };

protected:


	HICON m_hIcon;
	virtual BOOL OnInitDialog();



	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSelchangedteacherTree1(NMHDR *pNMHDR, LRESULT *pResult);
	CTreeCtrl m_tree;
	
	CListCtrl m_list;
};
