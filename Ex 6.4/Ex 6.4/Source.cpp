#include "Circle.h"
#include <iostream>
using namespace std;
int main()
{
	Circle c1(10);
	Circle c2(20);
	Circle c3(5);
	Circle c4(15);
	Circle c5(7);

	Circle array[5] = { c1, c2, c3, c4, c5 }; //Created a circle array just to sift through them to find the largest one

	Circle largest;
	for (int i = 0; i < 5; i++)
	{
		if (array[i] > largest)//defined in cpp file
			largest = array[i];
	}

	cout << largest.getRadius() << endl;//output largest circle

	return 0;
}