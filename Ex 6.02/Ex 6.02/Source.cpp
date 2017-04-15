//Submitted by Sabin Sapkota//
//Ex 6.2//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;

	// Open a file
	input.open("Ex13.txt");

	if (input.fail())
	{
		cout << "File does not exist" << endl;
		cout << "Exit program" << endl;
		return 0;
	}

	int count = 0;//intializing variable counting the characters//

	while (!input.eof()) // Continue if not end of file
	{
		input.get();
		count++;
	}

	count--; // adjust count since it was increased after the last character was read

	input.close();

	cout << "Number of characters is " << count << endl;
	return 0;
}
