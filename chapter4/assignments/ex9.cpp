#include <iostream>
#include <string>

struct CandyBar
{
	//char brand[20];
	std::string brand;
	double weight;
	int cal;
};

int main(void)
{
	using namespace std;

	CandyBar *snacks = new CandyBar [3];

	snacks[0].brand = "Moncha Munch";
	snacks[0].weight = 2.3;
	snacks[0].cal = 330;

	snacks[1].brand = "Mango Puddin";
	snacks[1].weight = 2.5;
	snacks[1].cal = 500;

	snacks[2].brand = "Cookie";
	snacks[2].weight = 1.8;
	snacks[2].cal = 400;

	cout << "brand = " << snacks[0].brand << ", weight = " << snacks[0].weight << ", calories = " << snacks[0].cal << endl;
	cout << "brand = " << snacks[1].brand << ", weight = " << snacks[1].weight << ", calories = " << snacks[1].cal << endl;
	cout << "brand = " << snacks[2].brand << ", weight = " << snacks[2].weight << ", calories = " << snacks[2].cal << endl;

	delete [] snacks;

	return 0;
}
