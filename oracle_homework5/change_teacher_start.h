#pragma once


// change_teacher_start �Ի���

class change_teacher_start : public CDialogEx
{
	DECLARE_DYNAMIC(change_teacher_start)

public:
	change_teacher_start(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_teacher_start();

// �Ի�������
	enum { IDD = IDD_DIALOG7 };

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
