#include <iostream>

using namespace std;

int main(void)
{
	int rats = 10;
	int & rodents = rats;

	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

	rodents++;
	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

	cout << "&rats = " << &rats << endl;
	cout << "&rodents = " << &rodents << endl;

	return 0;
}
