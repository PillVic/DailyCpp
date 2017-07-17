#pragma once
#include<iostream>
using namespace std;

class Money
{
public:
	Money(int yy=0, int jj=0, int ff=0) :yuan(yy), jiao(jj), fen(ff) {}
	Money operator --(int){       //后置单目运算符重载
		yuan -= 1;
		return *this;
	}
	Money operator--()           //后置单目运算符重载
	{
		yuan -= 1;
		return (yuan + 1, jiao, fen);
	}
	void Show()const {
		cout << yuan << "元" << jiao << "角" << fen << "分";
	}
private:
	int yuan;
	int jiao;
	int fen;
};