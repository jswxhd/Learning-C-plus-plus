#include <iostream>

using namespace std;

const int ArSize = 2;

double calculate(double x, double y, double (*pf)(double, double));
double add(double x, double y);
double multi(double x, double y);

int main(void)
{
	double num1, num2;
	double (*pf[ArSize])(double, double) = {add, multi};

	cout << "Please enter two numbers:" << endl;
	while(cin >> num1 >> num2)
	{
		for(int i = 0; i < ArSize; i++)
		{
			cout << "num1 ? num2 = "
			     << calculate(num1, num2, pf[i])
			     << endl;
		}
		cout << "Enter next two numbers:" << endl;
	}
	return 0;
}

double calculate(double x, double y, double (*pf)(double, double))
{
	return (*pf)(x, y);
}

double add(double x, double y)
{
	return x + y;
}

double multi(double x, double y)
{
	return x * y;
}
