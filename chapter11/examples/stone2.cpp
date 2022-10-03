#include <iostream>
#include "stonewt2.h"

int main(void)
{
	using std::cout;
/**
	Stonewt poppins(9, 2.8);
	double p_wt = poppins;

	cout << "Convert to double => ";
	cout << "Poppins: " << p_wt << " pounds.\n";
	cout << "Convert to int => ";
	cout << "Poppins: " << int (poppins) << " pounds.\n";
**/

	Stonewt poppins2(10, 8.3);
	Stonewt poppins3 = poppins2 * 2.0;
	cout << "Poppins3:\n";
	poppins3.show_stn();

	Stonewt poppins4 = 2.0 * poppins2;
	cout << "Poppins4:\n";
	poppins4.show_stn();

	return 0;
}
