#pragma once


// change_orderadminname �Ի���

class change_orderadminname : public CDialogEx
{
	DECLARE_DYNAMIC(change_orderadminname)

public:
	change_orderadminname(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_orderadminname();

// �Ի�������
	enum { IDD = IDD_change_orderadminname };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
