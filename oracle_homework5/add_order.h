#pragma once


// add_order �Ի���

class add_order : public CDialogEx
{
	DECLARE_DYNAMIC(add_order)

public:
	add_order(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~add_order();

// �Ի�������
	enum { IDD = IDD_add_order };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	
	
	afx_msg void OnBnClickedOk();
	CString infor_1;
	CString infor_2;
	CString infor_3;
	CString infor_4;
	CString infor_5;
	CString infor_6;
	CString infor_7;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnEnChangeEdit7();
	afx_msg void OnEnChangeEdit9();
	afx_msg void OnEnChangeEdit10();
	bool isbnok = 0;
	CString infor_8;
	afx_msg void OnEnChangeEdit11();
};
