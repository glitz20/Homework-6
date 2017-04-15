#include <iostream>
#include "Complex.h"

using namespace std;
int main() {
	float a1, b1, a2, b2;
	//prompt for starting 2 imaginary numbers
	cout << "Enter the first complex number: ";
	cin >> a1 >> b1;
	Complex c1(a1, b1);

	cout << "Enter the second complex number: ";
	cin >> a2 >> b2;
	Complex c2(a2, b2);

	//addition
	cout << c1.toString() << "+ " << c2.toString() << " = ";
	Complex cadd = c1 + c2;
	cadd.toString();
	cout << "\n";

	//Subtraction
	cout << c1.toString() << "- " << c2.toString() << " = ";
	Complex csub = c1 - c2;
	csub.toString();
	cout << "\n";

	//Multiplication
	cout << c1.toString() << "* " << c2.toString() << " = ";
	Complex cmult = c1*c2;
	cmult.toString();
	cout << "\n";

	//Division
	cout << c1.toString() << "/ " << c2.toString() << " = ";
	Complex cdiv = c1 / c2;
	cdiv.toString();
	cout << "\n";

	//Absolute Value
	cout << "|" << c1.getRealPart() << " + " << c1.getImaginaryPart() << "i| = " << c1.abs();
	cout << endl;


	//testing [] function
	cout << "c1[1]= " << c1[1] << endl;





	return 0;
}