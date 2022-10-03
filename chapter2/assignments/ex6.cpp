#include <iostream>

double l2a(double l);

int main(void)
{
	using namespace std;

	cout << "Enter the number of light years: ";
	double l;
	cin >> l;
	double a;
	a = l2a(l);
	cout << l << " light years = " << a << " astronomical units." << endl;

	return 0;
}

double l2a(double l)
{
	return 63240 * l;
}

