#pragma once


// del_press �Ի���

class del_press : public CDialogEx
{
	DECLARE_DYNAMIC(del_press)

public:
	del_press(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~del_press();

// �Ի�������
	enum { IDD = IDD_del_press };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	afx_msg void OnEnChangeEdit1();
	bool isbnok = 0;
	afx_msg void OnBnClickedOk();
};
