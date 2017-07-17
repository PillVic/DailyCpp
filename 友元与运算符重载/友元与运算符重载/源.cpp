#include"Array.h"
#include"Complex.h"
#include"Money.h"

using namespace std;

int main() {
	/*
	在主函数中定义复数对象c1(10,20)、c2(15,30)
	进行c2-=c1的复数运算，并输出c1、c2的复数值*/
	Complex c1(10, 20);
	Complex c2(15, 30);
	c2 -= c1;
	c1.Show();
	c2.Show();
	//2
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 }; 
	int b[10] = { 4,5,6,7,8,9,10,11,12,13 };
	Array arr1(a);
	Array arr2(b);
	Array arr3 = arr1 + arr2;
	arr3.show();
	arr1 += arr2;
	arr1.show();
	//3
	/*在主函数中定义人民币对象m1=10元8角5分 对象m2、m3
	对m1作前置“――”并赋给m2。对m1作后置“――”并赋给m3。显示m1、m2、m3的结果。*/
	Money m1(10, 8, 5), m2, m3;
	m2 = --m1;
	m3 = m1--;
	m1.Show();
	cout <<endl;
	m2.Show();
	cout << endl;
	m3.Show();
	return 0;
}