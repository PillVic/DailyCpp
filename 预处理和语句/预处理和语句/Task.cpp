#include"Task.h"
#include<iostream>
#include<math.h>
#include<string>
using namespace std;

double CalWage(int hours, double wage) {
	if (hours <= 40) {
		return hours * wage;
	}
	else if (hours <= 60) {
		return 40 * wage + (hours - 40)*wage*1.5;
	}
	else {
		return 40 * wage + 10 * wage*1.5 + (hours - 50) * 3 * wage;
	}
}

string str_mth[12] = { 
	"January","February", "March","April",
	"May","June","July","August",
	"September","October","November","December"
};
int it_mth[12] = {
	31,28,31,30,
	31,30,31,31,
	30,31,30,31
};
string str_wk[7] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
int ComputeDay(int year, int day) {
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
		it_mth[1] += 1;
	}
	int sum = day;
	for (int i = 0; i < 12; i++) {
		//January 1, 2005 is Saturday
		cout << str_mth[i] << " " << 1 << ", " << year << " is " << str_wk[sum % 7] << endl;
		if (i < 11) { sum += it_mth[i + 1]; }
	}

	it_mth[1] = 28;
	return 0;
}

void LoadPlan(double amount, int years, double rate) {
	cout << "Load amount: " << amount << endl;
	cout << "Number of Years: " << years << endl;
	cout << "Annual Interest of Rate: " << rate << endl << endl;
	int month = years * 12;
	double monRate = rate / 12;
	cout << "Monthly Payment: ";
	double Topay = month*amount*monRate*pow(1 + monRate, month) / (pow(1 + monRate, month) - 1);
	// 〔贷款本金×月利率×（1＋月利率）＾还款月数〕÷〔（1＋月利率）＾还款月数－1〕
	cout << Topay / 12 << endl;
	//设贷款额为a，月利率为i，年利率为I，还款月数为n，每月还款额为b，还款利息总和为Y 
	//n×a×i×（1＋i）^n÷〔（1＋i）^n－1〕
	cout << "Totally Payment:";

	cout << Topay;
	cout << endl;

	cout << "Payment#      Interest     Principal      Balance" << endl;
	for (int i = 0; i < month; i++) {
		cout << i + 1 << "              ";
		cout << amount*monRate << "      ";
		cout << Topay / 12 - amount*monRate << "       ";
		amount -= Topay / 12 - amount*monRate;
		cout << amount << endl;
	}
}



