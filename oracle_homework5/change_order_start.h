#pragma once


// change_order_start �Ի���

class change_order_start : public CDialogEx
{
	DECLARE_DYNAMIC(change_order_start)

public:
	change_order_start(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_order_start();

// �Ի�������
	enum { IDD = IDD_DIALOG10 };

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
