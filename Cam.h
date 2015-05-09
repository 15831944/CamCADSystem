#pragma once
//#include "MainFrm.h"
//#include "CamCADSystemDoc.h"
//#include "CamCADSystemView.h"
#include "GCode.h"
class CCam
{
public:
	CCam(void);
	~CCam(void);
private:
	// �Ƴ��˶���
	double m_dDelta0;
	// Զ��ֹ��
	double m_dDelta01;
	// �س��˶���
	double m_dDelta1;
	// ����ֹ��
	double m_dDelta02;
	// �����г�
	double m_dh;
	// ƫ�ľ�
	double m_de;
	// ��Բ�뾶
	double m_dr0;
	// ���Ӱ뾶
	double m_drr0;
	//�Ƴ��˶��β���
	CData *t;
	//�س��˶��β���
	CData *h;
	//�Ƴ̶�tֵ
	CData *t2;
	//�س��˶��β���
	CData *h2;
	//�Ƴ̶�tֵ
	double tt[8];
	//�س��˶���tֵ
	double th[8];
	//�˶�����
	CString m_sMotion;
//	static CString Motion[3]={"����","�ȼ���","����"}; 
	CString Motion[3];
	double m_dAllowAlpha;
public:
	// ����Ƴ��˶���
	double GetDelta0(void);
	// ���Զ��ֹ��
	double GetDelta01(void);
	// ��ûس��˶���
	double GetDelta1(void);
	// ��ý���ֹ��
	double GetDelta02(void);
	// ���ƫ�ľ�
	double Gete(void);
	// ��û�Բ�뾶
	double Getr0(void);
	// ��ù����г�
	double Geth(void);
	// ��ù��Ӱ뾶
	double Getrr0(void);
	// �������
	void SetParameter(double Delta0, double Delta1,
		double Delta01, double Delta02,
		double h, double r0,
		double e, double rr0,
		int nIndexMotion, int nIndexMotionReturn,
		CArray<double>* t,CArray<double>* hh,int nIndexFollower);
	// �������������
	void CalcPoint(void);
public:

	double px[NUM];		// �����������
	double py[NUM];		// ������������

	double mpx[NUM+3];		//���Ƶ������
	double mpy[NUM+3];		//���Ƶ�������

	
	double px2[COUNT];		// �����������
	double py2[COUNT];		// ������������

	double mpx2[COUNT+3];		//���Ƶ������
	double mpy2[COUNT+3];		//���Ƶ�������

	
	
	CString m_sKnifeID;
	CString m_sKnifeFace;
	double m_dFeed;
	int m_nSpeed;
	

public:
	// �������
	void CalcParameter(void);
public:
	// �г�
	double m_ds[NUM];
	double m_ds2[COUNT];
	//ѹ����
	double m_dPreAngle[COUNT];
	CGCode* gcode;
public:
	// ������Ƶ�����
	void CalcCtrlPoint(void);
private:
	int m_nIndexMotion;
	int m_nIndexMotionReturn;
	int m_nIndexFollower;

	
	bool m_bDataRise;
	bool m_bDataReturn;
	bool m_bData2Rise;
	bool m_bData2Return;
	bool m_bGCode;

public:
	// ʹ������B�������߻���͹��
	void DrawCam3BSpline(CDC* pDC, double * mpx, double * mpy, int nCount,CRect r1);
	// ʹ��ֱ�߻���͹������
	void DrawCamLine(CDC* pDC, double* px, double* py, int nCount, CRect r1, int mode);
	void CalcParameter2(void);
	void CalcPoint2(void);
	void CalcCtrlPoint2(void);
	
	// �������ؼӹ�����
	void SetParameter2(CString KnifeID, CString KnifeFace, double Feed, int Speed);
	// ����ѹ����
	void CalcPreAngle(void);
	void ShowPresAngle(CDC* pDC,CRect r1);
	// ��������ѹ����
	void SetParameter3(double AllowAlpha);
	void CreateGCode(void);
};
