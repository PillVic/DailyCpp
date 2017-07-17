#include"CCube.h"

using namespace std;

CCube::CCube(float newW,float newL,float newH) :width(newW),length(newL),height(newH){}

float CCube::GetArea()const {
	return (width*length + width*height + length*height) * 2;
}
float CCube::GetVolume()const {
	return width*length*height;
}

void CCube::Set(float ww, float ll, float hh) {
	width = ww;
	length = ll;
	height = hh;
}
