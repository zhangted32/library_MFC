#pragma once
#include "afxcmn.h"


// orderadmin �Ի���

class orderadmin : public CDialogEx
{
	DECLARE_DYNAMIC(orderadmin)

public:
	orderadmin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~orderadmin();

// �Ի�������
	enum { IDD = IDD_orderadmin };

protected:

	HICON m_hIcon;
	virtual BOOL OnInitDialog();


	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CTreeCtrl m_tree;
	afx_msg void OnSelchangedorderadminTree1(NMHDR *pNMHDR, LRESULT *pResult);
	CListCtrl m_list;
	afx_msg void OnRclickList1(NMHDR *pNMHDR, LRESULT *pResult);
};
