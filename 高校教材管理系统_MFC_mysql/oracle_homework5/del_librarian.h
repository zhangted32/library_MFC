#pragma once


// del_librarian �Ի���

class del_librarian : public CDialogEx
{
	DECLARE_DYNAMIC(del_librarian)

public:
	del_librarian(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~del_librarian();

// �Ի�������
	enum { IDD = IDD_del_librarian };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
