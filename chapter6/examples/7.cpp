#include <iostream>
#include <climits>

using namespace std;

bool is_int(double x);

int main(void)
{
	double number;

	cout << "Enter an integer value: ";
	cin >> number;

	while(!is_int(number))
	{
		cout << "Out of range, please enter again: ";
		cin >> number;
	}

	int value = (int) number;
	cout << "You've entered an integer: " << value << endl;

	return 0;
}

bool is_int(double x)
{
	if(x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}
