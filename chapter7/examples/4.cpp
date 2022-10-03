#include <iostream>

using namespace std;

long double probability(unsigned int number, unsigned int picks);

int main(void)
{
	unsigned int total, choices;

	cout << "Enter the total number of choices on the game gard and the number of picks allowed:" << endl;
	while(cin >> total >> choices && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choices);
		cout << " of winning." << endl;
		cout << "Please enter next two numbers: ";
	}

	cout << "Bye!" << endl;

	return 0;
}

long double probability(unsigned int number, unsigned int picks)
{
	double n, p;
	long double result = 1.0;

	for(n = number, p = picks; p > 0; n--, p--)
		result = result * n / p;

	return result;
}
