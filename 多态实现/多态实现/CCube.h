#pragma once
#include"CStereoShape.h"
class CCube :public CStereoShape
{
public:
	CCube(float newW, float newL, float newH);
	float GetArea() const;
	float GetVolume() const;
	void Set(float ww, float ll, float hh);
private:
	float width;
	float length;
	float height;
};