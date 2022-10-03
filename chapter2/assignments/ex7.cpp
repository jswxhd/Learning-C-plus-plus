#include <iostream>

using namespace std;

void show(int h, int m);

int main(void)
{
	cout << "Enter the number of hours: ";
	int h;
	cin >> h;
	cout << "Enter the number of minutes: ";
	int m;
	cin >> m;
	show(h, m);
	return 0;
}

void show(int h, int m)
{
	cout << "Time: " << h << ":" << m << endl;
}
