#include <iostream>

int main(void)
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);

	cout << "This program calculates the gasoline usags." << endl;

	cout << "First, enter the distance (could be in either mile or km): ";
	double distance;
	cin >> distance;

	cout << "Second, enter the gasoline used (could be in either gallon or liter): ";
	double gasoline;
	cin >> gasoline;

	double miles_per_gallon = distance / gasoline;
	double liters_per_100km = gasoline / (distance / 100);

	cout << "If the unit is miles per gallon, then the gasoline consumption = " << miles_per_gallon << " mpg"
	<< ". If the unit is liters per 100km, then the gasoline consumption = " << liters_per_100km << "L/100km" <<  endl;

	return 0;
}

