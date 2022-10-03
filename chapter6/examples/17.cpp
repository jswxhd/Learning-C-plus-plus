#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int SIZE = 60;

int main(void)
{
	char filename[SIZE];
	ifstream inFile;

	cout << "Enter name of data filter: ";
	cin.getline(filename, SIZE);

	inFile.open(filename);
	if(!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating." << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Successfully open the txt file." << endl;

	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while(inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;
	}

	if(inFile.eof())
		cout << "End of file reached." << endl;
	else if(inFile.fail())
		cout << "Input terminated by data mismatched." << endl;
	else
		cout << "Input terminated by unknown reason." << endl;

	if(count == 0)
		cout << "No data processed." << endl;
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}

	inFile.close();

	return 0;
}
