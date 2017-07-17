#include"CRectangle.h"
#include"CPoint.h"
#include<cmath>

using namespace std;

CRectangle::CRectangle(const CPoint& newLD, const CPoint & newRu)  
	:ld(newLD),ru(newRu) {}
void CRectangle::SetLPoint(const CPoint &p) {
	ld.SetX(p.GetX());
	ld.SetY(p.GetY());
}
void CRectangle::SetRPoint(const CPoint &p) {
	ru.SetX(p.GetX());
	ru.SetY(p.GetY());
}
int CRectangle::GetPerimeter()const {
	float length = ru.GetX() - ld.GetX();
	float height = ru.GetY() - ld.GetY();
	return height *2+ length*2;
}
int CRectangle::GetArea()const {
	float length = ru.GetX() - ld.GetX();
	float height = ru.GetY() - ld.GetY();
	return height * length;
}