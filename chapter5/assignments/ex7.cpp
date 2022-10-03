#include <iostream>
#include <cstring>

const int ArSize = 20;

struct car
{
	char make[ArSize];
	int year;
};

int main(void)
{
	using namespace std;

	cout << "How many cars do you wish to catalog? ";
	int num;
	cin >> num;
	cin.get();
	car * cars = new car [num];

	for(int i = 0; i < num; i++)
	{
		cout << "Car #" << i+1 << endl;

		cout << "Please enter the make: ";
		char make[ArSize];
		cin.get(make, ArSize).get();
		strcpy(cars[i].make, make);

		cout << "Please enter the year made: ";
		int year;
		cin >> year;
		cin.get();
		cars[i].year = year;
	}

	cout << "Here is your collection:" << endl;
	for(int i = 0; i < num; i++)
	{
		cout << cars[i].year << " " << cars[i].make << endl;
	}

	delete [] cars;
	return 0;
}
