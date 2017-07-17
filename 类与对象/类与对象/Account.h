#pragma once
class Account {
public:
	Account(int ii, double bb, double aa);
	void setId(int newI);
	void setBalance(double newB);
	void setAnnualInterestRate(double newA);
	int getId();
	double getBalance();
	double getAnnualInterestRate();
	double getMonthlyInterestRate();
	void withdraw(int money);
	void deposit(int money);
	double updateBalance(int month);
private:
	int id;
	double balance;
	double annualInterestRate;
};