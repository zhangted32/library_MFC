#pragma once


// change_pressname �Ի���

class change_pressname : public CDialogEx
{
	DECLARE_DYNAMIC(change_pressname)

public:
	change_pressname(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_pressname();

// �Ի�������
	enum { IDD = IDD_change_pressname };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
