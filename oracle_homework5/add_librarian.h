#pragma once


// add_librarian �Ի���

class add_librarian : public CDialogEx
{
	DECLARE_DYNAMIC(add_librarian)

public:
	add_librarian(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~add_librarian();

// �Ի�������
	enum { IDD = IDD_add_librarian };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	CString infor_2;
	CString infor_3;
	CString infor_4;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedOk();
};
