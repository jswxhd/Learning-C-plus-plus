#include <iostream>

using namespace std;

double hmean(int x, int y);

int main(void)
{
	int num1, num2;
	double res;

	cout << "Please enter two numbers: ";

	while(cin >> num1 >> num2)
	{
		res = hmean(num1, num2);
		cout << "The harmonic mean of two numbers is " << res << endl;
		cout << "Enter next two numbers: ";
	}

	return 0;
}

double hmean(int x, int y)
{
	return 2.0 * x * y / (x + y);
}

