#include"Laborage.h"
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

void Laborage::Input() {
	cin >> No;
	cin.ignore();
	cin.getline(Name,9);
	cin >> Ssalary >> Security;
	Fsalary = Ssalary - Security;
}

void Laborage::Show()const {
std::cout<<std::left<<setw(8)<< No <<setw(10)<< Name << setw(10)
		 << Ssalary << setw(10) << Fsalary << endl;
}