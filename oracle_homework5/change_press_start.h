#pragma once


// change_press_start �Ի���

class change_press_start : public CDialogEx
{
	DECLARE_DYNAMIC(change_press_start)

public:
	change_press_start(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_press_start();

// �Ի�������
	enum { IDD = IDD_DIALOG9 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	CString GetInfor();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedOk();
};
