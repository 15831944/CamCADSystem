// CamCADSystemDoc.h : CCamCADSystemDoc ��Ľӿ�
//


#pragma once


class CCamCADSystemDoc : public CDocument
{
protected: // �������л�����
	CCamCADSystemDoc();
	DECLARE_DYNCREATE(CCamCADSystemDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CCamCADSystemDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


