#pragma once


// change_syspassword �Ի���

class change_syspassword : public CDialogEx
{
	DECLARE_DYNAMIC(change_syspassword)

public:
	change_syspassword(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_syspassword();

// �Ի�������
	enum { IDD = IDD_change_syspassword };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedOk();
	CString infor_2;
	afx_msg void OnEnChangeEdit3();
};
