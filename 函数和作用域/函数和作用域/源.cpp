#include<iostream>
#include"Man.h"
#include"Number.h"

using namespace std;

int main() {
	//实验1
	float round;
	float angle;
	cin >> round >> angle;
	convert(round, angle);
	cout << "x: " << round << " y: " << angle<<endl;
	//实验2
	float a, b;
	struct Complex c1, c2;
	cin >> a >> b;
	cout << "The product is:" << product(a, b) << endl << endl;
	cin >> c1.real >> c1.imagine;
	cin >> c2.real >> c2.imagine;
	cout << "The product is: "<< product(c1, c2).real<<"+"<<product(c1,c2).imagine <<"i"<< endl;
	cout << endl << endl;
	//实验3
	int year, month, day;
	cin >> year >> month >> day;
	int age = computeday(year, month, day);
	float emotional = compute_emotional_index(age);
	float mentality = compute_mentality_index(age);
	float physiological = compute_physiological_index(age);
	cout << compute_emotional_index(age) + compute_mentality_index(age) + compute_physiological_index(age) << endl;
	return 0;
}