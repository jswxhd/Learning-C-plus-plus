#include <iostream>
#include "coordin.h"

using namespace std;

int main(void)
{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";

	while(cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two values, <q> to quit: ";
	}

	return 0;
}