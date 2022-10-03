#include <iostream>
#include "stonewtex5.h"

int main(void)
{
	using namespace std;

	Stonewt stn1(280.7);
	cout << "stn1 in PDFT: " << stn1;
	stn1.stn_mode();
	cout << "stn1 in STN: " << stn1;
	stn1.pdint_mode();
	cout << "stn1 in PDINT: " << stn1;

	Stonewt stn2(18, 0.2);
	cout << "stn2 in STN: " << stn2;
	stn2.pdft_mode();
	cout << "stn2 in PDFT: " << stn2;

	cout << "stn1 + stn2: " << stn1 + stn2;
	cout << "stn1 - stn2: " << stn1 - stn2;
	cout << "stn1 * 3: " << stn1 * 3;
	cout << "2 * stn2: " << 2 * stn2;

	return 0;
}
