#pragma once
#include "afxcmn.h"


// pressadmin �Ի���

class pressadmin : public CDialogEx
{
	DECLARE_DYNAMIC(pressadmin)

public:
	pressadmin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~pressadmin();

// �Ի�������
	enum { IDD = IDD_pressadmin };

protected:
	HICON m_hIcon;
	virtual BOOL OnInitDialog();

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTvnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult);
	CTreeCtrl m_tree;
	CListCtrl m_list;
};
