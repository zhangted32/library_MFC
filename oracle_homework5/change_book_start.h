#pragma once


// change_book_start �Ի���

class change_book_start : public CDialogEx
{
	DECLARE_DYNAMIC(change_book_start)

public:
	change_book_start(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_book_start();

// �Ի�������
	enum { IDD = IDD_DIALOG8 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	CString GetInfor();
	afx_msg void OnEnChangeEdit9();
	afx_msg void OnBnClickedOk();
};
