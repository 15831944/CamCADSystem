// DialogPartModify.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CamCADSystem.h"
#include "DialogPartModify.h"
#include "PartModifyView.h"


// CDialogPartModify �Ի���

IMPLEMENT_DYNAMIC(CDialogPartModify, CDialog)

CDialogPartModify::CDialogPartModify(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogPartModify::IDD, pParent)
	, fold(3)
{

}

CDialogPartModify::~CDialogPartModify()
{
}

void CDialogPartModify::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, fold);
	DDV_MinMaxDouble(pDX, fold, 0, 100);
}


BEGIN_MESSAGE_MAP(CDialogPartModify, CDialog)
	ON_BN_CLICKED(IDC_BUTTON2, &CDialogPartModify::OnBnClickedButtonPartModify)
	ON_BN_CLICKED(1002, &CDialogPartModify::OnBnClickedSweep)
END_MESSAGE_MAP()


// CDialogPartModify ��Ϣ�������

void CDialogPartModify::OnBnClickedButtonPartModify()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	Invalidate();
	UpdateWindow();
	m_pPtModView->FOLD=fold;
	m_pPtModView->ConductPartModify();
}

void CDialogPartModify::OnBnClickedSweep()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pPtModView->Invalidate();
	m_pPtModView->UpdateWindow();
}

BOOL CDialogPartModify::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	UINT TargetCtrlID = IDC_STATIC;    
    CWnd *pWnd = this->GetDlgItem(IDC_STATIC);    
    CRect RectTargetCtrl;    
    pWnd->GetWindowRect(RectTargetCtrl);    
    pWnd->DestroyWindow();    
    this->ScreenToClient(RectTargetCtrl);    
  
    //��Ŀ��λ�ö�̬����CScrollView    
    if (NULL==m_pPtModView)    
    {    
        return FALSE;    
    }   
    m_pPtModView = (CPartModifyView*)RUNTIME_CLASS(CPartModifyView)->CreateObject(); //������䲻���٣��еĽ̳������ˣ������  
    m_pPtModView->Create(NULL, NULL, AFX_WS_DEFAULT_VIEW|WS_VSCROLL|WS_HSCROLL, RectTargetCtrl, this, TargetCtrlID);    
    //ʹ��CreateView��������ͼ �����Զ�����OnInitialUpdate��������Ҫ�˹�����OnInitialUpdate�������߷��� WM_INITIALUPDATE��Ϣ  
    m_pPtModView->OnInitialUpdate();  
    // ʹ��CreateView��������ͼ�����Զ���ʾ���Ҽ����Ҫ�˹�����   
    m_pPtModView->ShowWindow(SW_SHOW);    
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}
