#pragma once


// change_orderadminpassword �Ի���

class change_orderadminpassword : public CDialogEx
{
	DECLARE_DYNAMIC(change_orderadminpassword)

public:
	change_orderadminpassword(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_orderadminpassword();

// �Ի�������
	enum { IDD = IDD_change_orderadminpassword };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	afx_msg void OnEnChangeEdit2();
	bool isbnok = 0;
	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeEdit3();
	CString infor_2;
};
