#pragma once


// change_pressadmin_start �Ի���

class change_pressadmin_start : public CDialogEx
{
	DECLARE_DYNAMIC(change_pressadmin_start)

public:
	change_pressadmin_start(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_pressadmin_start();

// �Ի�������
	enum { IDD = IDD_change_pressadmin_start };

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
