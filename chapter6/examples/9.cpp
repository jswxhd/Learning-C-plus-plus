#include <iostream>

int main(void)
{
	using namespace std;

	int a, b;
	int c;

	cout << "Enter two integers: ";
	cin >> a >> b;

	c = a > b ? a : b;

	cout << "The larger of " << a << " and " << b << " is " << c << endl;

	return 0;
}
