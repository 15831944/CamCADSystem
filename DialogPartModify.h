#include "PartModifyView.h"
#pragma once


// CDialogPartModify �Ի���

class CDialogPartModify : public CDialog
{
	DECLARE_DYNAMIC(CDialogPartModify)

public:
	CDialogPartModify(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialogPartModify();

private:
	CPartModifyView *m_pPtModView;
	double fold;
// �Ի�������
	enum { IDD = IDD_DIALOG_MODIFY };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonPartModify();
	afx_msg void OnBnClickedSweep();
	virtual BOOL OnInitDialog();
};
