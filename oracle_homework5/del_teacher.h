#pragma once


// del_teacher �Ի���

class del_teacher : public CDialogEx
{
	DECLARE_DYNAMIC(del_teacher)

public:
	del_teacher(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~del_teacher();

// �Ի�������
	enum { IDD = IDD_del_teacher };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_2;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedOk();
};
