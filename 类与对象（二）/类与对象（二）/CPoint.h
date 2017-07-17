#pragma once
class CPoint {
public:
	CPoint(int xx=0, int yy=0) :x(xx), y(yy) {}
	int GetX()const { return x; }
	int GetY()const { return y; }
	void SetX(int xx) { x = xx; }
	void SetY(int yy) { y = yy; }
private:
	int x;
	int y;
};