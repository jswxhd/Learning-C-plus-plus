#include <iostream>

int main(void)
{
	using namespace std;

	cout << "Enter the number of seconds: ";
	long seconds;
	cin >> seconds;

	const int day2hr = 24;
	const int hr2min = 60;
	const int min2sec = 60;
	int days = seconds / (min2sec * hr2min * day2hr);
	int remains1 =  seconds % (min2sec * hr2min * day2hr);
	int hours = remains1 / (hr2min * min2sec);
	int remains2 = remains1 % (hr2min * min2sec);
	int minutes = remains2 / min2sec;
	int remains3 = remains2 % min2sec;

	cout << seconds << " seconds = " << days << " days, " << hours <<
	" hours, " << minutes << " minutes," << remains3 << " seconds" << endl;
	return 0;
}
