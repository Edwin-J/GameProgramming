#include<iostream>
using namespace std;

class Complex {
	double re, im;
	friend Complex add(Complex c1, Complex c2);
public :
	Complex(double c, double i){
		re = c; im = i;
	}

	void Output(){
		cout << re << "+" << im << "i" << endl;
	}
};

Complex add(Complex c1, Complex c2){
	return Complex(c1.re + c2.re, c1.im + c2.im);
}

void main(){
	Complex com1(1, 2), com2(3, 4);
	Complex com3 = add(com1, com2);
	com3.Output();
}