#pragma once


// add_pressadmin �Ի���

class add_pressadmin : public CDialogEx
{
	DECLARE_DYNAMIC(add_pressadmin)

public:
	add_pressadmin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~add_pressadmin();

// �Ի�������
	enum { IDD = IDD_add_pressadmin };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString pressadmin_turename;
	CString pressadmin_name;
	CString pressadmin_pwd;
	CString pressadmin_phone;
	bool isbnok = false;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnBnClickedOk();
};
