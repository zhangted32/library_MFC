#pragma once


// del_orderadmin �Ի���

class del_orderadmin : public CDialogEx
{
	DECLARE_DYNAMIC(del_orderadmin)

public:
	del_orderadmin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~del_orderadmin();

// �Ի�������
	enum { IDD = IDD_del_orderadmin };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
