//Submitted by Sabin Sapkota//
//Ex 6.1//

#include <iostream>
#include<ctime>
#include<cstdlib>
#include <fstream>
using namespace std;

int main()
{
	ofstream output;
	output.open("Exercise13_1.txt");//creates a text file//
	srand(time(0));
	cout << "Here are the randomly generated hundred numbers"<<endl;
	for (int i = 0; i < 100; i++)
	{
		int j;
	    j= rand() % 1000;//creates random numbers//
		output << j<<" ";
	}

	output.close();
	return 0;
}