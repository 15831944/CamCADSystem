// CamCADSystemDoc.cpp : CCamCADSystemDoc ���ʵ��
//

#include "stdafx.h"
#include "CamCADSystem.h"

#include "CamCADSystemDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCamCADSystemDoc

IMPLEMENT_DYNCREATE(CCamCADSystemDoc, CDocument)

BEGIN_MESSAGE_MAP(CCamCADSystemDoc, CDocument)
END_MESSAGE_MAP()


// CCamCADSystemDoc ����/����

CCamCADSystemDoc::CCamCADSystemDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CCamCADSystemDoc::~CCamCADSystemDoc()
{
}

BOOL CCamCADSystemDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCamCADSystemDoc ���л�

void CCamCADSystemDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// CCamCADSystemDoc ���

#ifdef _DEBUG
void CCamCADSystemDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCamCADSystemDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCamCADSystemDoc ����
