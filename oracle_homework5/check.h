#pragma once


// check �Ի���

class check : public CDialogEx
{
	DECLARE_DYNAMIC(check)

public:
	check(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~check();

	bool isbnok = 0;

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
