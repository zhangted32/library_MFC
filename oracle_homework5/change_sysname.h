#pragma once


// change_sysname �Ի���

class change_sysname : public CDialogEx
{
	DECLARE_DYNAMIC(change_sysname)

public:
	change_sysname(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_sysname();

// �Ի�������
	enum { IDD = IDD_change_sysname };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
