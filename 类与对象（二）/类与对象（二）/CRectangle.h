#pragma once
#include"CPoint.h"
/*
设计一个矩形类CRectangle，该类满足下述要求：
具有矩形的左下角和右上角两个点的坐标信息，这两个点的数据类型是CPoint；
具有带参数的构造函数CRectangle(const CPoint &, const CPoint &)
参数分别用于设置左下角和右上角两个点的坐标信息；
具有设置左下角和设置右上角的两个点坐标的功能SetLPoint(const CPoint &)和SetRPoint(const CPoint &)
具有获得周长（GetPerimeter）和获得面积（GetArea）的功能。
*/
class CRectangle {
public:
	CRectangle(const CPoint& newLD, const CPoint & newRu);
	void SetLPoint(const CPoint&);
	void SetRPoint(const CPoint&);
	int GetPerimeter()const;
	int GetArea()const;
private:
	CPoint ld;
	CPoint ru;
};