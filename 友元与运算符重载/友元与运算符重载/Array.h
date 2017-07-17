#pragma once
#include<iostream>

using namespace std;

class Array
{
public:
	Array() { 
		for (int i = 0; i < 10; i++) {
			a[i] = 0;
		}
	}
	Array(int newA[10]) {
		for (int i = 0; i < 10; i++) {
			a[i] = newA[i];
		}
	}
	void show()const {
		for (int i = 0; i < 10; i++) {
			cout << a[i] << ' ';
		}
		cout << endl;
	}
	Array operator  +=(const Array& arr1) {
		return *this + arr1;
	}
	Array operator+(const Array &arr) {
		Array t = *this;
		for (int i = 0; i < 10; i++) {
			t.a[i] += arr.a[i];
		}
		return t;
	}
private:
	int a[10];
};
