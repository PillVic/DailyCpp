#include"CSphere.h"

using namespace std;

const float pi = 3.1415926;
CSphere::CSphere(float newR) :radius(newR){}

float CSphere::GetArea()const {
	return 4 * pi*radius*radius;
}

float CSphere::GetVolume() const {
	return 4 / 3 * pi*radius*radius*radius;
}

void CSphere::SetR(float newR) {
	radius = newR;
}