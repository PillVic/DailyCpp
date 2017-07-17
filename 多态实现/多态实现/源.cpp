#include"CCube.h"
#include"CSphere.h"
#include"CStereoShape.h"
#include<iostream>

using namespace std;

int main() {
	CCube a_cube(1, 2, 3);
	CSphere c_sphere(3);
	CStereoShape *p;
	a_cube.Set(5, 4, 6);
	p = &a_cube;
	cout << "Area: " << p->GetArea() << endl;
	cout << "Volume: " << p->GetVolume() << endl;
	c_sphere.SetR(7);
	p = &c_sphere;
	cout << "Area: " << p->GetArea() << endl;
	cout << "Volume: " << p->GetVolume() << endl;
	return 0;
}