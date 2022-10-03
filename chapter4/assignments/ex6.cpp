#include <iostream>

struct CandyBar
{
	char brand[20];
	double weight;
	int cal;
};

int main(void)
{
	using namespace std;

	CandyBar snacks[3] =
	{
		{"Mocha Munch", 2.3, 350},
		{"Mango Puddin", 2.5, 500},
		{"Cookie", 1.8, 400}
	};

	cout << "brand = " << snacks[0].brand << ", weight = " << snacks[0].weight << ", calories = " << snacks[0].cal << endl;
	cout << "brand = " << snacks[1].brand << ", weight = " << snacks[1].weight << ", calories = " << snacks[1].cal << endl;
	cout << "brand = " << snacks[2].brand << ", weight = " << snacks[2].weight << ", calories = " << snacks[2].cal << endl;

	return 0;
}
