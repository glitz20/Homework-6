#include "Complex.h"
#include <iostream>

//adding function
Complex Complex::add(Complex& c) {
	//follows imaginary number equation
	return Complex(getRealPart() + c.getRealPart(), getImaginaryPart() + c.getImaginaryPart());
}
//subtraction function
Complex Complex::subtract(Complex& c) {
	//follows imaginary number equation

	return Complex(getRealPart() - c.getRealPart(), getImaginaryPart() - c.getImaginaryPart());

}
//multiplication function
Complex Complex::multiply(Complex& c) {
	return Complex((getRealPart()*c.getRealPart() - getImaginaryPart()*c.getImaginaryPart()), (getImaginaryPart()*c.getRealPart() + getRealPart()*c.getImaginaryPart()));

}
//division function
Complex Complex::divide(Complex& c) {
	return Complex((getRealPart()*c.getRealPart() + getImaginaryPart()*c.getImaginaryPart()) / (c.getRealPart()*c.getRealPart() + c.getImaginaryPart()*c.getImaginaryPart()), (getImaginaryPart()*c.getRealPart() - getRealPart()*c.getImaginaryPart()) / (c.getRealPart()*c.getRealPart() + c.getImaginaryPart()*c.getImaginaryPart()));
}
//absolute value function
float Complex::abs() {
	return sqrt(getRealPart()*getRealPart() + getImaginaryPart()*getImaginaryPart());

}
//sets the object into a string output, sort of
string Complex::toString() {
	cout << "(" << getRealPart() << " + " << getImaginaryPart() << "i) ";
	return "";

}
//get functions
float Complex::getRealPart() {
	return a;
}
float Complex::getImaginaryPart() {
	return b;
}
//basic operator functions
Complex Complex::operator+(Complex c) {
	return add(c);
}
Complex Complex::operator-(Complex c) {
	return subtract(c);
}
Complex Complex::operator*(Complex c) {
	return multiply(c);
}
Complex Complex::operator/(Complex c) {
	return divide(c);
}
//nonbasic operator functions
float Complex::operator[](int i) {
	if (i == 0)
		return getRealPart();
	//default return is imaginary number (if not 0 or 1)
	else return getImaginaryPart();
}
//sets original to specified
void Complex::operator=(Complex c) {
	this->a = c.getRealPart();
	this->b = c.getImaginaryPart();

}
//couts the specified object
string Complex::operator<<(Complex c) {
	c.toString();
	return "";
}
//takes in values to create object
string Complex::operator >> (Complex c) {
	int a, b;
	cin >> a >> b;
	this->a = a;
	this->b = b;

	return "";
}
//appends values to a number
void Complex::operator+=(Complex c) {
	this->a += c.getRealPart();
	this->b += c.getImaginaryPart();

}//takes away numbers to a imag number
void Complex::operator-=(Complex c) {
	this->a -= c.getRealPart();
	this->b -= c.getImaginaryPart();

}//divides a function by another,
Complex Complex::operator/=(Complex c) {
	Complex div(this->a, this->b);
	Complex ans = div / c;
	return ans;
}//multiplies another number by itself
Complex Complex::operator*=(Complex c) {
	Complex mult(this->a, this->b);
	Complex ans = mult*c;
	return ans;

}//subtracts number by 1
void Complex::operator--() {
	this->a--;
	this->b--;

}//adds 1 to imaginary number
void Complex::operator++() {
	this->a++;
	this->b++;
}