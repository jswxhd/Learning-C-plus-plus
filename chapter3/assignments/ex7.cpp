#include <iostream>

int main(void)
{
	using namespace std;
//	cout.setf(ios_base::fixed, ios_base::floatfield);

	cout << "Enter the gasoline in liters per 100km: ";
	double l_per_100km;
	cin >> l_per_100km;

	const double p1 = 62.14;
	const double p2 = 3.875;
	double mpg = 1 / (l_per_100km / (p1 * p2));

	cout << l_per_100km << " liters per 100km = " << mpg << " mpg." << endl;

	return 0;
}
