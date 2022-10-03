#include <iostream>
#include <cmath>

double long2m(double l);

int main(void)
{
	using namespace std;
	cout << "Enter the distance in unit long: ";
	double l;
	cin >> l;
	double m;
	m = long2m(l);
	cout << l << " long = " << m << " ma." << endl;
	return 0;
}

double long2m(double l)
{
	double m = l * 220;
	return m;
}
