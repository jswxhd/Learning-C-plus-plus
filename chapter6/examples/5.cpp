#include <iostream>

using namespace std;

const int ArSize = 6;

int main(void)
{
	float value[ArSize];
	float temp;

	cout << "Enter six numbers and compare with your level." << endl;
	cout << "Terminate condition: when you make 6 number or enter a negative number. " << endl;

	cout << "First value: ";
	cin >> temp;

	int i = 0;
	while(i < ArSize && temp >= 0)
	{
		value[i] = temp;
		++i;
		if(i < ArSize)
		{
			cout << "Next value: ";
			cin >> temp;
		}
	}

	if(i == 0)
		cout << "No data -- byte." << endl;
	else
	{
		cout << "Enter your level: ";
		float level;
		cin >> level;
		int count = 0;
		for(int j = 0; j < i; j++)
		{
			if(value[j] > level)
				count++;
		}

		cout << count << " numbers are bigger than your level." << endl;
	}

	return 0;
}
