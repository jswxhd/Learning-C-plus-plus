#include <iostream>

using namespace std;

const int ArSize = 4;
const int Levels[ArSize] = {0, 5000, 15000, 35000};
const double Tax[ArSize] = {0, 0.1, 0.15, 0.2};

int main(void)
{
	int salary;

	cout << "Please enter your salary: ";

	while(cin >> salary && salary > 0)
	{
		double totaltax = 0;
		int i;
		for(i = 0; i < ArSize - 1; i++)
		{
			if(salary < Levels[i+1])
				break;
			else
				totaltax += (Levels[i+1] - Levels[i]) * Tax[i];
		}
		totaltax += (salary - Levels[i]) * Tax[i];
		cout << "Your total tax is " << totaltax << endl;

		cout << "Please enter your next salary: ";
	}

	return 0;
}
