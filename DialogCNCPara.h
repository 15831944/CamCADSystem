#pragma once


// CDialogCNCPara �Ի���

class CDialogCNCPara : public CDialog
{
	DECLARE_DYNAMIC(CDialogCNCPara)

public:
	CDialogCNCPara(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialogCNCPara();

// �Ի�������
	enum { IDD = IDD_DIALOG_CNCPARA };
private:
	CString KnifeID;
	CString KnifeFace;
	double Feed;
	int Speed;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedEnterCNCPara();
};
