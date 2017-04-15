//Submitted by Sabin Sapkota//
//Ex 6.05//
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>
using namespace std;
//creat class
class Complex {
private:
	//two private variables, real and imaginary
	float a;
	float b;


public:
	//Constructors
	Complex(float a, float b) {
		this->a = a;
		this->b = b;
	};
	Complex(float a) {
		this->a = a;
		b = 0;
	};
	Complex() {
		a = 0;
		b = 0;
	};

	//base functions for math
	Complex add(Complex& c);
	Complex subtract(Complex& c);
	Complex multiply(Complex& c);
	Complex divide(Complex& c);
	float abs();

	string toString();

	float getRealPart();
	float getImaginaryPart();

	//nonmember functions?
	Complex operator+(Complex c);
	Complex operator-(Complex c);
	Complex operator*(Complex c);
	Complex operator/(Complex c);


	//overloading operatrs
	float operator[](int i);
	void operator=(Complex c);
	string operator<<(Complex c);
	string operator >> (Complex c);
	void operator+=(Complex c);
	void operator-=(Complex c);
	Complex operator/=(Complex c);
	Complex operator*=(Complex c);
	void operator--();
	void operator++();


};

#endif
