// ShowGCodeView.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CamCADSystem.h"
#include "ShowGCodeView.h"

#include "MainFrm.h"
#include "CamCADSystemDoc.h"
#include "CamCADSystemView.h"


// CShowGCodeView

IMPLEMENT_DYNCREATE(CShowGCodeView, CScrollView)

CShowGCodeView::CShowGCodeView()
{

}

CShowGCodeView::~CShowGCodeView()
{
}


BEGIN_MESSAGE_MAP(CShowGCodeView, CScrollView)
	ON_WM_DESTROY()
	ON_WM_MOUSEACTIVATE()
END_MESSAGE_MAP()


// CShowGCodeView ��ͼ

//void CShowGCodeView::OnInitialUpdate()
//{
//	CScrollView::OnInitialUpdate();
//
//	CSize sizeTotal;
//	// TODO: �������ͼ�ĺϼƴ�С
//	sizeTotal.cx = sizeTotal.cy = 100;
//	SetScrollSizes(MM_TEXT, sizeTotal);
//}

void CShowGCodeView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: �ڴ���ӻ��ƴ���
	CMainFrame*   pFrame=(CMainFrame*)AfxGetMainWnd();   
    CCamCADSystemView* pView = (CCamCADSystemView*)pFrame->GetActiveView();
	TEXTMETRIC tm;
	pDC->GetTextMetrics(&tm);
	CString *GCode=new CString[pView->cam.gcode->GetGCodeLength()];
		pView->cam.gcode->GetGCode(GCode);
	for(int i=0;i<2*(pView->cam.GetDelta0()+pView->cam.GetDelta1())+8;i++)
		pDC->TextOutW(0,(tm.tmHeight+tm.tmExternalLeading)*i,GCode[i]);
	delete[] GCode;
}


// CShowGCodeView ���

#ifdef _DEBUG
void CShowGCodeView::AssertValid() const
{
	CScrollView::AssertValid();
}

#ifndef _WIN32_WCE
void CShowGCodeView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}
#endif
#endif //_DEBUG


// CShowGCodeView ��Ϣ�������

void CShowGCodeView::OnUpdate(CView* /*pSender*/, LPARAM /*lHint*/, CObject* /*pHint*/)
{
	// TODO: �ڴ����ר�ô����/����û���
	CDC *pDC=GetDC();
	CMainFrame*   pFrame=(CMainFrame*)AfxGetMainWnd();   
    CCamCADSystemView* pView = (CCamCADSystemView*)pFrame->GetActiveView();
	TEXTMETRIC tm;
	pDC->GetTextMetrics(&tm);
	CSize sz;
	sz.cx=100;
	sz.cy=(int)(2*(pView->cam.GetDelta0()+pView->cam.GetDelta1())+11)*(tm.tmHeight+tm.tmExternalLeading);
	SetScrollSizes(MM_TEXT, sz);
//	ScrollToPosition(CPoint(0,0));
	ReleaseDC(pDC);
}

void CShowGCodeView::OnDestroy()
{
	CWnd::OnDestroy();

	// TODO: �ڴ˴������Ϣ����������
}

int CShowGCodeView::OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	return CWnd::OnMouseActivate(pDesktopWnd, nHitTest, message);
}

void CShowGCodeView::OnActivateFrame(UINT nState, CFrameWnd* pDeactivateFrame)
{
	// TODO: �ڴ����ר�ô����/����û���

//	CWnd::OnActivateFrame(nState, pDeactivateFrame);
}

void CShowGCodeView::PostNcDestroy()
{
	// TODO: �ڴ����ר�ô����/����û���

	CWnd::PostNcDestroy();
}
