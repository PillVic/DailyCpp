#pragma once
#include<string>

using namespace std;

class Laborage
{
public:
	Laborage() {}
	~Laborage() {}
	void Input();
	void Show()const;
private:
	int No;
	char Name[9];
	int Ssalary;
	int Security;
	int Fsalary;
};