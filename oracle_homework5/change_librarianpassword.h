#pragma once


// change_librarianpassword �Ի���

class change_librarianpassword : public CDialogEx
{
	DECLARE_DYNAMIC(change_librarianpassword)

public:
	change_librarianpassword(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_librarianpassword();

// �Ի�������
	enum { IDD = IDD_change_librarianpassword };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
	CString infor_2;
	afx_msg void OnEnChangeEdit2();
};
