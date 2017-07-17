#include<iostream>
#include<cmath>

using namespace std;

void Rank(int arr[],int n);
void swap(int *a, int *b);
int main() {
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand()%100;
	}
	Rank(arr, 10);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
void Rank(int arr[], int n) {
	//找出剩余元素的最大值进行排列
	for (int i = 0; i < n; i++) {   //进行n次寻找最值
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}
void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}
