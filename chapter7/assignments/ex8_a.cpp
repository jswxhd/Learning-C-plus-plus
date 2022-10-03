#include <iostream>
#include <string>

using namespace std;

const int Seasons = 4;

const char * pseason[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct expense
{
	double money[Seasons];
};

void fill(expense *pe);
void show(expense e);

int main(void)
{
	expense exp;

	fill(&exp);
	show(exp);

	return 0;
}

void fill(expense *pe)
{
	for(int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << pseason[i] << " expenses: ";
		cin >> pe->money[i];
	}
}

void show(expense e)
{
	double total = 0.0;
	cout << "EXPENSES:" << endl;
	for(int i = 0; i < Seasons; i++)
	{
		cout << pseason[i] << ": $" << e.money[i] << endl;
		total += e.money[i];
	}
	cout << "Total expenses: $" << total << endl;
}
