#include <iostream>

double c2f(double c);

int main(void)
{
	using namespace std;

	cout << "Please enter a Celsius value: ";
	double c;
	cin >> c;
	double f;
	f = c2f(c);
	cout << c << " degrees Celsius is " << f << " degrees Fahrenheit." << endl;
	return 0;
}

double c2f(double c)
{
	return 1.8 * c + 32.0;
}
