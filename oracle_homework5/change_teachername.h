#pragma once


// change_teachername �Ի���

class change_teachername : public CDialogEx
{
	DECLARE_DYNAMIC(change_teachername)

public:
	change_teachername(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_teachername();

// �Ի�������
	enum { IDD = IDD_change_teachername };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
