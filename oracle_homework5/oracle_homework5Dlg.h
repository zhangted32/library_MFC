
// oracle_homework5Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"


// Coracle_homework5Dlg �Ի���
class Coracle_homework5Dlg : public CDialogEx
{
// ����
public:
	Coracle_homework5Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_ORACLE_HOMEWORK5_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

	void system_admin();//ϵͳ����Ա 1
	void system_book();//�̲Ĺ���Ա  2
	void system_bookshop();//���������Ա  3
	void system_buy();//�̲���������Ա 4
	void teacher();//��ʦ  5

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_list;
	CTreeCtrl m_tree;
	afx_msg void OnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult);//ϵͳ����Ա��������οؼ���ѡ��
};
