#pragma once
#include "ShowGCodeView.h"

// CDialogShowGCode �Ի���

class CDialogShowGCode : public CDialog
{
	DECLARE_DYNAMIC(CDialogShowGCode)

public:
	CDialogShowGCode(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialogShowGCode();
private:
	CShowGCodeView *m_pSWGView;
// �Ի�������
	enum { IDD = IDD_DIALOG_SWGCODE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
};
