#pragma once


// change_librarian_start �Ի���

class change_librarian_start : public CDialogEx
{
	DECLARE_DYNAMIC(change_librarian_start)

public:
	change_librarian_start(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_librarian_start();

// �Ի�������
	enum { IDD = IDD_DIALOG6 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	CString GetInfor();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
