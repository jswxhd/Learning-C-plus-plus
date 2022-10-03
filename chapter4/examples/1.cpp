#include <iostream>

int main(void)
{
	using namespace std;

	int yams[3];

	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamscost[3] = {20, 30, 5};

	cout << "The total yams = " << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs " << yamscost[1] << " cents per yams." << endl;
	cout << "The total yams cost " << yams[0] * yamscost[0] + yams[1] * yamscost[1] + yams[2] * yamscost[2] << " cents." << endl;

	cout << "Size of yams array = " << sizeof yams << " bytes." << endl;
	cout << "Size of one element = " << sizeof yams[0] << " bytes." << endl;

	return 0;
}
