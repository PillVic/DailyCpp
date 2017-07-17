#pragma once
#include"CStereoShape.h"

class CSphere :public CStereoShape
{
public:
	CSphere(float newR);
	void SetR(float rr);
	float GetArea() const;
	float GetVolume() const;
private:
	float radius;
};