#pragma once


// AddBookShop �Ի���

class AddBookShop : public CDialogEx
{
	DECLARE_DYNAMIC(AddBookShop)

public:
	AddBookShop(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~AddBookShop();

// �Ի�������
	enum { IDD = IDD_addbookshop };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
