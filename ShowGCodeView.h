#pragma once



// CShowGCodeView ��ͼ

class CShowGCodeView : public CScrollView
{
	DECLARE_DYNCREATE(CShowGCodeView)

protected:
	CShowGCodeView();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CShowGCodeView();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

public:
	virtual void OnDraw(CDC* pDC);      // ��д�Ի��Ƹ���ͼ
//	virtual void OnInitialUpdate();     // �����ĵ�һ��

	DECLARE_MESSAGE_MAP()
protected:
	virtual void OnUpdate(CView* /*pSender*/, LPARAM /*lHint*/, CObject* /*pHint*/);
public:
	afx_msg void OnDestroy();
	afx_msg int OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);
protected:
	virtual void OnActivateFrame(UINT nState, CFrameWnd* pDeactivateFrame);
	virtual void PostNcDestroy();
};


