#pragma once


// change_librarianname �Ի���

class change_librarianname : public CDialogEx
{
	DECLARE_DYNAMIC(change_librarianname)

public:
	change_librarianname(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_librarianname();

// �Ի�������
	enum { IDD = IDD_change_librarianname };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
