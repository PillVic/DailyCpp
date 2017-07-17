#include"Task.h"
#include<iostream>

using namespace std;

int avg_ar(int scores[], int number) {
	int sum = 0;
	for (int i = 0; i < number; i++) {
		sum += scores[i];
	}
	return sum / number;
}

int avg_pt(int * pt, int number) {
	int sum = 0;
	for (int i = 0; i < number; i++,pt+=1) {
		sum += *pt;
	}
	return sum / number;
}

void addMatrix(int a[][COLUMN_SIZE], int b[][COLUMN_SIZE], int c[][COLUMN_SIZE], int rowSize) {
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < COLUMN_SIZE; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}
void multiplyMatrix(int a[][COLUMN_SIZE], int b[][COLUMN_SIZE], int c[][COLUMN_SIZE], int rowSize) {
	if (rowSize != COLUMN_SIZE) {
		cout << "Invalid Data" << endl;
		return;
	}
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < rowSize; j++) {
			c[i][j] = 0;
		}
	}
	for (int q = 0; q < rowSize; q++) {
		for (int w = 0; w <rowSize; w++) {//使用for循环写新矩阵的每一个新元素
			for (int e = 0; e < rowSize; e++) {
				c[q][w] += a[q][e] * b[e][w];
			}
		}
	}
}

