#pragma once


// CDialogCheckPreAngle �Ի���

class CDialogCheckPreAngle : public CDialog
{
	DECLARE_DYNAMIC(CDialogCheckPreAngle)

public:
	CDialogCheckPreAngle(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialogCheckPreAngle();

// �Ի�������
	enum { IDD = IDD_DIALOG_CHECK };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	// ����ѹ����
	double AllowAlpha;
	// ������
	CString CheckResult;
	afx_msg void OnBnClickedButtonCheck();
};
