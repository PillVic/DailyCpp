#include"Man.h"
#include<math.h>
#include<time.h>
#define caltime(x)   2* PI/x

using namespace std;

const float PI = 3.1415926;

int computeday(int year, int month, int day) {
	struct tm birth;
	birth.tm_year = year-1900;
	birth.tm_mon = month-1;
	birth.tm_mday = day;
	birth.tm_hour = 0;
	birth.tm_sec = 0;
	birth.tm_min = 0;
	time_t birSec = mktime(&birth);
	//获取现在时间秒数
	time_t nowSec = time(NULL);
	return int(nowSec-birSec) / (3600 * 24);
}

float compute_physiological_index(int age) {
	return sin(caltime(28)*age);
}
float compute_emotional_index(int age) {
	return sin(caltime(23)*age);
}
float compute_mentality_index(int age) {
	return sin(caltime(33)*age);
}


