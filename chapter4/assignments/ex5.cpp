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

	CandyBar snack = {"Mocha Munch", 2.3, 350};

	cout << "brand = " << snack.brand << ", weight = " << snack.weight << ", calories = " << snack.cal << endl;

	return 0;
}
