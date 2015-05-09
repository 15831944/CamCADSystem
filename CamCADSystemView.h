// CamCADSystemView.h : CCamCADSystemView ��Ľӿ�
//
#include"Cam.h"

#pragma once


class CCamCADSystemView : public CView
{
protected: // �������л�����
	CCamCADSystemView();
	DECLARE_DYNCREATE(CCamCADSystemView)

// ����
public:
	CCamCADSystemDoc* GetDocument() const;

// ����
public:
	CCam cam;	//͹����

private:
	bool m_bIsEnterModify;
	bool m_bIsDraw;
	CArray<double> t;
	CArray<double> h;
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CCamCADSystemView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnterBasicPara();
	afx_msg void OnDrawCam();
	afx_msg void OnPartModify();
	afx_msg void OnCreateGCode();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	bool IsPointSelected(CPoint point);
	afx_msg void OnDrawMotionLaw();


	afx_msg void OnCheckPreAngle();
	// �����˶����ɵ�Tֵ
	void CalMotionLaw(int nIndexMotion,
					int nIndexMotionReturn,
					int CheckStyle);
};

#ifndef _DEBUG  // CamCADSystemView.cpp �еĵ��԰汾
inline CCamCADSystemDoc* CCamCADSystemView::GetDocument() const
   { return reinterpret_cast<CCamCADSystemDoc*>(m_pDocument); }
#endif

