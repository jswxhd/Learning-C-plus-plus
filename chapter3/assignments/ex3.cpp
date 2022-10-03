#include <iostream>

int main(void)
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);

	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
	cout << "First, enter the degrees: ";
	double degrees;
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	double minutes;
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	double seconds;
	cin >> seconds;

	const int m2d = 60;
	const int s2m = 60;
	double result = degrees +  minutes / m2d + seconds / s2m / m2d;
	cout << (int) degrees << " degrees, " << (int) minutes << " minutes, "
	<< (int) seconds << " seconds = " << result << " degrees" << endl;
	return 0;
}
