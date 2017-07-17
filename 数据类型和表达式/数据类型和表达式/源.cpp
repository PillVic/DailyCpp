#include"Task.h"
#include<iostream>

using namespace std;

int main() {
	cout << "Task 1:please input 2 interger" << endl;
	int a, b;
	cin >> a >> b;
	cout <<"The bigger interger is "<< max(a, b)<<endl;
	cout << "Task2: please input 2 float number" << endl;
	float m, n;
	cin >> m >> n;
	cout <<"The bigger number is "<< max(m, n) << endl;
	cout << "Task3: please input the F " << endl;
	float f;
	cin >> f;
	cout << "C is " << F_C(f) << endl;
	cout << "Task4: please input kilometers" << endl;
	float km;
	cin >> km;
	cout << "The mile is " << Km_Ml(km) << endl;
	int i;
	cout << "Task5: please input a interger" << endl;
	cin >> i;
	cout << "the interger now is " << set1_4(i) << endl;
	return 0;
}