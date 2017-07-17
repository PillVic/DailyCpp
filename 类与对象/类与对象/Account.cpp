#include<iostream>
#include"Account.h"

using namespace std;
//构造函数
Account::Account(int ii, double bb, double aa) {
	id = ii;
	balance = bb;
	annualInterestRate = aa;
}

//更改函数
void Account::setId(int newI) {
	id = newI;
}
void Account::setBalance(double newB) {
	balance = newB;
}
void Account::setAnnualInterestRate(double newA) {
	annualInterestRate = newA;
}

//访问函数
int Account::getId() {
	return id;
}
double Account::getBalance() {
	return balance;
}
double Account::getAnnualInterestRate() {
	return annualInterestRate;
}
double Account::getMonthlyInterestRate() {
	return annualInterestRate / 12;
}

//支取和存入
void Account::withdraw(int money) {
	balance -= money;
}
void Account::deposit(int money) {
	balance += money;
}

//更新账户余额函数
double Account::updateBalance(int month) {
	double copyBalance = balance;
	for (int i = 1; i <= month; i++) {
		copyBalance += getMonthlyInterestRate()*copyBalance;
	}
	return copyBalance;
}
