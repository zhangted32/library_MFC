#pragma once


// del_book �Ի���

class del_book : public CDialogEx
{
	DECLARE_DYNAMIC(del_book)

public:
	del_book(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~del_book();

// �Ի�������
	enum { IDD = IDD_del_book };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	afx_msg void OnEnChangeEdit1();
	bool isbnok = 0;
	afx_msg void OnBnClickedOk();
};
