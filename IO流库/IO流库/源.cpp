#include<iostream>
#include"Laborage.h"
#include<iomanip>
#include<fstream>
#include<string>
#include<stdio.h>

using namespace std;


int main() {
	Laborage a[3];
	for (int i = 0; i < 3; i++) {
		a[i].Input();
	}
	for (int i = 0; i < 3; i++) {
		a[i].Show();
	}

	//2
	//b文件的复制
	ifstream src1("E:\\ex\\a.txt");
	ofstream tgtB("E:\\ex\\b.txt");
	char data[90] = { '\n' };
	src1.get(data, 90, EOF);
	for (int i = 0; i < 90&&data[i]!='\n'; i++) {
		tgtB.put(data[i]);
	}
	tgtB.close();
	src1.close();
	//C文件的复制
	ifstream src2("E:\\ex\\a.txt");
	ofstream tgtC("E:\\ex\\c.txt");
	string line;
	getline(src2, line);
	tgtC << line;
	//3
	//读取数据并存储到数组中
	int arr2[3][5];
	FILE *source;
    fopen_s(&source,"e:\\ex\\array1.txt", "r");
	FILE *fp;
	fopen_s(&fp, "e:\\ex\\array2.txt", "w+");
	for (int i = 0; i < 3; i++) {
		fscanf_s(source, "%d %d %d %d",
			&arr2[i][0],&arr2[i][1],&arr2[i][2],&arr2[i][3]
			);
		fscanf_s(fp, "\n");
	}
	for (int i = 0; i < 3; i++) {
		arr2[i][4] = (arr2[i][1] + arr2[i][2] + arr2[i][3]) / 3;
	}
	//按平均分排序，将结果写到新数组中
	int newArr[3][5];
	int max = arr2[0][4];
	int stepMax = 0;
	for (int i = 0; i < 3; i++) {
		if (arr2[i][4] > max) {
			max = arr2[i][4];
			stepMax = i;
		}
	}
	for (int i = 0; i < 5; i++) {
		newArr[0][i] = arr2[stepMax][i];
	}
	int min = max;
	int stepMin = stepMax;
	for (int i = 0; i < 3; i++) {
		if (arr2[i][4] < min) {
			min = arr2[i][4];
			stepMin = i;
		}
	}
	for (int i = 0; i < 5; i++) {
		newArr[2][i] = arr2[stepMin][i];
	}
	int sum = 0 + 1 + 2;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			newArr[1][j] = arr2[sum-stepMax-stepMin][j];
		}
	}
//输出结果到文件
	FILE *out_fp;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			fprintf(fp, "%d ", newArr[i][j]);
		}
		fprintf(fp, "\n");
	}
	return 0;
}