#pragma once


// change_orderadmin_start �Ի���

class change_orderadmin_start : public CDialogEx
{
	DECLARE_DYNAMIC(change_orderadmin_start)

public:
	change_orderadmin_start(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_orderadmin_start();

// �Ի�������
	enum { IDD = IDD_DIALOG5 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	CString Getinfor();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
