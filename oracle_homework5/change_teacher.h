#pragma once


// change_teacher �Ի���

class change_teacher : public CDialogEx
{
	DECLARE_DYNAMIC(change_teacher)

public:
	change_teacher(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_teacher();

// �Ի�������
	enum { IDD = IDD_change_teacher };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	CString infor_2,infor_21;
	CString infor_3,infor_31;
	CString infor_4,infor_41;
	CString infor_5,infor_51;
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit6();
	bool isbnok = 0;
	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
};
