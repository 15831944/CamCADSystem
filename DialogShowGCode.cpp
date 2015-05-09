// DialogShowGCode.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CamCADSystem.h"
#include "DialogShowGCode.h"
#include "ShowGCodeView.h"


// CDialogShowGCode �Ի���

IMPLEMENT_DYNAMIC(CDialogShowGCode, CDialog)

CDialogShowGCode::CDialogShowGCode(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogShowGCode::IDD, pParent)
{

}

CDialogShowGCode::~CDialogShowGCode()
{
}

void CDialogShowGCode::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialogShowGCode, CDialog)
END_MESSAGE_MAP()


// CDialogShowGCode ��Ϣ�������

BOOL CDialogShowGCode::OnInitDialog()
{
	CDialog::OnInitDialog();
	UINT TargetCtrlID = IDC_STATIC;    
    CWnd *pWnd = this->GetDlgItem(IDC_STATIC);    
    CRect RectTargetCtrl;    
    pWnd->GetWindowRect(RectTargetCtrl);    
    pWnd->DestroyWindow();    
    this->ScreenToClient(RectTargetCtrl);    
  
    //��Ŀ��λ�ö�̬����CScrollView    
    if (NULL==m_pSWGView)    
    {    
        return FALSE;    
    }   
    m_pSWGView = (CShowGCodeView*)RUNTIME_CLASS(CShowGCodeView)->CreateObject(); //������䲻���٣��еĽ̳������ˣ������  
    m_pSWGView->Create(NULL, NULL, AFX_WS_DEFAULT_VIEW|WS_VSCROLL|WS_HSCROLL, RectTargetCtrl, this, TargetCtrlID);    
    //ʹ��CreateView��������ͼ �����Զ�����OnInitialUpdate��������Ҫ�˹�����OnInitialUpdate�������߷��� WM_INITIALUPDATE��Ϣ  
    m_pSWGView->OnInitialUpdate();  
    // ʹ��CreateView��������ͼ�����Զ���ʾ���Ҽ����Ҫ�˹�����   
    m_pSWGView->ShowWindow(SW_SHOW);    
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}
