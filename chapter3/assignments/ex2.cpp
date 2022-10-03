#include <iostream>
#include <cmath>

double get_BMI(int height_in_foot, int height_in_inch, int weight_in_pound);

int main(void)
{
	using namespace std;

	cout << "Enter your height in foot and inch:" << endl;
	int height_in_foot;
	int height_in_inch;

	cout << "First, enter the height in foot: ";
	cin >> height_in_foot;
	cout << "Second, enter the height in inch: ";
	cin >> height_in_inch;
	cout << "You entered " << height_in_foot << " feet, " << height_in_inch << " inches." << endl;	

	int weight_in_pound;
	cout << "Enter your weight in pound: ";
	cin >>  weight_in_pound;
	cout << "You entered " << weight_in_pound << " pounds" << endl;

	double bmi = get_BMI(height_in_foot, height_in_inch, weight_in_pound);
	cout << "Your BMI is " << bmi << endl;
	return 0;
}

double get_BMI(int height_in_foot, int height_in_inch, int weight_in_pound)
{
	const int FOOT_TO_INCH = 12;
	const double INCH_TO_METER = 0.0254;
	double height_in_meter = (FOOT_TO_INCH * height_in_foot + height_in_inch) * INCH_TO_METER;

	const double KG_TO_POUND = 2.2;
	double weight_in_kg = weight_in_pound / KG_TO_POUND;

	double bmi = weight_in_kg / pow(height_in_meter,2);
	return bmi;
}
