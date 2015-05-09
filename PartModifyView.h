#pragma once
#include "Cam.h"


// CPartModifyView ��ͼ

class CPartModifyView : public CScrollView
{
	DECLARE_DYNCREATE(CPartModifyView)

protected:
	CPartModifyView();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CPartModifyView();
public:
	CPoint m_pPre;
	int m_nCurPtNum;
	int m_nPtNum;
	bool m_bEnterRubber;
	bool m_bIsSelected;
	bool m_bIsSetCross;
	HCURSOR m_hCursor;
//	CPoint m_pPt[4];
	int nBuffer[256];
	int nPreBuffer[256];
	CRect r;
	double FOLD;
public:
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

public:
	virtual void OnDraw(CDC* pDC);      // ��д�Ի��Ƹ���ͼ
	virtual void OnInitialUpdate();     // �����ĵ�һ��

	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnNcDestroy();
protected:
	virtual void PostNcDestroy();
public:
	afx_msg void OnDestroy();
protected:
	virtual void OnActivateFrame(UINT nState, CFrameWnd* pDeactivateFrame);
public:
	afx_msg int OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
//	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);

	void DrawBSpline(CDC* pDC, int nBuffer[], int n);
	// ��Ƥ����������
	void DrawRubber(CPoint point);
	int PointIsSelected(CPoint point);

	bool PointIsSelected2(CPoint point);
	
	void CalBuffer(CCam& cam, CRect r1, int n);
	
	// ���оֲ��޸�
	void ConductPartModify(void);
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
};


