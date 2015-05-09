// DialogCheckPreAngle.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CamCADSystem.h"
#include "DialogCheckPreAngle.h"
#include "MainFrm.h"
#include "CamCADSystemDoc.h"
#include "CamCADSystemView.h"

// CDialogCheckPreAngle �Ի���

IMPLEMENT_DYNAMIC(CDialogCheckPreAngle, CDialog)

CDialogCheckPreAngle::CDialogCheckPreAngle(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogCheckPreAngle::IDD, pParent)
	, AllowAlpha(30)
	, CheckResult(_T(""))
{

}

CDialogCheckPreAngle::~CDialogCheckPreAngle()
{
}

void CDialogCheckPreAngle::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_ENTER, AllowAlpha);
	DDX_Text(pDX, IDC_EDIT_SHOW, CheckResult);
}


BEGIN_MESSAGE_MAP(CDialogCheckPreAngle, CDialog)
	ON_BN_CLICKED(IDC_BUTTON_CHECK, &CDialogCheckPreAngle::OnBnClickedButtonCheck)
END_MESSAGE_MAP()


// CDialogCheckPreAngle ��Ϣ�������

void CDialogCheckPreAngle::OnBnClickedButtonCheck()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData();
	CMainFrame*   pFrame=(CMainFrame*)AfxGetMainWnd();   
    CCamCADSystemView* pView = (CCamCADSystemView*)pFrame->GetActiveView();
	pView->cam.SetParameter3(AllowAlpha);
	double max=pView->cam.m_dPreAngle[0];
	for (int i=1;i<COUNT;i++)
		if(pView->cam.m_dPreAngle[i]>max)
			max=pView->cam.m_dPreAngle[i];
	if (max<AllowAlpha)
		CheckResult.Format(_T("ѹ�������ֵΪ��%.2f��С��%.2f��У��ͨ��"),max,AllowAlpha);
	UpdateData(FALSE);


}
