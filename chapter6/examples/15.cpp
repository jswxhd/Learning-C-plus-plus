#include <iostream>

using namespace std;

const int Max = 5;

int main(void)
{
	int golf[Max];

	cout << "Please enter your golf scores: " << endl;
	cout << "You must enter " << Max << " rounds." << endl;

	int i;
	for(i = 0; i < Max; i++)
	{
		cout << "Round #" << i + 1 << ": " << endl;
		while(!(cin >> golf[i])) // while bad input
		{
			cin.clear();
			while(cin.get() != '\n');
			cout << "Please enter a number: ";
		}
	}

	double total = 0;
	for(int i = 0; i < Max; i++)
		total += golf[i];

	cout << "Average score = " << total / Max << "." << endl;

	return 0;
}
