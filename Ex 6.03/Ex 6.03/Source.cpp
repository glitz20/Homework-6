//Submitted by Sabin Sapkota//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int year, rank;
	char ch;
	string name, bname, gname, filename,bcount, gcount;
	
	cout << "Enter the year: ";
	cin >> year;
	switch (year)//selects the text file depending upon the year entered
	{
	case 2010:filename = "Babynameranking2010.txt";
		break;
	case 2011:filename = "Babynameranking2011.txt";
		break;
	case 2012: filename = "Babynameranking2012.txt";
		break;
	case 2013: filename = "Babynameranking2013.txt";
		break;
	case 2014: filename = "Babynameranking2014.txt";
		break;
	default: cout << "We donot have database for this year";//if there is no matching year//
		return 0;

	}
	cout << "Enter the gender: ";
	cin >> ch;
	cout << "Enter the name: ";
	cin >> name;
	//open file
	ifstream input;
	input.open(filename);
	//file not present
	if (input.fail())
	{
		cout << filename << "Data not available. \n Exit program";
		return 0;
	}
	
		while (!input.eof())
		{
			input >> rank >> bname >> bcount >> gname >> gcount;
			if (ch == 'M' || ch == 'm')
			{
				if (name == bname)//if the entered name matches with the boy name in the text//
				{
					cout << bname << "is ranked #" << rank << "in year" << year;
					return 0;
				}
			}
			else if (ch == 'F' || ch == 'f')
			{
				if (name == gname)//if the entered name matches with the girls name in the text//
				{
					cout << gname << "is ranked #" << rank << "in year" << year;
					return 0;
				}
			}
		}
	
	input.close();
	return 0;
}