#pragma once


// del_pressadmin �Ի���

class del_pressadmin : public CDialogEx
{
	DECLARE_DYNAMIC(del_pressadmin)

public:
	del_pressadmin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~del_pressadmin();

// �Ի�������
	enum { IDD = IDD_del_pressadmin };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString pressname;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedOk();
};
