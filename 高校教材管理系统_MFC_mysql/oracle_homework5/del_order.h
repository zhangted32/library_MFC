#pragma once


// del_order �Ի���

class del_order : public CDialogEx
{
	DECLARE_DYNAMIC(del_order)

public:
	del_order(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~del_order();

// �Ի�������
	enum { IDD = IDD_del_order };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
