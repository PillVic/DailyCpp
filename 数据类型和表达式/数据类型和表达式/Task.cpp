#include"Task.h"

using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

float max(float a, float b) {
	return a > b ? a : b;
}

float F_C(float f) {
	return (f - 32) * 5 / 9;
}

float Km_Ml(float km) {
	return km / 1.60934;
}

int set1_4(int n) {
	return n | 0x0F;
}