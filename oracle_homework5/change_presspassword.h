#pragma once


// change_presspassword �Ի���

class change_presspassword : public CDialogEx
{
	DECLARE_DYNAMIC(change_presspassword)

public:
	change_presspassword(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_presspassword();

// �Ի�������
	enum { IDD = IDD_change_presspassword };

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
