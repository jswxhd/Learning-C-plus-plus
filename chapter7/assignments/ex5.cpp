#include <iostream>

using namespace std;

long factorial(int n);

int main(void)
{
	int n;
	long result;

	cout << "Enter a number: ";
	while(cin >> n)
	{
		result = factorial(n);
		cout << n << "! = " << result << endl;
		cout << "Enter next number: ";
	}
	return 0;
}

long factorial(int n)
{
	if(n == 0)
		return 1;
	if(n == 1)
		return 1;
	return n * factorial(n-1);
}
