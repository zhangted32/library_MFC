#pragma once


// teacher_order_book �Ի���

class teacher_order_book : public CDialogEx
{
	DECLARE_DYNAMIC(teacher_order_book)

public:
	teacher_order_book(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~teacher_order_book();

// �Ի�������
	enum { IDD = IDD_order_book };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_7;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit9();
	afx_msg void OnEnChangeEdit1();
	CString infor_1;
	CString infor_2;
	CString infor_3;
	CString infor_4;
	CString infor_5;
	CString infor_6;
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnEnChangeEdit7();
	afx_msg void OnEnChangeEdit10();
	afx_msg void OnBnClickedOk();
};
