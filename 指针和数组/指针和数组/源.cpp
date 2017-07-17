#include"Task.h"
#include<iostream>
#include<math.h>
using namespace std;

int main() {
	//Task1
	for (int i = 0; i < 5; i++) {
		int scores[5];
		for (int j = 0; j < 5; j++) {
			scores[j] = rand() % 100;
		}
		cout << avg_ar(scores, 5) << " ";
		cout << avg_pt(scores, 5) << endl;
	}
	//Task 2
	int arr1[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr1[i][j];
		}
	}
	int arr2[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr2[i][j];
		}
	}
	int arr3[3][3];
	addMatrix(arr1, arr2, arr3,3);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
	multiplyMatrix(arr1, arr2, arr3,3);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}