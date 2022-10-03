#include <iostream>

int main(void)
{
	using namespace std;

	cout << "This program will calculate the summation of integers between the two integers you type\n";

	cout << "Enter the first integer: " ;
	int num1;
	cin >> num1;

	cout << "Enter the second integer: ";
	int num2;
	cin >> num2;

	int sum = 0;
	for(int i = num1; i <= num2; i++)
		sum += i;

	cout << "The result is " << sum << endl;

	return 0;
}
