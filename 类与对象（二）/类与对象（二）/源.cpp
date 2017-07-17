#include<iostream>
#include"CPoint.h"
#include"CRectangle.h"

using namespace std;

int main() {
	CPoint pld(2, 5);
	CPoint pru(6,8);
	CRectangle *a_rectangle = new CRectangle(pld, pru);
	cout << "The perimeter: " << a_rectangle->GetPerimeter()<< endl;
	cout << "The area: " << a_rectangle->GetArea() << endl;
	a_rectangle->SetLPoint(CPoint(4,6));
	a_rectangle->SetRPoint(CPoint(7, 9));
	cout << "The perimeter: " << a_rectangle->GetPerimeter() << endl;
	cout << "The area: " << a_rectangle->GetArea() << endl;
	delete a_rectangle;
	return 0;
}