#pragma once


// change_teacherpassword �Ի���

class change_teacherpassword : public CDialogEx
{
	DECLARE_DYNAMIC(change_teacherpassword)

public:
	change_teacherpassword(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_teacherpassword();

// �Ի�������
	enum { IDD = IDD_change_teacherpassword };

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
