#pragma once
class Complex
{
public:
	Complex(float r=0,float i=0):real(r),image(i){}
	~Complex(){}
	Complex operator -=(const Complex &c1) {
		this->image -= c1.image;
	    this->real -= c1.real;
		return *this;
	}
	void Show()const {
		cout << real << '+' << image << 'i' << endl;
	}
private:
	float real;
	float image;
};
