#include <iostream>

int main(void)
{
	using namespace std;

	double i, sum = 0;

	do
	{
		cout << "Please enter a number: ";
		cin >> i;
		sum += i;
		cout << "Till now, the summation of numbers you entered is " << sum << endl;
	}
	while(i != 0);

	return 0;
}
