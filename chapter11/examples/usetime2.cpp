#include <iostream>
#include "mytime2.h"

int main(void)
{
	using std::cout;
	using std::endl;
	Time weeding(4, 35);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adjusted;

//	cout << "weeding time = " << weeding.Show() << endl;
//	cout << "waxing time = " << waxing.Show() << endl;

	cout << "total work time = ";
	total = weeding + waxing;
	total.Show();
	cout << endl;

	cout << "wedding time - waxing time = ";
	diff = weeding - waxing;
	diff.Show();
	cout << endl;

	cout << "adjusted work time = ";
	adjusted = total * 1.5;
	adjusted.Show();
	cout << endl;

	return 0;
}
