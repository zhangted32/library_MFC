#pragma once


// add_press �Ի���

class add_press : public CDialogEx
{
	DECLARE_DYNAMIC(add_press)

public:
	add_press(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~add_press();

// �Ի�������
	enum { IDD = IDD_add_press };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	CString infor_2;
	CString infor_3;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedOk();
};
