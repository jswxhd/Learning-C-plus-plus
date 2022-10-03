#include <iostream>

int main(void)
{
	using namespace std;

	cout << "Enter your height in inch:___\b\b\b ";
	int height_in_inch;
	cin >> height_in_inch;

	const int p = 12;
	cout << "Your height in foot and inch is " << height_in_inch/p << " feet, " << height_in_inch%p << " inches" << endl; 

	return 0;
}
