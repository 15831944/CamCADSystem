#pragma once

class CData
{
public:
	CData(double m_dt[8],double m_dDelta,double m_dh);
	~CData(void);
	double t[8];
	double f[7];
	double a[2];
	double b[7];
	double c[7];
	double delta;
	double h;
	double *s;
	double *v;
	// �������
	void CalcParameter(void);
	// �����г����ٶ�
	void CalcShifting(void);
};
