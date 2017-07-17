#include"Number.h"
#include<math.h>

using namespace std;

void convert(float &round, float &angle) {
	float x = round *cos(angle);
	float y = round *sin(angle);
	round = x;
	angle = y;
}

float product(float x, float y) { return x*y; }

Complex product(struct Complex c1,struct Complex c2) {
	struct Complex t;
	t.real = c1.real*c2.real - c1.imagine * c2.imagine;
	t.imagine = c1.real*c2.imagine + c1.imagine*c2.real;
	return t;
}