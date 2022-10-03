#include <iostream>

int main(void)
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);

	cout << "Enter the world's population: ";
	long long world;
	cin >> world;

	cout << "Enter the population of US: ";
	long long nation;
	cin >> nation;

	cout << "The population of the US is " <<  double(nation) / double(world) * 100 << "% of the world population." << endl;

	return 0;
}

