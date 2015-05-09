#pragma once
#include "afxwin.h"


// CDialogBasicPara �Ի���

class CDialogBasicPara : public CDialog
{
	DECLARE_DYNAMIC(CDialogBasicPara)

public:
	CDialogBasicPara(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialogBasicPara();

// �Ի�������
	enum { IDD = IDD_DIALOG_ENTPARA };
	CArray<double> t;
	CArray<double> hh;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
	public:
	double Delta0;
	double Delta01;
	// �س��˶���
	double Delta1;
	// ����ֹ��
	double Delta02;
	// �����г�
	double h;
	// ƫ�ľ�
	double e;
	// ��Բ�뾶
	double r0;
	// ���Ӱ뾶
	double rr0;
	afx_msg void OnBnClickedOk();
	CComboBox m_cMotion;
	CComboBox m_cFollower;
	int nIndexMotion;	//ѡ�е��˶���������
	int nIndexMotionReturn;	//ѡ�е��˶���������
	int nIndexFollower;	//ѡ�еĴӶ�������
	int nCheckStyle;
	afx_msg void OnCbnSelchangeComboMotion();
	afx_msg void OnCbnSelchangeComboFollower();
	virtual BOOL OnInitDialog();
	// ���Ӱ뾶
	CEdit m_cRr0;
	CStatic m_cR;
	CButton m_bRiseReturn;
	CComboBox m_cReturn;
	CStatic m_sReturn;
	afx_msg void OnCbnSelchangeReturn();
	afx_msg void OnBnClickedCheck1();
};
