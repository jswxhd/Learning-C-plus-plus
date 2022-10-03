#include <iostream>
#include "stonewtex6.h"

const int ArSize = 6;

int main(void)
{
	using namespace std;

	double weight;
	Stonewt stns[ArSize] = {Stonewt(110.2), Stonewt(10, 3.5), Stonewt(98.4)};

	for(int i = 3; i < ArSize; i++)
	{
		cout << "Enter the weight in pounds: ";
		while(!(cin >> weight))
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "Enter a number please: ";
		}
		stns[i] = Stonewt(weight);
	}

	Stonewt max, min, benchmark(11, 0);
	max = min = stns[0];
	int count = 0;
	for(int i = 1; i < ArSize; i++)
	{
		if(stns[i] > max)
			max = stns[i];
		else if(stns[i] < min)
			min = stns[i];
		if(stns[i] >= benchmark)
			count++;
	}

	cout << "The minimum Stonewt is: ";
	min.show_stn();
	cout << "The maximum Stonewt is: ";
	max.show_stn();
	cout << count << " Stonewt are heavier than 11 stones.\n";

	return 0;
}
